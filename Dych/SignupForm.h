#pragma once
//Dynch Chat App user sign up account source file
//written in C++
//Copy Right HSD Corp

namespace Dych {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignupForm
	/// </summary>
	public ref class SignupForm : public System::Windows::Forms::Form
	{
	public:
		SignupForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		String ^ namaIDMasukan;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignupForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User name";
			this->label1->Click += gcnew System::EventHandler(this, &SignupForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(142, 96);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SignupForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(143, 123);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nama Lengkap";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(102, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Daftar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SignupForm::button1_Click);
			// 
			// SignupForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"SignupForm";
			this->Text = L"Sign-up User";
			this->Load += gcnew System::EventHandler(this, &SignupForm::SignupForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		SqlConnection ^ koneksi = gcnew SqlConnection("Data Source=LAPTOP-F5DJGMI9\\SQLEXPRESS;Initial Catalog=cobachat;Integrated Security=True");


	public:
		String ^ ambilID(String^ username_user) {
			String^ ekstrakquery;
			String ^ querySQL = "select id_user from memberAnggota where user_nameAnggota ='" + username_user + "';";
			SqlCommand ^ komenSQL = gcnew SqlCommand(querySQL, koneksi);
			koneksi->Open();
			SqlDataReader^ baca = komenSQL->ExecuteReader();
			while (baca->Read()) {
				ekstrakquery = baca["id_user"]->ToString();
			}
			koneksi->Close();

			return ekstrakquery;

		}

	public:
		void createFriendTable(String ^ id_masuk) {
			String ^ querySQL = "create table friend_" + id_masuk + "(friend_list varchar(25));";
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

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		String ^ querySQL = "insert into memberAnggota(user_nameAnggota, user_namaLengkap)values('" + textBox1->Text + "', '" + textBox2->Text + "');";
		SqlCommand ^ komensql = gcnew SqlCommand(querySQL, koneksi);
		try {
			koneksi->Open();
			komensql->ExecuteNonQuery();
			koneksi->Close();
			createFriendTable(ambilID(textBox1->Text));
			MessageBox::Show("Berhasil membuat akun!\nHarap Login terlebih dahulu untuk memakai Dynch");
			
		}
		catch (int e) {
			MessageBox::Show("Gagal menyambung ke server Dynch. Silahkan menghubungi pihak HSD");
		}
	}
private: System::Void SignupForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
