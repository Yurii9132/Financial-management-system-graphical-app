#include "AddExpense.h"
#include "BancCard.h"
#include "DataBase.h"

bool FinanceManagementSystemGraphicalApp::AddExpense::AreNotEmpty()
{
	System::String^ amount = this->Sum_text_box->Text;
	if (!System::String::IsNullOrEmpty(Sum_text_box->Text) && !System::String::IsNullOrEmpty(Name_text_box->Text)) {
		if (this->Sum_text_box->Text->Contains("."))
			amount = this->Sum_text_box->Text->Replace(".", ",");
		try {
			sum = System::Convert::ToDouble(amount);
		}
		catch (FormatException^ ex) {
			return false;
		}
		return true;
	}		
	else
		return false;
}

System::Void FinanceManagementSystemGraphicalApp::AddExpense::Groceries_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if(AreNotEmpty()){
		this->categorie = 1;
		isCanc = false;
		Form::Close();
	}
	return System::Void();
}

System::Void FinanceManagementSystemGraphicalApp::AddExpense::Sport_and_medicine_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (AreNotEmpty()){
		this->categorie = 2;
		isCanc = false;
		Form::Close();
	}
	return System::Void();
}

System::Void FinanceManagementSystemGraphicalApp::AddExpense::Restaurants_and_entertainment_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (AreNotEmpty()){
		this->categorie = 3;
		isCanc = false;
		Form::Close();
	}
	return System::Void();
}

System::Void FinanceManagementSystemGraphicalApp::AddExpense::Treveling_and_fuel_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (AreNotEmpty()){
		this->categorie = 4;
		isCanc = false;
		Form::Close();
	}
	return System::Void();
}

System::Void FinanceManagementSystemGraphicalApp::AddExpense::Gadgets_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (AreNotEmpty()) {
		this->categorie = 5;
		isCanc = false;
		Form::Close();
	}
	return System::Void();
}

System::Void FinanceManagementSystemGraphicalApp::AddExpense::Clothes_and_other_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (AreNotEmpty()){
		this->categorie = 6;
		isCanc = false;
		Form::Close();
	}
	return System::Void();
}



