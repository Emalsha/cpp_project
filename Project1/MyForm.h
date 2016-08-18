#pragma once
#include "home.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Text;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  txtuname;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtpword;

	private: System::Windows::Forms::Button^  btn;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtuname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtpword = (gcnew System::Windows::Forms::TextBox());
			this->btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username ";
			// 
			// txtuname
			// 
			this->txtuname->Location = System::Drawing::Point(95, 44);
			this->txtuname->Name = L"txtuname";
			this->txtuname->Size = System::Drawing::Size(100, 20);
			this->txtuname->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// txtpword
			// 
			this->txtpword->Location = System::Drawing::Point(95, 83);
			this->txtpword->Name = L"txtpword";
			this->txtpword->PasswordChar = '*';
			this->txtpword->Size = System::Drawing::Size(100, 20);
			this->txtpword->TabIndex = 3;
			// 
			// btn
			// 
			this->btn->Location = System::Drawing::Point(45, 115);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(131, 23);
			this->btn->TabIndex = 4;
			this->btn->Text = L"Login";
			this->btn->UseVisualStyleBackColor = true;
			this->btn->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(234, 168);
			this->Controls->Add(this->btn);
			this->Controls->Add(this->txtpword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtuname);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 //initialize connection object to database
				 String^ conn;
				 MySqlConnection^ connect;
				 MySqlCommand^ command;
				 MySqlDataReader^ reader;
				 String^ uname = this->txtuname->Text;
				 String^ pword = this->txtpword->Text;
				 try{
					 conn = "Server=localhost;Database=cpp;Uid=root;Pwd=;";
					 connect = gcnew MySqlConnection(conn);
					 connect->Open();
					 command = gcnew MySqlCommand("SELECT * FROM user WHERE username ='" + uname + "' AND password='" + pword + "'; ", connect);
					 reader = command->ExecuteReader();
					 int count = 0;
					 while (reader->Read()){
						 count++;
					 }
					 if (count == 1){
						 
						 this->Hide();
						 home^ fm = gcnew home();
						 fm->Show();
					 }
					 else{
						 MessageBox::Show("Username and password is not matched.");
					 }
					 {

					 }
				 }
				 catch (MySqlException^ e){
					 MessageBox::Show(e->Message);
				 }
		
	}
};
}
