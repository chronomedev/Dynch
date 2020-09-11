#pragma once
//Dynch Chat App user add friend account source file
//written in C++
//Copy Right HSD Corp 2018

#include <Windows.h>
#include <string.h>

using namespace std;

namespace Dych {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TambahTeman
	/// </summary>
	public ref class TambahTeman : public System::Windows::Forms::Form
	{

	public:
		String ^ ID_Passing;

	public:
		TambahTeman(String ^ passing)
		{
			InitializeComponent();
			disableButtonTextProperties();
			ID_Passing = passing;
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TambahTeman()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(112, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cari";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TambahTeman::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(103, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ID teman";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(45, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(103, 193);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Tambah Teman";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TambahTeman::button2_Click);
			// 
			// TambahTeman
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(295, 238);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"TambahTeman";
			this->Text = L"Tambah Teman";
			this->ResumeLayout(false);
			this->PerformLayout();

		}


	public:
		void enableButtonTextProperties() {
			label2->Visible = true;
			button2->Enabled = true;
			button2->Visible = true;
		}

	public:
		void disableButtonTextProperties() {
		
			label2->Visible = false;
			button2->Enabled = false;
			button2->Visible = false;
		
		}

	public:
		String ^ errCode;
		SqlConnection ^ koneksi = gcnew SqlConnection("Data Source=LAPTOP-F5DJGMI9\\SQLEXPRESS;Initial Catalog=cobachat;Integrated Security=True");

	public:
		void buatTabelTeman() {
			String ^ querySQL = "create table chat_" + ID_Passing + "with_"+ textBox1->Text +"(chat_list varchar(1000));";
			SqlCommand ^ komensql = gcnew SqlCommand(querySQL, koneksi);
			try {
				koneksi->Open();
				komensql->ExecuteNonQuery();
				koneksi->Close();
			}
			catch (int e) {
				MessageBox::Show("Gagal menyambung ke server Dynch. Silahkan menghubungi pihak HSD");
			}
			
		}
	public:
		void tambahTeman() {
			String ^ querySQL = "insert into friend_" + ID_Passing + " (friend_list)values('" + textBox1->Text + "');";
			SqlCommand ^ komenSQL = gcnew SqlCommand(querySQL, koneksi);
			koneksi->Open();
			komenSQL->ExecuteNonQuery();
			koneksi->Close();
			querySQL = "insert into friend_" + textBox1->Text + " (friend_list)values('" + ID_Passing + "');";
			komenSQL = gcnew SqlCommand(querySQL, koneksi);
			koneksi->Open();
			komenSQL->ExecuteNonQuery();
			koneksi->Close();
		}

	public:
		String ^ ambilNama(String^ masukan) {
			String^ ekstrakquery;
			String ^ querySQL = "select user_namaLengkap from memberAnggota where id_user ='" + masukan + "';";
			SqlCommand ^ komenSQL = gcnew SqlCommand(querySQL, koneksi);
			koneksi->Open();
			SqlDataReader^ baca = komenSQL->ExecuteReader();
			while (baca->Read()) {
				ekstrakquery = baca["user_namaLengkap"]->ToString();
			}
			koneksi->Close();

			return ekstrakquery;

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ nama_teman_cari = ambilNama(textBox1->Text);
		if (nama_teman_cari) {
			label2->Text = nama_teman_cari;
			enableButtonTextProperties();

		}
		else {
			MessageBox::Show("Pengguna Dynch tidak ditemukan", "Informasi", MessageBoxButtons::OK, MessageBoxIcon::Information);
			disableButtonTextProperties();
			
		}



	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		try {
			tambahTeman();
			buatTabelTeman();
			
		}
		catch (FormatException^) {
			MessageBox::Show("Gagal menambah Teman Coba sesaat lagi!");
		
		}
		
	}
};
}
