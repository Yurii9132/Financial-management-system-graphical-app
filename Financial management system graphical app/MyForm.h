#pragma once
#include"BancCard.h"
#include"AddExpense.h"


	extern BancCard MonoBanc("Yurii Ruban", 1670336618221342, { 12, 28 }, 002, 2000);


namespace FinanceManagementSystemGraphicalApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ Add_Expense;
	private: System::Windows::Forms::Button^ Categories_sum_btn;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker;

	private: System::Windows::Forms::Button^ topThreeExpensesPerWeek_btn;


	private: System::Windows::Forms::Button^ topThreeExpensesPerMonth_btn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Balance;
	private: System::Windows::Forms::Button^ List_Expenses_month_btn;
	private: System::Windows::Forms::Button^ TopUpCardBalance_btn;
	private: System::Windows::Forms::TextBox^ Balance_TextBox;









	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Add_Expense = (gcnew System::Windows::Forms::Button());
			this->Categories_sum_btn = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->topThreeExpensesPerWeek_btn = (gcnew System::Windows::Forms::Button());
			this->topThreeExpensesPerMonth_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Balance = (gcnew System::Windows::Forms::Label());
			this->List_Expenses_month_btn = (gcnew System::Windows::Forms::Button());
			this->TopUpCardBalance_btn = (gcnew System::Windows::Forms::Button());
			this->Balance_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(374, 81);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 75);
			this->button1->TabIndex = 1;
			this->button1->Text = L"List expenses per week";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Add_Expense
			// 
			this->Add_Expense->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Add_Expense->Location = System::Drawing::Point(12, 81);
			this->Add_Expense->Name = L"Add_Expense";
			this->Add_Expense->Size = System::Drawing::Size(175, 75);
			this->Add_Expense->TabIndex = 2;
			this->Add_Expense->Text = L"Add Expense";
			this->Add_Expense->UseVisualStyleBackColor = true;
			this->Add_Expense->Click += gcnew System::EventHandler(this, &MyForm::Add_Expense_Click);
			// 
			// Categories_sum_btn
			// 
			this->Categories_sum_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Categories_sum_btn->Location = System::Drawing::Point(193, 81);
			this->Categories_sum_btn->Name = L"Categories_sum_btn";
			this->Categories_sum_btn->Size = System::Drawing::Size(175, 75);
			this->Categories_sum_btn->TabIndex = 3;
			this->Categories_sum_btn->Text = L"List summary ";
			this->Categories_sum_btn->UseVisualStyleBackColor = true;
			this->Categories_sum_btn->Click += gcnew System::EventHandler(this, &MyForm::Categories_sum_btn_Click);
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker->Location = System::Drawing::Point(670, 23);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(240, 29);
			this->dateTimePicker->TabIndex = 4;
			// 
			// topThreeExpensesPerWeek_btn
			// 
			this->topThreeExpensesPerWeek_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->topThreeExpensesPerWeek_btn->Location = System::Drawing::Point(735, 81);
			this->topThreeExpensesPerWeek_btn->Name = L"topThreeExpensesPerWeek_btn";
			this->topThreeExpensesPerWeek_btn->Size = System::Drawing::Size(175, 75);
			this->topThreeExpensesPerWeek_btn->TabIndex = 5;
			this->topThreeExpensesPerWeek_btn->Text = L"Top 3 expenses per week";
			this->topThreeExpensesPerWeek_btn->UseVisualStyleBackColor = true;
			this->topThreeExpensesPerWeek_btn->Click += gcnew System::EventHandler(this, &MyForm::topThreeExpensesPerWeek_btn_Click);
			// 
			// topThreeExpensesPerMonth_btn
			// 
			this->topThreeExpensesPerMonth_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->topThreeExpensesPerMonth_btn->Location = System::Drawing::Point(735, 162);
			this->topThreeExpensesPerMonth_btn->Name = L"topThreeExpensesPerMonth_btn";
			this->topThreeExpensesPerMonth_btn->Size = System::Drawing::Size(175, 75);
			this->topThreeExpensesPerMonth_btn->TabIndex = 5;
			this->topThreeExpensesPerMonth_btn->Text = L"Top 3 expenses per month";
			this->topThreeExpensesPerMonth_btn->UseVisualStyleBackColor = true;
			this->topThreeExpensesPerMonth_btn->Click += gcnew System::EventHandler(this, &MyForm::topThreeExpensesPerMonth_btn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(25, 177);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 25);
			this->label1->TabIndex = 7;
			// 
			// Balance
			// 
			this->Balance->AutoSize = true;
			this->Balance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Balance->Location = System::Drawing::Point(23, 16);
			this->Balance->Name = L"Balance";
			this->Balance->Size = System::Drawing::Size(0, 37);
			this->Balance->TabIndex = 8;
			// 
			// List_Expenses_month_btn
			// 
			this->List_Expenses_month_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->List_Expenses_month_btn->Location = System::Drawing::Point(555, 81);
			this->List_Expenses_month_btn->Name = L"List_Expenses_month_btn";
			this->List_Expenses_month_btn->Size = System::Drawing::Size(174, 75);
			this->List_Expenses_month_btn->TabIndex = 9;
			this->List_Expenses_month_btn->Text = L"List expenses per month";
			this->List_Expenses_month_btn->UseVisualStyleBackColor = true;
			this->List_Expenses_month_btn->Click += gcnew System::EventHandler(this, &MyForm::List_Expenses_month_btn_Click);
			// 
			// TopUpCardBalance_btn
			// 
			this->TopUpCardBalance_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TopUpCardBalance_btn->Location = System::Drawing::Point(374, 23);
			this->TopUpCardBalance_btn->Name = L"TopUpCardBalance_btn";
			this->TopUpCardBalance_btn->Size = System::Drawing::Size(175, 32);
			this->TopUpCardBalance_btn->TabIndex = 10;
			this->TopUpCardBalance_btn->Text = L"Top up";
			this->TopUpCardBalance_btn->UseVisualStyleBackColor = true;
			this->TopUpCardBalance_btn->Click += gcnew System::EventHandler(this, &MyForm::TopUpCardBalance_btn_Click);
			// 
			// Balance_TextBox
			// 
			this->Balance_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Balance_TextBox->Location = System::Drawing::Point(193, 25);
			this->Balance_TextBox->Name = L"Balance_TextBox";
			this->Balance_TextBox->Size = System::Drawing::Size(175, 30);
			this->Balance_TextBox->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(924, 584);
			this->Controls->Add(this->Balance_TextBox);
			this->Controls->Add(this->TopUpCardBalance_btn);
			this->Controls->Add(this->List_Expenses_month_btn);
			this->Controls->Add(this->Balance);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->topThreeExpensesPerMonth_btn);
			this->Controls->Add(this->topThreeExpensesPerWeek_btn);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->Categories_sum_btn);
			this->Controls->Add(this->Add_Expense);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);	
	private: System::Void Add_Expense_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Categories_sum_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void topThreeExpensesPerMonth_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void topThreeExpensesPerWeek_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: vector<Date> daysOfweek();
	private: System::Void List_Expenses_month_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void TopUpCardBalance_btn_Click(System::Object^ sender, System::EventArgs^ e);
};
}
