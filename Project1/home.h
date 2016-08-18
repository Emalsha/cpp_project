#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for home
	/// </summary>
	public ref class home : public System::Windows::Forms::Form
	{
	public:
		home(void)
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
		~home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tab1;
	protected:

	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  btnadd;
	private: System::Windows::Forms::TextBox^  txtflavour;
	private: System::Windows::Forms::TextBox^  txtname;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TextBox^  txtcolor;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btnexit_delete;
	private: System::Windows::Forms::Button^  btndelete;
	private: System::Windows::Forms::TextBox^  txtcolor_delete;
	private: System::Windows::Forms::TextBox^  txtflavour_delete;
	private: System::Windows::Forms::TextBox^  txtname_delete;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btnsearch_delete;
	private: System::Windows::Forms::TextBox^  txtsearch_delete;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  btnreload;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::DataGridView^  grid;
	private: System::Windows::Forms::TextBox^  txtprice;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  txtprice_delete;
	private: System::Windows::Forms::Button^  btnexit_update;
	private: System::Windows::Forms::Button^  btnupdate;
	private: System::Windows::Forms::Button^  btnsearch_update;
	private: System::Windows::Forms::TextBox^  txtprice_update;
	private: System::Windows::Forms::TextBox^  txtcolor_update;
	private: System::Windows::Forms::TextBox^  txtflavour_update;
	private: System::Windows::Forms::TextBox^  txtname_update;
	private: System::Windows::Forms::TextBox^  txtsearch_update;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;

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
			this->tab1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txtprice = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtcolor = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnadd = (gcnew System::Windows::Forms::Button());
			this->txtflavour = (gcnew System::Windows::Forms::TextBox());
			this->txtname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnexit_update = (gcnew System::Windows::Forms::Button());
			this->btnupdate = (gcnew System::Windows::Forms::Button());
			this->btnsearch_update = (gcnew System::Windows::Forms::Button());
			this->txtprice_update = (gcnew System::Windows::Forms::TextBox());
			this->txtcolor_update = (gcnew System::Windows::Forms::TextBox());
			this->txtflavour_update = (gcnew System::Windows::Forms::TextBox());
			this->txtname_update = (gcnew System::Windows::Forms::TextBox());
			this->txtsearch_update = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtprice_delete = (gcnew System::Windows::Forms::TextBox());
			this->btnexit_delete = (gcnew System::Windows::Forms::Button());
			this->btndelete = (gcnew System::Windows::Forms::Button());
			this->txtcolor_delete = (gcnew System::Windows::Forms::TextBox());
			this->txtflavour_delete = (gcnew System::Windows::Forms::TextBox());
			this->txtname_delete = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnsearch_delete = (gcnew System::Windows::Forms::Button());
			this->txtsearch_delete = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->btnreload = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->grid = (gcnew System::Windows::Forms::DataGridView());
			this->tab1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid))->BeginInit();
			this->SuspendLayout();
			// 
			// tab1
			// 
			this->tab1->Controls->Add(this->tabPage1);
			this->tab1->Controls->Add(this->tabPage2);
			this->tab1->Controls->Add(this->tabPage3);
			this->tab1->Controls->Add(this->tabPage4);
			this->tab1->Location = System::Drawing::Point(1, 1);
			this->tab1->Name = L"tab1";
			this->tab1->SelectedIndex = 0;
			this->tab1->Size = System::Drawing::Size(405, 369);
			this->tab1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->txtprice);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->txtcolor);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->btnadd);
			this->tabPage1->Controls->Add(this->txtflavour);
			this->tabPage1->Controls->Add(this->txtname);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(397, 343);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Add Detail";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// txtprice
			// 
			this->txtprice->Location = System::Drawing::Point(172, 151);
			this->txtprice->Name = L"txtprice";
			this->txtprice->Size = System::Drawing::Size(115, 20);
			this->txtprice->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(74, 154);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Price :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(212, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &home::button1_Click);
			// 
			// txtcolor
			// 
			this->txtcolor->Location = System::Drawing::Point(172, 121);
			this->txtcolor->Name = L"txtcolor";
			this->txtcolor->Size = System::Drawing::Size(115, 20);
			this->txtcolor->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(77, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Color :";
			// 
			// btnadd
			// 
			this->btnadd->Location = System::Drawing::Point(131, 186);
			this->btnadd->Name = L"btnadd";
			this->btnadd->Size = System::Drawing::Size(75, 23);
			this->btnadd->TabIndex = 4;
			this->btnadd->Text = L"Add Details";
			this->btnadd->UseVisualStyleBackColor = true;
			this->btnadd->Click += gcnew System::EventHandler(this, &home::btnadd_Click);
			// 
			// txtflavour
			// 
			this->txtflavour->Location = System::Drawing::Point(172, 92);
			this->txtflavour->Name = L"txtflavour";
			this->txtflavour->Size = System::Drawing::Size(115, 20);
			this->txtflavour->TabIndex = 3;
			// 
			// txtname
			// 
			this->txtname->Location = System::Drawing::Point(172, 64);
			this->txtname->Name = L"txtname";
			this->txtname->Size = System::Drawing::Size(115, 20);
			this->txtname->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(74, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Flavour :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(74, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ice Cream Name :";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->btnexit_update);
			this->tabPage2->Controls->Add(this->btnupdate);
			this->tabPage2->Controls->Add(this->btnsearch_update);
			this->tabPage2->Controls->Add(this->txtprice_update);
			this->tabPage2->Controls->Add(this->txtcolor_update);
			this->tabPage2->Controls->Add(this->txtflavour_update);
			this->tabPage2->Controls->Add(this->txtname_update);
			this->tabPage2->Controls->Add(this->txtsearch_update);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(397, 343);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Update Detail";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btnexit_update
			// 
			this->btnexit_update->Location = System::Drawing::Point(275, 250);
			this->btnexit_update->Name = L"btnexit_update";
			this->btnexit_update->Size = System::Drawing::Size(75, 23);
			this->btnexit_update->TabIndex = 12;
			this->btnexit_update->Text = L"Cancel";
			this->btnexit_update->UseVisualStyleBackColor = true;
			this->btnexit_update->Click += gcnew System::EventHandler(this, &home::btnexit_update_Click);
			// 
			// btnupdate
			// 
			this->btnupdate->Location = System::Drawing::Point(194, 250);
			this->btnupdate->Name = L"btnupdate";
			this->btnupdate->Size = System::Drawing::Size(75, 23);
			this->btnupdate->TabIndex = 11;
			this->btnupdate->Text = L"Update";
			this->btnupdate->UseVisualStyleBackColor = true;
			this->btnupdate->Click += gcnew System::EventHandler(this, &home::btnupdate_Click);
			// 
			// btnsearch_update
			// 
			this->btnsearch_update->Location = System::Drawing::Point(263, 44);
			this->btnsearch_update->Name = L"btnsearch_update";
			this->btnsearch_update->Size = System::Drawing::Size(75, 23);
			this->btnsearch_update->TabIndex = 10;
			this->btnsearch_update->Text = L"Search";
			this->btnsearch_update->UseVisualStyleBackColor = true;
			this->btnsearch_update->Click += gcnew System::EventHandler(this, &home::btnsearch_update_Click);
			// 
			// txtprice_update
			// 
			this->txtprice_update->Location = System::Drawing::Point(171, 203);
			this->txtprice_update->Name = L"txtprice_update";
			this->txtprice_update->Size = System::Drawing::Size(100, 20);
			this->txtprice_update->TabIndex = 9;
			// 
			// txtcolor_update
			// 
			this->txtcolor_update->Location = System::Drawing::Point(171, 170);
			this->txtcolor_update->Name = L"txtcolor_update";
			this->txtcolor_update->Size = System::Drawing::Size(100, 20);
			this->txtcolor_update->TabIndex = 8;
			// 
			// txtflavour_update
			// 
			this->txtflavour_update->Location = System::Drawing::Point(171, 141);
			this->txtflavour_update->Name = L"txtflavour_update";
			this->txtflavour_update->Size = System::Drawing::Size(98, 20);
			this->txtflavour_update->TabIndex = 7;
			// 
			// txtname_update
			// 
			this->txtname_update->Location = System::Drawing::Point(171, 111);
			this->txtname_update->Name = L"txtname_update";
			this->txtname_update->ReadOnly = true;
			this->txtname_update->Size = System::Drawing::Size(100, 20);
			this->txtname_update->TabIndex = 6;
			// 
			// txtsearch_update
			// 
			this->txtsearch_update->Location = System::Drawing::Point(135, 46);
			this->txtsearch_update->Name = L"txtsearch_update";
			this->txtsearch_update->Size = System::Drawing::Size(100, 20);
			this->txtsearch_update->TabIndex = 5;
			this->txtsearch_update->TextChanged += gcnew System::EventHandler(this, &home::txtsearch_update_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(102, 206);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(37, 13);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Price :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(102, 173);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(37, 13);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Color :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(102, 144);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(48, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Flavour :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(102, 114);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Name :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(73, 49);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(47, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Search :";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->txtprice_delete);
			this->tabPage3->Controls->Add(this->btnexit_delete);
			this->tabPage3->Controls->Add(this->btndelete);
			this->tabPage3->Controls->Add(this->txtcolor_delete);
			this->tabPage3->Controls->Add(this->txtflavour_delete);
			this->tabPage3->Controls->Add(this->txtname_delete);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->btnsearch_delete);
			this->tabPage3->Controls->Add(this->txtsearch_delete);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(397, 343);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Remove Detail";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(117, 196);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(37, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Price :";
			// 
			// txtprice_delete
			// 
			this->txtprice_delete->Location = System::Drawing::Point(181, 193);
			this->txtprice_delete->Name = L"txtprice_delete";
			this->txtprice_delete->ReadOnly = true;
			this->txtprice_delete->Size = System::Drawing::Size(100, 20);
			this->txtprice_delete->TabIndex = 11;
			// 
			// btnexit_delete
			// 
			this->btnexit_delete->Location = System::Drawing::Point(280, 240);
			this->btnexit_delete->Name = L"btnexit_delete";
			this->btnexit_delete->Size = System::Drawing::Size(75, 23);
			this->btnexit_delete->TabIndex = 10;
			this->btnexit_delete->Text = L"Cancel";
			this->btnexit_delete->UseVisualStyleBackColor = true;
			this->btnexit_delete->Click += gcnew System::EventHandler(this, &home::btnexit_delete_Click);
			// 
			// btndelete
			// 
			this->btndelete->Location = System::Drawing::Point(199, 240);
			this->btndelete->Name = L"btndelete";
			this->btndelete->Size = System::Drawing::Size(75, 23);
			this->btndelete->TabIndex = 9;
			this->btndelete->Text = L"Remove";
			this->btndelete->UseVisualStyleBackColor = true;
			this->btndelete->Click += gcnew System::EventHandler(this, &home::btndelete_Click);
			// 
			// txtcolor_delete
			// 
			this->txtcolor_delete->Location = System::Drawing::Point(181, 161);
			this->txtcolor_delete->Name = L"txtcolor_delete";
			this->txtcolor_delete->ReadOnly = true;
			this->txtcolor_delete->Size = System::Drawing::Size(100, 20);
			this->txtcolor_delete->TabIndex = 8;
			// 
			// txtflavour_delete
			// 
			this->txtflavour_delete->Location = System::Drawing::Point(181, 127);
			this->txtflavour_delete->Name = L"txtflavour_delete";
			this->txtflavour_delete->ReadOnly = true;
			this->txtflavour_delete->Size = System::Drawing::Size(100, 20);
			this->txtflavour_delete->TabIndex = 7;
			// 
			// txtname_delete
			// 
			this->txtname_delete->Location = System::Drawing::Point(181, 94);
			this->txtname_delete->Name = L"txtname_delete";
			this->txtname_delete->ReadOnly = true;
			this->txtname_delete->Size = System::Drawing::Size(100, 20);
			this->txtname_delete->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(117, 166);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Color :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(117, 132);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Flavour :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(117, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Name :";
			// 
			// btnsearch_delete
			// 
			this->btnsearch_delete->Location = System::Drawing::Point(267, 35);
			this->btnsearch_delete->Name = L"btnsearch_delete";
			this->btnsearch_delete->Size = System::Drawing::Size(75, 23);
			this->btnsearch_delete->TabIndex = 2;
			this->btnsearch_delete->Text = L"Search";
			this->btnsearch_delete->UseVisualStyleBackColor = true;
			this->btnsearch_delete->Click += gcnew System::EventHandler(this, &home::btnsearch_delete_Click);
			// 
			// txtsearch_delete
			// 
			this->txtsearch_delete->Location = System::Drawing::Point(141, 38);
			this->txtsearch_delete->Name = L"txtsearch_delete";
			this->txtsearch_delete->Size = System::Drawing::Size(100, 20);
			this->txtsearch_delete->TabIndex = 1;
			this->txtsearch_delete->TextChanged += gcnew System::EventHandler(this, &home::txtsearch_delete_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(77, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Search :";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->btnreload);
			this->tabPage4->Controls->Add(this->label8);
			this->tabPage4->Controls->Add(this->grid);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(397, 343);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"View Details";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// btnreload
			// 
			this->btnreload->Location = System::Drawing::Point(164, 317);
			this->btnreload->Name = L"btnreload";
			this->btnreload->Size = System::Drawing::Size(75, 23);
			this->btnreload->TabIndex = 2;
			this->btnreload->Text = L"Reload";
			this->btnreload->UseVisualStyleBackColor = true;
			this->btnreload->Click += gcnew System::EventHandler(this, &home::btnreload_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(137, 8);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"View All Item Details";
			// 
			// grid
			// 
			this->grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grid->Location = System::Drawing::Point(3, 24);
			this->grid->Name = L"grid";
			this->grid->Size = System::Drawing::Size(391, 288);
			this->grid->TabIndex = 0;
			// 
			// home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(404, 371);
			this->Controls->Add(this->tab1);
			this->Name = L"home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->tab1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnadd_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ conn;
				 MySqlConnection^ connect;
				 MySqlCommand^ command;
				 MySqlDataReader^ reader;
				 String^ name = this->txtname->Text;
				 String^ flavour = this->txtflavour->Text;
				 String^ color = this->txtcolor->Text;
				 String^ price = this->txtprice->Text;
				 
				 if (name =="" || flavour == "" || color == "" || price == "")
				 {
					 MessageBox::Show("Please fill all these details to add new item.");
				 }
				 else
				 {

					 try{
						 conn = "Server=localhost;Database=cpp;Uid=root;Pwd=;";
						 connect = gcnew MySqlConnection(conn);
						 connect->Open();
						 command = gcnew MySqlCommand("INSERT INTO item(itemname,itemflavour,itemcolor,itemprice) VALUES ('" + name + "','" + flavour + "','" + color + "','" + price + "'); ", connect);
						 reader = command->ExecuteReader();
						 MessageBox::Show("Item details add succesfully.");
						 this->txtname->Text = "";
						 this->txtflavour->Text = "";
						 this->txtcolor->Text = "";
						 this->txtprice->Text = "";

					 }
					 catch (MySqlException^ e){
						 MessageBox::Show(e->Message);
					 }
				 }
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
}


private: System::Void btnreload_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ conn;
			 MySqlConnection^ connect;
			 MySqlCommand^ command;
			 
			 try{
				 conn = "Server=localhost;Database=cpp;Uid=root;Pwd=;";
				 connect = gcnew MySqlConnection(conn);
				 command = gcnew MySqlCommand("SELECT * FROM item;", connect);
				 
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = command;
				 DataTable^ dbdataset = gcnew DataTable();
				 sda->Fill(dbdataset);
				 BindingSource^ bSource = gcnew BindingSource();

				 bSource->DataSource = dbdataset;
				 grid->DataSource = bSource;
				 sda->Update(dbdataset);

			 }
			 catch (MySqlException^ e){
				 MessageBox::Show(e->Message);
			 }
}
private: System::Void btnexit_delete_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
}
private: System::Void btnsearch_delete_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ conn;
			 MySqlConnection^ connect;
			 MySqlCommand^ command;
			 MySqlDataReader^ reader;
			
			 try{
				 conn = "Server=localhost;Database=cpp;Uid=root;Pwd=;";
				 connect = gcnew MySqlConnection(conn);
				 connect->Open();
				 command = gcnew MySqlCommand("SELECT * FROM item WHERE itemname = '"+this->txtsearch_delete->Text+"'; ", connect);
				 reader = command->ExecuteReader();
				 int count = 0;
				 while (reader->Read())
				 {
					 this->txtname_delete->Text = reader->GetString("itemname");
					 this->txtflavour_delete->Text = reader->GetString("itemflavour");
					 this->txtcolor_delete->Text = reader->GetString("itemcolor");
					 this->txtprice_delete->Text = reader->GetInt32("itemprice").ToString();
					 count++;
				 }

				 if (count>1)
				 {
					 MessageBox::Show("This searched key word has too many results. Please check your key word.");
				 }
				 
			 }
			 catch (MySqlException^ e){
				 MessageBox::Show(e->Message);
			 }
}
private: System::Void btndelete_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ itemname = this->txtname_delete->Text;
			 if (itemname == "")
			 {
				 MessageBox::Show("Please search wanted item.");
			 }
			 else{
				 if (MessageBox::Show("Are you sure that you want to remove this data permanently", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
				 {

					 String^ conn;
					 MySqlConnection^ connect;
					 MySqlCommand^ command;
					 MySqlDataReader^ reader;

					 try{
						 conn = "Server=localhost;Database=cpp;Uid=root;Pwd=;";
						 connect = gcnew MySqlConnection(conn);
						 connect->Open();
						 command = gcnew MySqlCommand("DELETE FROM item WHERE itemname = '" + itemname + "'; ", connect);
						 reader = command->ExecuteReader();
						 MessageBox::Show("Data removed successfully.");
						 
						 this->txtsearch_delete->Text = "";
						 this->txtname_delete->Text = "";
						 this->txtflavour_delete->Text = "";
						 this->txtcolor_delete->Text = "";
						 this->txtprice_delete->Text = "";
							 
							

					 }
					 catch (MySqlException^ e){
						 MessageBox::Show(e->Message);
					 }
				 }
			 }
}
private: System::Void btnsearch_update_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ conn;
			 MySqlConnection^ connect;
			 MySqlCommand^ command;
			 MySqlDataReader^ reader;

			 try{
				 conn = "Server=localhost;Database=cpp;Uid=root;Pwd=;";
				 connect = gcnew MySqlConnection(conn);
				 connect->Open();
				 command = gcnew MySqlCommand("SELECT * FROM item WHERE itemname = '" + this->txtsearch_update->Text + "'; ", connect);
				 reader = command->ExecuteReader();
				 int count = 0;
				 while (reader->Read())
				 {
					 this->txtname_update->Text = reader->GetString("itemname");
					 this->txtflavour_update->Text = reader->GetString("itemflavour");
					 this->txtcolor_update->Text = reader->GetString("itemcolor");
					 this->txtprice_update->Text = reader->GetInt32("itemprice").ToString();
					 count++;
				 }

				 if (count>1)
				 {
					 MessageBox::Show("This searched key word has too many results. Please check your key word.");
				 }

			 }
			 catch (MySqlException^ e){
				 MessageBox::Show(e->Message);
			 }
}
private: System::Void btnexit_update_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
}
private: System::Void btnupdate_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ itemname = this->txtname_update->Text;
			 if (itemname == "")
			 {
				 MessageBox::Show("Please search wanted item.");
			 }
			 else{

				 if (this->txtflavour_update->Text == "" || this->txtcolor_update->Text == "" || this->txtprice_update->Text == "")
				 {
					 MessageBox::Show("Can't give null values. Please fill empty fields.");
				 }
				 else
				 {

					 if (MessageBox::Show("Are you sure that you want to update this data.", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					 {

						 String^ conn;
						 MySqlConnection^ connect;
						 MySqlCommand^ command;
						 MySqlDataReader^ reader;

						 try{
							 conn = "Server=localhost;Database=cpp;Uid=root;Pwd=;";
							 connect = gcnew MySqlConnection(conn);
							 connect->Open();
							 command = gcnew MySqlCommand("UPDATE item SET itemflavour='" + this->txtflavour_update->Text + "', itemcolor='" + this->txtcolor_update->Text + "', itemprice='" + this->txtprice_update->Text + "' WHERE itemname = '" + itemname + "'; ", connect);
							 reader = command->ExecuteReader();
							 MessageBox::Show("Data updated successfully.");

							 this->txtsearch_update->Text = "";
							 this->txtname_update->Text = "";
							 this->txtflavour_update->Text = "";
							 this->txtcolor_update->Text = "";
							 this->txtprice_update->Text = "";


						 }
						 catch (MySqlException^ e){
							 MessageBox::Show(e->Message);
						 }
					 }
				 }
			 }
}
private: System::Void txtsearch_delete_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 this->txtname_delete->Text = "";
			 this->txtflavour_delete->Text = "";
			 this->txtcolor_delete->Text = "";
			 this->txtprice_delete->Text = "";

}
private: System::Void txtsearch_update_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 this->txtname_update->Text = "";
			 this->txtflavour_update->Text = "";
			 this->txtcolor_update->Text = "";
			 this->txtprice_update->Text = "";
}
};
}
