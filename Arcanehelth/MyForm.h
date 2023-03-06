#pragma once
#include "menu_utama.h"
namespace Arcanehelth {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_user;
	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_pass;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ btn_log;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->txt_user = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_pass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->btn_log = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_user
			// 
			this->txt_user->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->txt_user->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_user->ForeColor = System::Drawing::Color::White;
			this->txt_user->Location = System::Drawing::Point(79, 288);
			this->txt_user->Multiline = true;
			this->txt_user->Name = L"txt_user";
			this->txt_user->Size = System::Drawing::Size(438, 59);
			this->txt_user->TabIndex = 0;
			this->txt_user->Text = L"Username";
			this->txt_user->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(72, 230);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"User";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Eras Bold ITC", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(154, 231);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 40);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Login";
			// 
			// txt_pass
			// 
			this->txt_pass->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->txt_pass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pass->ForeColor = System::Drawing::Color::White;
			this->txt_pass->Location = System::Drawing::Point(79, 371);
			this->txt_pass->Multiline = true;
			this->txt_pass->Name = L"txt_pass";
			this->txt_pass->Size = System::Drawing::Size(438, 59);
			this->txt_pass->TabIndex = 4;
			this->txt_pass->Text = L" Password";
			this->txt_pass->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged_1);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 8;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(429, 446);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(88, 20);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Click Here";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// btn_log
			// 
			this->btn_log->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_log.BackgroundImage")));
			this->btn_log->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_log->Location = System::Drawing::Point(79, 482);
			this->btn_log->Name = L"btn_log";
			this->btn_log->Size = System::Drawing::Size(190, 70);
			this->btn_log->TabIndex = 7;
			this->btn_log->UseVisualStyleBackColor = true;
			this->btn_log->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->btn_log);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_pass);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_user);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"Aplikasi Apotek ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (txt_user->Text == "" && txt_pass->Text == "") {
		MessageBox::Show("Username dan Password wajib diisi!");
	} else if (txt_user->Text == "") {
		MessageBox::Show("Username wajib diisi!");
	} else if (txt_pass->Text == "") {
		MessageBox::Show("Password wajib diisi!");
	} else if (txt_user->Text == "Arcane" && txt_pass->Text == "qwerty") {
		MessageBox::Show("Login Berhasil");
		menu_utama^ a = gcnew menu_utama();
		MyForm::Hide();
		a->Show();
	} else {
		MessageBox::Show("Login Gagal");
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
};
}
