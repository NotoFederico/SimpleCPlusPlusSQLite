#pragma once
#include "Screen2.h"
#include "Screen3.h"
#include <string>

using namespace std;
//Necesario para utilizar los metodos relacionados a SQLite
using namespace System::Data::SQLite;

namespace TestApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Screen1
	/// </summary>
	public ref class Screen1 : public System::Windows::Forms::Form
	{
	public:
		Screen1(void)
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
		~Screen1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: SQLiteConnection^ conn;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			//this->conn = gcnew  SQLiteConnection("data source = C:\\Users\\OMEN\\source\\repos\\TestApp\\database.db");
			this->conn = gcnew  SQLiteConnection("data source = database.db");
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(615, 518);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"PS 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Screen1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(709, 518);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"PS2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Screen1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(795, 518);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Salir";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Screen1::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 59);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(858, 424);
			this->dataGridView1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(340, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 32);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Base de datos";
			this->label1->Click += gcnew System::EventHandler(this, &Screen1::label1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 489);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(203, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Mostrar todo";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Screen1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 518);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(203, 25);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Filtrar por apellido = Chapa";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Screen1::button5_Click);
			// 
			// Screen1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(882, 553);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Screen1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pantalla Principal";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	public: void queryExec(const char* s) {
		std::string Model(s);
		conn->Open();
		String^ MyString = gcnew String(Model.c_str());
		SQLiteCommand^ cmd = gcnew SQLiteCommand(MyString, conn);
		DataTable^ dt = gcnew DataTable();
		SQLiteDataAdapter^ adapter = gcnew SQLiteDataAdapter(cmd);
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;
		conn->Close();
	}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		TestApp::Screen2^ obj1;
		obj1 = gcnew TestApp::Screen2(this);
		obj1->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		TestApp::Screen3^ obj1;
		obj1 = gcnew TestApp::Screen3(this);
		obj1->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		queryExec("SELECT * FROM GRADES");
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		queryExec("SELECT * FROM GRADES WHERE LNAME = 'Chapa' ORDER BY ID DESC");
	}
	};
}
