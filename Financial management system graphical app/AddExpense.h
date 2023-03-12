#pragma once
//#include"MyForm.h"
#include"BancCard.h"
#include <msclr\marshal_cppstd.h>
namespace FinanceManagementSystemGraphicalApp {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class AddExpense : public System::Windows::Forms::Form
	{
	public:
		AddExpense(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddExpense()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Sum_text_box;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Name_text_box;

	private: System::Windows::Forms::Button^ Groceries_btn;
	private: System::Windows::Forms::Button^ Sport_and_medicine_btn;
	private: System::Windows::Forms::Button^ Restaurants_and_entertainment_btn;
	private: System::Windows::Forms::Button^ Treveling_and_fuel_btn;
	private: System::Windows::Forms::Button^ Clothes_and_other_btn;
	private: int categorie;
	private: bool isCanc = true;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Cancel_btn;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Sum_text_box = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Name_text_box = (gcnew System::Windows::Forms::TextBox());
			this->Groceries_btn = (gcnew System::Windows::Forms::Button());
			this->Sport_and_medicine_btn = (gcnew System::Windows::Forms::Button());
			this->Restaurants_and_entertainment_btn = (gcnew System::Windows::Forms::Button());
			this->Treveling_and_fuel_btn = (gcnew System::Windows::Forms::Button());
			this->Clothes_and_other_btn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Cancel_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 93);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sum";
			// 
			// Sum_text_box
			// 
			this->Sum_text_box->Location = System::Drawing::Point(63, 131);
			this->Sum_text_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Sum_text_box->Name = L"Sum_text_box";
			this->Sum_text_box->Size = System::Drawing::Size(90, 31);
			this->Sum_text_box->TabIndex = 1;
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(194, 40);
			this->dateTimePicker->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(249, 31);
			this->dateTimePicker->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(218, 93);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Name of Expense";
			// 
			// Name_text_box
			// 
			this->Name_text_box->Location = System::Drawing::Point(194, 131);
			this->Name_text_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name_text_box->Name = L"Name_text_box";
			this->Name_text_box->Size = System::Drawing::Size(393, 31);
			this->Name_text_box->TabIndex = 1;
			// 
			// Groceries_btn
			// 
			this->Groceries_btn->Location = System::Drawing::Point(16, 218);
			this->Groceries_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Groceries_btn->Name = L"Groceries_btn";
			this->Groceries_btn->Size = System::Drawing::Size(196, 94);
			this->Groceries_btn->TabIndex = 3;
			this->Groceries_btn->Text = L"Groceries";
			this->Groceries_btn->UseVisualStyleBackColor = true;
			this->Groceries_btn->Click += gcnew System::EventHandler(this, &AddExpense::Groceries_btn_Click);
			// 
			// Sport_and_medicine_btn
			// 
			this->Sport_and_medicine_btn->Location = System::Drawing::Point(221, 218);
			this->Sport_and_medicine_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Sport_and_medicine_btn->Name = L"Sport_and_medicine_btn";
			this->Sport_and_medicine_btn->Size = System::Drawing::Size(196, 94);
			this->Sport_and_medicine_btn->TabIndex = 3;
			this->Sport_and_medicine_btn->Text = L"Sport and medicine";
			this->Sport_and_medicine_btn->UseVisualStyleBackColor = true;
			this->Sport_and_medicine_btn->Click += gcnew System::EventHandler(this, &AddExpense::Sport_and_medicine_btn_Click);
			// 
			// Restaurants_and_entertainment_btn
			// 
			this->Restaurants_and_entertainment_btn->Location = System::Drawing::Point(426, 218);
			this->Restaurants_and_entertainment_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Restaurants_and_entertainment_btn->Name = L"Restaurants_and_entertainment_btn";
			this->Restaurants_and_entertainment_btn->Size = System::Drawing::Size(196, 94);
			this->Restaurants_and_entertainment_btn->TabIndex = 3;
			this->Restaurants_and_entertainment_btn->Text = L"Restaurants and entertainment";
			this->Restaurants_and_entertainment_btn->UseVisualStyleBackColor = true;
			this->Restaurants_and_entertainment_btn->Click += gcnew System::EventHandler(this, &AddExpense::Restaurants_and_entertainment_btn_Click);
			// 
			// Treveling_and_fuel_btn
			// 
			this->Treveling_and_fuel_btn->Location = System::Drawing::Point(16, 322);
			this->Treveling_and_fuel_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Treveling_and_fuel_btn->Name = L"Treveling_and_fuel_btn";
			this->Treveling_and_fuel_btn->Size = System::Drawing::Size(196, 94);
			this->Treveling_and_fuel_btn->TabIndex = 3;
			this->Treveling_and_fuel_btn->Text = L"Treveling and fuel";
			this->Treveling_and_fuel_btn->UseVisualStyleBackColor = true;
			this->Treveling_and_fuel_btn->Click += gcnew System::EventHandler(this, &AddExpense::Treveling_and_fuel_btn_Click);
			// 
			// Clothes_and_other_btn
			// 
			this->Clothes_and_other_btn->Location = System::Drawing::Point(223, 322);
			this->Clothes_and_other_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Clothes_and_other_btn->Name = L"Clothes_and_other_btn";
			this->Clothes_and_other_btn->Size = System::Drawing::Size(196, 94);
			this->Clothes_and_other_btn->TabIndex = 3;
			this->Clothes_and_other_btn->Text = L"Clothes and other";
			this->Clothes_and_other_btn->UseVisualStyleBackColor = true;
			this->Clothes_and_other_btn->Click += gcnew System::EventHandler(this, &AddExpense::Clothes_and_other_btn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 134);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"$";
			// 
			// Cancel_btn
			// 
			this->Cancel_btn->Location = System::Drawing::Point(427, 322);
			this->Cancel_btn->Name = L"Cancel_btn";
			this->Cancel_btn->Size = System::Drawing::Size(195, 94);
			this->Cancel_btn->TabIndex = 4;
			this->Cancel_btn->Text = L"Cancel";
			this->Cancel_btn->UseVisualStyleBackColor = true;
			this->Cancel_btn->Click += gcnew System::EventHandler(this, &AddExpense::Cancel_btn_Click);
			// 
			// AddExpense
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(638, 450);
			this->Controls->Add(this->Cancel_btn);
			this->Controls->Add(this->Restaurants_and_entertainment_btn);
			this->Controls->Add(this->Clothes_and_other_btn);
			this->Controls->Add(this->Treveling_and_fuel_btn);
			this->Controls->Add(this->Sport_and_medicine_btn);
			this->Controls->Add(this->Groceries_btn);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->Name_text_box);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Sum_text_box);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"AddExpense";
			this->Text = L"Add Expense";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: bool AreNotEmpty();	
	private: System::Void Groceries_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Sport_and_medicine_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Restaurants_and_entertainment_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Treveling_and_fuel_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Clothes_and_other_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Cancel_btn_Click(System::Object^ sender, System::EventArgs^ e);
	public: DateTimePicker^ getDate() {	return dateTimePicker;	}
	public: System::String^ getSum() {	return Sum_text_box->Text;	}
	public: System::String^ getNane() {	return Name_text_box->Text;	}
	public: int getCategorie() { return categorie;	}
	public: bool getIsCanceled() {	return isCanc;	}
	public: System::Void setIsCanceled(bool isCanc) { this->isCanc = isCanc;	}
};
}
