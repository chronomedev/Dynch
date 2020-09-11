#pragma once
#include <string>
#include "mainDynch.h"
namespace Dych {

	using namespace System;
	using namespace std;
	using namespace System::Drawing;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	/// <summary>
	/// Summary for loginPengguna
	/// </summary>
	public ref class loginPengguna : public System::Windows::Forms::Form
	{
	public:
		loginPengguna(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


	public:
		static String^ namaUserMasukan;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~loginPengguna()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(42, 100);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(110, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Chat User";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(99, 126);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Log-in";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &loginPengguna::button1_Click);
			// 
			// loginPengguna
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(307, 249);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"loginPengguna";
			this->ShowIcon = false;
			this->Text = L"Log in";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		mainDynch ^menu_main = gcnew mainDynch();
		//kelasPengguna::eh = textBox1->Text;
		menu_main->Show();
		//this->Close();

		string a = "be";
		
		//this->DialogResult = System::Windows::Forms::DialogResult::OK; //FungsiDialogResult pake ::diawalnya trus::
		//mainDynch::login_identifier = 1;
		//this->Close();
	}
	};
}
