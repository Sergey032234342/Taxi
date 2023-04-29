#pragma once

namespace ISTax {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ but_exit;
	private: System::Windows::Forms::Label^ lab_cena;
	private: System::Windows::Forms::TextBox^ Spisok;


	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ lab_adr;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;




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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->but_exit = (gcnew System::Windows::Forms::Button());
			this->lab_cena = (gcnew System::Windows::Forms::Label());
			this->Spisok = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->lab_adr = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(335, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 38);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Расчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(159, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 43);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Стоимость поездки:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// but_exit
			// 
			this->but_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_exit->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->but_exit->Location = System::Drawing::Point(493, 12);
			this->but_exit->Name = L"but_exit";
			this->but_exit->Size = System::Drawing::Size(39, 29);
			this->but_exit->TabIndex = 6;
			this->but_exit->Text = L"X";
			this->but_exit->UseVisualStyleBackColor = true;
			this->but_exit->Click += gcnew System::EventHandler(this, &MyForm::but_exit_Click);
			// 
			// lab_cena
			// 
			this->lab_cena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_cena->Location = System::Drawing::Point(279, 230);
			this->lab_cena->Name = L"lab_cena";
			this->lab_cena->Size = System::Drawing::Size(229, 28);
			this->lab_cena->TabIndex = 10;
			this->lab_cena->Text = L"Стоимость поездки";
			this->lab_cena->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Spisok
			// 
			this->Spisok->Location = System::Drawing::Point(312, 163);
			this->Spisok->Name = L"Spisok";
			this->Spisok->Size = System::Drawing::Size(168, 20);
			this->Spisok->TabIndex = 11;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Фрунза 2, Лейпци 23" });
			this->listBox1->Location = System::Drawing::Point(28, 163);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(192, 121);
			this->listBox1->TabIndex = 12;
			// 
			// lab_adr
			// 
			this->lab_adr->AutoSize = true;
			this->lab_adr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_adr->Location = System::Drawing::Point(12, 86);
			this->lab_adr->Name = L"lab_adr";
			this->lab_adr->Size = System::Drawing::Size(296, 24);
			this->lab_adr->TabIndex = 13;
			this->lab_adr->Text = L"Список допустимых адресов";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(308, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 24);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Введите адрес";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(178, 379);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(166, 52);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Заказать такси";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(544, 508);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lab_adr);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->Spisok);
			this->Controls->Add(this->lab_cena);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->but_exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Spisok->Text == "Фрунза 2")
			this->lab_cena->Text = "2.600 руб";

		if (Spisok->Text == "Лейпци 23")
			this->lab_cena->Text = "5.000 руб";
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void but_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
