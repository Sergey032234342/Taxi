#pragma once
#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
namespace ISTax {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm1
	/// </summary>
	public ref class MainForm1 : public System::Windows::Forms::Form
	{
	public:
		MainForm1(void)
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
		~MainForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ but_exit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	protected:





	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm1::typeid));
			this->but_exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// but_exit
			// 
			this->but_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_exit->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->but_exit->Location = System::Drawing::Point(302, 12);
			this->but_exit->Name = L"but_exit";
			this->but_exit->Size = System::Drawing::Size(39, 29);
			this->but_exit->TabIndex = 0;
			this->but_exit->Text = L"X";
			this->but_exit->UseVisualStyleBackColor = true;
			this->but_exit->Click += gcnew System::EventHandler(this, &MainForm1::but_exit_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(59, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 43);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Выберите класс";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(119, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 38);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Эконом";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(119, 162);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 38);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Комфорт";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(119, 232);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 38);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Комфорт+";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(119, 302);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(108, 38);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Buisness";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm1::button4_Click);
			// 
			// MainForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(353, 396);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->but_exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainPage";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void but_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm^ myForm = gcnew MyForm();
		myForm->Show();

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm1^ myForm1 = gcnew MyForm1();
		myForm1->Show();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm2^ myForm2 = gcnew MyForm2();
	myForm2->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm3^ myForm3 = gcnew MyForm3();
	myForm3->Show();
}
};
}
