#include "MyForm.h"
#include "BancCard.h"
#include "AddExpense.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FinanceManagementSystemGraphicalApp::MyForm form;
	Application::Run(% form);    
}

System::Void FinanceManagementSystemGraphicalApp::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::String^ out;
	vector<Date> week = daysOfweek();
	if (MonoBanc->expensesPerWeek(week).empty())
	{
		out = "No spending found in the selected week\n";
	}
	else {
		for (auto ex : MonoBanc->expensesPerWeek(week)) {
			out += ex.show() + "\n";
		}
	}
	this->label1->Text = out;
	this->Balance->Text = "$" + System::Convert::ToString(MonoBanc->getBalance());
	return System::Void();
}

System::Void FinanceManagementSystemGraphicalApp::MyForm::Add_Expense_Click(System::Object^ sender, System::EventArgs^ e)
{
	AddExpense^ receiveData = gcnew AddExpense;
	receiveData->ShowDialog(this);
	if (receiveData->getIsCanceled() == false) {
		receiveData->setIsCanceled(true);
		System::DateTime selectedDate = receiveData->getDate()->Value;
		std::string name = msclr::interop::marshal_as<std::string>(receiveData->getNane());
		double sum = receiveData->getSum();
		int cat = (int)receiveData->getCategorie();
		MonoBanc->addExpense(Expense(selectedDate, name, sum, cat));
		MonoBanc->writeToFile();
	}
	return System::Void();
}

System::Void FinanceManagementSystemGraphicalApp::MyForm::Categories_sum_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->label1->Text = MonoBanc->listCategoriesSummery();
	this->Balance->Text = "$" + System::Convert::ToString(MonoBanc->getBalance());
	return System::Void();
}

System::Void FinanceManagementSystemGraphicalApp::MyForm::topThreeExpensesPerMonth_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	int month = this->dateTimePicker->Value.Month;
	//this->label1->Text = MonoBanc.expensesPerMonth(month);
	this->label1->Text = MonoBanc->topThreeExpensesPerMonth(MonoBanc->expensesPerMonth(month));
	this->Balance->Text = "$" + System::Convert::ToString(MonoBanc->getBalance());
	return System::Void();
}

System::Void FinanceManagementSystemGraphicalApp::MyForm::topThreeExpensesPerWeek_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	vector<Date> week = daysOfweek();
	this->label1->Text = MonoBanc->topThreeExpensesPerWeek(MonoBanc->expensesPerWeek(week));
	return System::Void();
}

vector<Date> FinanceManagementSystemGraphicalApp::MyForm::daysOfweek()
{
	vector<Date> week;
	DateTime firstDay;
	DateTime chosenDay = this->dateTimePicker->Value;
	DayOfWeek dayOfWeek = this->dateTimePicker->Value.DayOfWeek;
	if (dayOfWeek == DayOfWeek::Monday)    firstDay = chosenDay;
	if (dayOfWeek == DayOfWeek::Tuesday)   firstDay = chosenDay.AddDays(-1);
	if (dayOfWeek == DayOfWeek::Wednesday) firstDay = chosenDay.AddDays(-2);
	if (dayOfWeek == DayOfWeek::Thursday)  firstDay = chosenDay.AddDays(-3);
	if (dayOfWeek == DayOfWeek::Friday)    firstDay = chosenDay.AddDays(-4);
	if (dayOfWeek == DayOfWeek::Saturday)  firstDay = chosenDay.AddDays(-5);
	if (dayOfWeek == DayOfWeek::Sunday)    firstDay = chosenDay.AddDays(-6);
	for (int i = 0; i < 7; i++) {
		week.push_back(firstDay.AddDays(i));
	}
	return week;
}

System::Void FinanceManagementSystemGraphicalApp::MyForm::List_Expenses_month_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::String^ out;
	this->Balance->Text = "$" + System::Convert::ToString(MonoBanc->getBalance());
	int month = this->dateTimePicker->Value.Month;
	if (MonoBanc->expensesPerMonth(month).empty())
	{
		out = "No spending found in the selected week\n";
	}
	else {
		for (auto ex : MonoBanc->expensesPerMonth(month)) {
			out += ex.show() + "\n";
		}
	}
	this->label1->Text = out;
	return System::Void();
}

System::Void FinanceManagementSystemGraphicalApp::MyForm::TopUpCardBalance_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	double sum;
	System::String^ amount = this->Balance_TextBox->Text;
	Date selectedDate = this->dateTimePicker->Value;
	string name = "Top up card balance";
	if (this->Balance_TextBox->Text->Contains("."))
		amount = this->Balance_TextBox->Text->Replace(".",",");
	try {
		sum = System::Convert::ToDouble(amount);
	}catch (FormatException^ ex) {
		return System::Void();
	}
	Expense topUp(selectedDate, name, sum, 0);
	MonoBanc->topUpBalance(topUp);
	this->Balance->Text = "$" + System::Convert::ToString(MonoBanc->getBalance());
	this->Balance_TextBox->Text = "";
	MonoBanc->writeToFile();
	return System::Void();
}



