#pragma once
#include"BancCard.h"
#include"AddExpense.h"


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
			MonoBanc = new BancCard("Yurii Ruban", 1670336618221342, { 12, 28 }, 002, 2000);
			MonoBanc->readFromFile();
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ListExpensesPerWeek_btn;
	protected:

	protected:





	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ AddExpense_btn;
	private: System::Windows::Forms::Button^ ListSummaryPerWeek_btn;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker;

	private: System::Windows::Forms::Button^ topThreeExpensesPerWeek_btn;


	private: System::Windows::Forms::Button^ topThreeExpensesPerMonth_btn;

	private: System::Windows::Forms::Label^ Balance;
	private: System::Windows::Forms::Button^ ListExpensesPerMonth_btn;


	private: System::Windows::Forms::Button^ TopUpCardBalance_btn;
	private: System::Windows::Forms::TextBox^ Balance_TextBox;

	private: BancCard* MonoBanc;
	private: System::Windows::Forms::Button^ ListSummaryPerMonth_btn;
	private: System::Windows::Forms::Label^ label1;











	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ListExpensesPerWeek_btn = (gcnew System::Windows::Forms::Button());
			this->AddExpense_btn = (gcnew System::Windows::Forms::Button());
			this->ListSummaryPerWeek_btn = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->topThreeExpensesPerWeek_btn = (gcnew System::Windows::Forms::Button());
			this->topThreeExpensesPerMonth_btn = (gcnew System::Windows::Forms::Button());
			this->Balance = (gcnew System::Windows::Forms::Label());
			this->ListExpensesPerMonth_btn = (gcnew System::Windows::Forms::Button());
			this->TopUpCardBalance_btn = (gcnew System::Windows::Forms::Button());
			this->Balance_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->ListSummaryPerMonth_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ListExpensesPerWeek_btn
			// 
			this->ListExpensesPerWeek_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ListExpensesPerWeek_btn->Location = System::Drawing::Point(12, 82);
			this->ListExpensesPerWeek_btn->Name = L"ListExpensesPerWeek_btn";
			this->ListExpensesPerWeek_btn->Size = System::Drawing::Size(155, 75);
			this->ListExpensesPerWeek_btn->TabIndex = 1;
			this->ListExpensesPerWeek_btn->Text = L"List expenses per week";
			this->ListExpensesPerWeek_btn->UseVisualStyleBackColor = true;
			this->ListExpensesPerWeek_btn->Click += gcnew System::EventHandler(this, &MyForm::ListExpensesPerWeek_btn_Click);
			// 
			// AddExpense_btn
			// 
			this->AddExpense_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddExpense_btn->Location = System::Drawing::Point(12, 30);
			this->AddExpense_btn->Name = L"AddExpense_btn";
			this->AddExpense_btn->Size = System::Drawing::Size(155, 30);
			this->AddExpense_btn->TabIndex = 2;
			this->AddExpense_btn->Text = L"Add Expense";
			this->AddExpense_btn->UseVisualStyleBackColor = true;
			this->AddExpense_btn->Click += gcnew System::EventHandler(this, &MyForm::AddExpense_btn_Click);
			// 
			// ListSummaryPerWeek_btn
			// 
			this->ListSummaryPerWeek_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ListSummaryPerWeek_btn->Location = System::Drawing::Point(334, 82);
			this->ListSummaryPerWeek_btn->Name = L"ListSummaryPerWeek_btn";
			this->ListSummaryPerWeek_btn->Size = System::Drawing::Size(155, 75);
			this->ListSummaryPerWeek_btn->TabIndex = 3;
			this->ListSummaryPerWeek_btn->Text = L"List summary per week";
			this->ListSummaryPerWeek_btn->UseVisualStyleBackColor = true;
			this->ListSummaryPerWeek_btn->Click += gcnew System::EventHandler(this, &MyForm::ListSummaryPerWeek_btn_Click);
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker->Location = System::Drawing::Point(268, 30);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(221, 29);
			this->dateTimePicker->TabIndex = 4;
			// 
			// topThreeExpensesPerWeek_btn
			// 
			this->topThreeExpensesPerWeek_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->topThreeExpensesPerWeek_btn->Location = System::Drawing::Point(656, 82);
			this->topThreeExpensesPerWeek_btn->Name = L"topThreeExpensesPerWeek_btn";
			this->topThreeExpensesPerWeek_btn->Size = System::Drawing::Size(155, 75);
			this->topThreeExpensesPerWeek_btn->TabIndex = 5;
			this->topThreeExpensesPerWeek_btn->Text = L"Top 3 expenses per week";
			this->topThreeExpensesPerWeek_btn->UseVisualStyleBackColor = true;
			this->topThreeExpensesPerWeek_btn->Click += gcnew System::EventHandler(this, &MyForm::topThreeExpensesPerWeek_btn_Click);
			// 
			// topThreeExpensesPerMonth_btn
			// 
			this->topThreeExpensesPerMonth_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->topThreeExpensesPerMonth_btn->Location = System::Drawing::Point(817, 82);
			this->topThreeExpensesPerMonth_btn->Name = L"topThreeExpensesPerMonth_btn";
			this->topThreeExpensesPerMonth_btn->Size = System::Drawing::Size(155, 75);
			this->topThreeExpensesPerMonth_btn->TabIndex = 5;
			this->topThreeExpensesPerMonth_btn->Text = L"Top 3 expenses per month";
			this->topThreeExpensesPerMonth_btn->UseVisualStyleBackColor = true;
			this->topThreeExpensesPerMonth_btn->Click += gcnew System::EventHandler(this, &MyForm::topThreeExpensesPerMonth_btn_Click);
			// 
			// Balance
			// 
			this->Balance->AutoSize = true;
			this->Balance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Balance->Location = System::Drawing::Point(811, 30);
			this->Balance->Name = L"Balance";
			this->Balance->Size = System::Drawing::Size(0, 37);
			this->Balance->TabIndex = 8;
			// 
			// ListExpensesPerMonth_btn
			// 
			this->ListExpensesPerMonth_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ListExpensesPerMonth_btn->Location = System::Drawing::Point(173, 82);
			this->ListExpensesPerMonth_btn->Name = L"ListExpensesPerMonth_btn";
			this->ListExpensesPerMonth_btn->Size = System::Drawing::Size(155, 75);
			this->ListExpensesPerMonth_btn->TabIndex = 9;
			this->ListExpensesPerMonth_btn->Text = L"List expenses per month";
			this->ListExpensesPerMonth_btn->UseVisualStyleBackColor = true;
			this->ListExpensesPerMonth_btn->Click += gcnew System::EventHandler(this, &MyForm::ListExpensesPerMonth_btn_Click);
			// 
			// TopUpCardBalance_btn
			// 
			this->TopUpCardBalance_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TopUpCardBalance_btn->Location = System::Drawing::Point(656, 31);
			this->TopUpCardBalance_btn->Name = L"TopUpCardBalance_btn";
			this->TopUpCardBalance_btn->Size = System::Drawing::Size(155, 32);
			this->TopUpCardBalance_btn->TabIndex = 10;
			this->TopUpCardBalance_btn->Text = L"Top up";
			this->TopUpCardBalance_btn->UseVisualStyleBackColor = true;
			this->TopUpCardBalance_btn->Click += gcnew System::EventHandler(this, &MyForm::TopUpCardBalance_btn_Click);
			// 
			// Balance_TextBox
			// 
			this->Balance_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Balance_TextBox->Location = System::Drawing::Point(495, 30);
			this->Balance_TextBox->Name = L"Balance_TextBox";
			this->Balance_TextBox->Size = System::Drawing::Size(155, 30);
			this->Balance_TextBox->TabIndex = 11;
			// 
			// ListSummaryPerMonth_btn
			// 
			this->ListSummaryPerMonth_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ListSummaryPerMonth_btn->Location = System::Drawing::Point(495, 82);
			this->ListSummaryPerMonth_btn->Name = L"ListSummaryPerMonth_btn";
			this->ListSummaryPerMonth_btn->Size = System::Drawing::Size(155, 75);
			this->ListSummaryPerMonth_btn->TabIndex = 12;
			this->ListSummaryPerMonth_btn->Text = L"List summary per month";
			this->ListSummaryPerMonth_btn->UseVisualStyleBackColor = true;
			this->ListSummaryPerMonth_btn->Click += gcnew System::EventHandler(this, &MyForm::ListSummaryPerMonth_btn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(23, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 25);
			this->label1->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 663);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ListSummaryPerMonth_btn);
			this->Controls->Add(this->Balance_TextBox);
			this->Controls->Add(this->TopUpCardBalance_btn);
			this->Controls->Add(this->ListExpensesPerMonth_btn);
			this->Controls->Add(this->Balance);
			this->Controls->Add(this->topThreeExpensesPerMonth_btn);
			this->Controls->Add(this->topThreeExpensesPerWeek_btn);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->ListSummaryPerWeek_btn);
			this->Controls->Add(this->AddExpense_btn);
			this->Controls->Add(this->ListExpensesPerWeek_btn);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void TopUpCardBalance_btn_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void AddExpense_btn_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ListSummaryPerWeek_btn_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ListSummaryPerMonth_btn_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ListExpensesPerWeek_btn_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ListExpensesPerMonth_btn_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void topThreeExpensesPerWeek_btn_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void topThreeExpensesPerMonth_btn_Click(System::Object^ sender, System::EventArgs^ e);

	private: vector<Date> daysOfweek();
	};
}
