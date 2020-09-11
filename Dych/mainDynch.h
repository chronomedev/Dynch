#pragma once
//Dynch Chat App Main form source file
//written in C++
//Copy Right ChronomeDev 2018
//past HSD
#include <string.h>
#include "SignupForm.h"
#include "TambahTeman.h"
//#include <iostream>
//#include <sstream>

namespace Dych {

	using namespace std;
	using namespace System;
	using namespace System::Drawing;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data::SqlClient;
	using namespace System::Threading;

	//using namespace dllkoneksi;

	/// <summary>
	// Source code copyright HSD 
	//Do not make modification to the code 
	/// </summary>
	public ref class mainDynch : public System::Windows::Forms::Form
	{
	public:
		String ^ NamaPenggunaMasuk;
		String ^ IDPenggunaMasuk;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	public:
		String ^ IDTemanPilihan;

	public:
		mainDynch(void)
		{
			InitializeComponent();
			disableUserPanel();
			//test to load DLL
			//String^ eh = obj.testingfungsi();
			//int loaddll = obj.testingLoadDLL();
			//MessageBox::Show(loaddll.ToString());

		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  logOutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  socialToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ToolStripMenuItem^  tambahTemanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  buangTemanToolStripMenuItem;
	private: System::Windows::Forms::Button^  button5;

	public:
		static int login_identifier = 0;



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainDynch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  tambahWindowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  setOffLineModeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;



	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  tambahWindowToolStripMenuItem1;
	private: System::Windows::Forms::Button^  button1;
	private: System::ComponentModel::IContainer^  components;


	protected:





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>

		//koneksi SQL


		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mainDynch::typeid));
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tambahWindowToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setOffLineModeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tambahWindowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->socialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tambahTemanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buangTemanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->tambahWindowToolStripMenuItem1,
					this->setOffLineModeToolStripMenuItem, this->tambahWindowToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// tambahWindowToolStripMenuItem1
			// 
			this->tambahWindowToolStripMenuItem1->Name = L"tambahWindowToolStripMenuItem1";
			this->tambahWindowToolStripMenuItem1->Size = System::Drawing::Size(171, 22);
			this->tambahWindowToolStripMenuItem1->Text = L"Tambah Window";
			this->tambahWindowToolStripMenuItem1->Click += gcnew System::EventHandler(this, &mainDynch::tambahWindowToolStripMenuItem1_Click);
			// 
			// setOffLineModeToolStripMenuItem
			// 
			this->setOffLineModeToolStripMenuItem->Name = L"setOffLineModeToolStripMenuItem";
			this->setOffLineModeToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->setOffLineModeToolStripMenuItem->Text = L"Set Off-Line mode";
			// 
			// tambahWindowToolStripMenuItem
			// 
			this->tambahWindowToolStripMenuItem->Name = L"tambahWindowToolStripMenuItem";
			this->tambahWindowToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->tambahWindowToolStripMenuItem->Text = L"Tes Koneksi";
			this->tambahWindowToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainDynch::tambahWindowToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainDynch::exitToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->menuToolStripMenuItem,
					this->socialToolStripMenuItem, this->menuToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(479, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// socialToolStripMenuItem
			// 
			this->socialToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->tambahTemanToolStripMenuItem,
					this->buangTemanToolStripMenuItem
			});
			this->socialToolStripMenuItem->Name = L"socialToolStripMenuItem";
			this->socialToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->socialToolStripMenuItem->Text = L"Social";
			// 
			// tambahTemanToolStripMenuItem
			// 
			this->tambahTemanToolStripMenuItem->Name = L"tambahTemanToolStripMenuItem";
			this->tambahTemanToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->tambahTemanToolStripMenuItem->Text = L"Tambah Teman";
			this->tambahTemanToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainDynch::tambahTemanToolStripMenuItem_Click);
			// 
			// buangTemanToolStripMenuItem
			// 
			this->buangTemanToolStripMenuItem->Name = L"buangTemanToolStripMenuItem";
			this->buangTemanToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->buangTemanToolStripMenuItem->Text = L"Buang Teman";
			// 
			// menuToolStripMenuItem1
			// 
			this->menuToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->logOutToolStripMenuItem });
			this->menuToolStripMenuItem1->Name = L"menuToolStripMenuItem1";
			this->menuToolStripMenuItem1->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem1->Text = L"menu";
			this->menuToolStripMenuItem1->Click += gcnew System::EventHandler(this, &mainDynch::menuToolStripMenuItem1_Click);
			// 
			// logOutToolStripMenuItem
			// 
			this->logOutToolStripMenuItem->Name = L"logOutToolStripMenuItem";
			this->logOutToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->logOutToolStripMenuItem->Text = L"Log - Out";
			this->logOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainDynch::logOutToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::PeachPuff;
			this->richTextBox1->Enabled = false;
			this->richTextBox1->Location = System::Drawing::Point(36, 69);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(418, 242);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"sssssss";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &mainDynch::richTextBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(357, 435);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Send Message";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainDynch::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(292, 445);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"label1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(162, 235);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 20);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &mainDynch::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(109, 203);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(272, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Sebelum menggunakan chat harus log in terlebih dahulu";
			this->label2->Click += gcnew System::EventHandler(this, &mainDynch::label2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(162, 261);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Sign-Up";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mainDynch::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(252, 261);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Sign-In";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &mainDynch::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(333, 42);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->Text = L"List Teman";
			this->comboBox1->SelectedValueChanged += gcnew System::EventHandler(this, &mainDynch::comboBox1_SelectedValueChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(252, 40);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Buka Chat";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &mainDynch::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(36, 40);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 14;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &mainDynch::button5_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::PeachPuff;
			this->richTextBox2->Enabled = false;
			this->richTextBox2->Location = System::Drawing::Point(36, 317);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(418, 82);
			this->richTextBox2->TabIndex = 15;
			this->richTextBox2->Text = L"sssssss";
			// 
			// mainDynch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(479, 481);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"mainDynch";
			this->Text = L"Dynch - Dynamic Chat App";
			this->Load += gcnew System::EventHandler(this, &mainDynch::mainDynch_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//SqlConnection koneksi;


	public:
		String ^ errCode;
		SqlConnection ^ koneksi = gcnew SqlConnection("Data Source=LAPTOP-F5DJGMI9\\SQLEXPRESS;Initial Catalog=cobachat;Integrated Security=True");
		SqlConnection ^ koneksiThread = gcnew SqlConnection("Data Source=LAPTOP-F5DJGMI9\\SQLEXPRESS;Initial Catalog=cobachat;Integrated Security=True");
		String ^ pilihan_nama_teman;
		bool jalan_t1 = false;



	public:
		void enableUserPanel() {
			textBox1->Visible = false;
			textBox1->Enabled = false;
			label2->Visible = false;
			button2->Visible = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button3->Visible = false;

			richTextBox1->Visible = true;
			richTextBox1->Enabled = true;

			richTextBox2->Enabled = true;
			richTextBox2->Visible = true;
			button1->Visible = true;

			button4->Visible = true;
			button4->Enabled = true;
			comboBox1->Visible = true;
			comboBox1->Enabled = true;
		
		
		}


	public:
		void disableUserPanel() {
		
			button1->Visible = false;
			richTextBox1->Visible = false;
			richTextBox1->Enabled = false;
			richTextBox2->Enabled = false;
			richTextBox2->Visible = false;
			button4->Visible = false;
			button4->Enabled = false;
			comboBox1->Enabled = false;
			comboBox1->Visible = false;
			label1->Visible = false;
			//button5->Visible = false;
		
		
		}

	public:
		String^ ambilID(String^ username_user) {
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
			String ^ ambilNama(String^ username_user) {
				String^ ekstrakquery;
				String ^ querySQL = "select user_namaLengkap from memberAnggota where user_nameAnggota ='" + username_user + "';";
				SqlCommand ^ komenSQL = gcnew SqlCommand(querySQL, koneksi);
				koneksi->Open();
				SqlDataReader^ baca = komenSQL->ExecuteReader();
				while (baca->Read()) {
					ekstrakquery = baca["user_namaLengkap"]->ToString();
				}
				koneksi->Close();

				return ekstrakquery;

			}

	public:
		void fillListTeman() {
			String ^ querySQL = "select memberAnggota.user_namaLengkap from memberAnggota INNER JOIN friend_"+IDPenggunaMasuk +" on friend_"+IDPenggunaMasuk+".friend_list = memberAnggota.id_user;";
			SqlCommand ^ komenSQL = gcnew SqlCommand(querySQL, koneksi);
			koneksi->Open();
			SqlDataReader^ baca = komenSQL->ExecuteReader();
			while (baca->Read()) {
				comboBox1->Items->Add(baca["user_namaLengkap"]->ToString());
			}
			koneksi->Close();
		
		}
	public:
		 String^ ambilIdTeman(String ^ nama_teman) {
			String^ ekstrakquery;
			String ^ querySQL = "select memberAnggota.id_user from memberAnggota INNER JOIN friend_"+IDPenggunaMasuk+" ON friend_"+IDPenggunaMasuk+".friend_list  = memberAnggota.id_user where user_namaLengkap ='" +nama_teman +"';";
			SqlCommand ^ komenSQL = gcnew SqlCommand(querySQL, koneksi);
			koneksi->Open();
			SqlDataReader^ baca = komenSQL->ExecuteReader();
			while (baca->Read()) {
				ekstrakquery = baca["id_user"]->ToString();
			}
			koneksi->Close();

			return ekstrakquery;
			
		}
	
	private:
		String ^ fungsiUpdateFromThread(String^ id_pengguna, String^ id_teman) {
			String ^listChat;
			String ^ querySQL;
			int id_1 = Convert::ToInt32(id_pengguna);
			int id_2 = Convert::ToInt32(id_teman);
			try {
				querySQL = "select * from chat_" + id_2 + "with_" + id_1;
				SqlCommand ^ komenSQL = gcnew SqlCommand(querySQL, koneksiThread);
				koneksiThread->Open();
				SqlDataReader ^ baca = komenSQL->ExecuteReader();
				while (baca->Read()) {
					listChat += baca["chat_list"]->ToString() + Environment::NewLine;
				}
				koneksiThread->Close();

			}
			catch (Exception ^ e) {

				querySQL = "select * from chat_" + id_1 + "with_" + id_2;
				SqlCommand ^ komenSQL = gcnew SqlCommand(querySQL, koneksiThread);
				//koneksi->Open();
				SqlDataReader ^ baca = komenSQL->ExecuteReader();
				while (baca->Read()) {
					listChat += baca["chat_list"]->ToString() + Environment::NewLine;
				}
				koneksiThread->Close();
			}
		
			return listChat;
		
		}
	public:
		void fungsiAddChat(String ^ id_pengguna, String ^ id_teman) {
			String ^listChat;
			String ^ querySQL;
			int id_1 = Convert::ToInt32(id_pengguna);
			int id_2 = Convert::ToInt32(id_teman);
			try {
				querySQL = "select * from chat_" + id_2+ "with_" + id_1;
				SqlCommand ^ komenSQL = gcnew SqlCommand(querySQL, koneksi);
				koneksi->Open();
				SqlDataReader ^ baca = komenSQL->ExecuteReader();
				while (baca->Read()) {
					listChat += baca["chat_list"]->ToString() + Environment::NewLine;
				}
				koneksi->Close();
			
			}
			catch (Exception ^ e) {
			
				querySQL = "select * from chat_" + id_1 + "with_" + id_2;
				SqlCommand ^ komenSQL = gcnew SqlCommand(querySQL, koneksi);
				//koneksi->Open();
				SqlDataReader ^ baca = komenSQL->ExecuteReader();
				while (baca->Read()) {
					listChat += baca["chat_list"]->ToString() + Environment::NewLine;
				}
				koneksi->Close();
			}
			
			
			
			//free(&id_1);
			//free(&id_2);
			richTextBox1->Text = listChat;
		}

	public:
		void fungsiKoneksi(String ^ pesan, String ^ instruksi) {
			String ^ tampungNamaUser;
			//String ^dataSource = (String^)malloc(sizeof(String^));
			//SqlConnection koneksi("Data Source=den1.mssql5.gear.host;Persist Security Info=True;User ID=dynamicchat;Password=hsd2018!");
			
			//return koneksi;
			if (instruksi == "tes") {
				koneksi->Open();
				MessageBox::Show("Ehhhhh berhasil");
				koneksi->Close();
			}

			else if (instruksi == "in") {

				String ^ querySQL = "select * from memberAnggota where user_nameAnggota = '" + pesan + "';";
				SqlCommand ^ komensql = gcnew SqlCommand(querySQL, koneksi);
				try {
					koneksi->Open();
					SqlDataReader ^ baca = komensql->ExecuteReader();
					while (baca->Read()) {
						tampungNamaUser = baca["user_nameAnggota"]->ToString();
					}
					if (!tampungNamaUser) {
						MessageBox::Show("User tidak ditemukan\nCek kembali username dan password anda", "Notifikasi", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
						errCode = "eINVLDUSR";
					}

				}
				catch (FormatException ^) {
					MessageBox::Show("Terjadi gangguan koneksi ke server. Harap Coba beberapa saat kembali", "Notifikasi", MessageBoxButtons::OK, MessageBoxIcon::Information);
					errCode = "eCONNnull";
				}

				//komensql->ExecuteNonQuery();
				koneksi->Close();
			}
			else if (instruksi == "chat") {
			
			}
		}

		public:
			void kirimPesan(String ^ msg) {
				String ^ msg_packet = "-----"+ menuToolStripMenuItem1->Text +"-----\n"+ msg +"\n____________________________________\n";
				try {
					String ^ querySQL = "insert into chat_" + IDPenggunaMasuk + "with_" + IDTemanPilihan + "(chat_list)values('" + msg_packet + "');";
					SqlCommand ^ komensql = gcnew SqlCommand(querySQL, koneksi);
					koneksi->Open();
					komensql->ExecuteNonQuery();
					koneksi->Close();
				
				}
				catch (Exception ^ e) {
				
					String ^ querySQL = "insert into chat_" + IDTemanPilihan+ "with_" + IDPenggunaMasuk+ "(chat_list)values('" + msg_packet + "');";
					SqlCommand ^ komensql = gcnew SqlCommand(querySQL, koneksi);
					//koneksi->Open();
					komensql->ExecuteNonQuery();
					koneksi->Close();
				
				}
				
			
			}
#pragma endregion
	private: System::Void tambahWindowToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		fungsiKoneksi("", "tes");
		MessageBox::Show("Ehhhhh berhasil");
		//koneksi.Close();

	}
	private: System::Void mainDynch_Load(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void tambahWindowToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		mainDynch ^ windowbaru = gcnew mainDynch();
		windowbaru->Show();

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		kirimPesan(richTextBox2->Text);
		fungsiAddChat(IDPenggunaMasuk, IDTemanPilihan);
		richTextBox2->Text = "";

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		SignupForm ^ daftar = gcnew SignupForm();
		daftar->ShowDialog();


	}

	public:
		void fungsiThread() {
			while (true) {
				this->Invoke(gcnew MethodInvoker(this, &mainDynch::updatestatus));
				Thread::Sleep(1000);
			}
		}

	public:
		String ^ listMSG_dalam;
		void updatestatus() {
			String^ msg_fetch = fungsiUpdateFromThread(IDPenggunaMasuk, IDTemanPilihan);;
			if (listMSG_dalam != msg_fetch) {

				listMSG_dalam = msg_fetch;
				richTextBox1->Text = msg_fetch;
				
			}
			
			
		
		}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		if (textBox1->Text == "") {

			MessageBox::Show("Nama pengguna harus diisi tidak boleh kosong", "Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else {
			fungsiKoneksi(textBox1->Text, "in");
			if (!errCode) {
				NamaPenggunaMasuk = textBox1->Text;
				IDPenggunaMasuk = ambilID(NamaPenggunaMasuk);
				fillListTeman();
				//IdMasukan textBox1->Text
				//fungsiKoneksi("", "in");
				menuToolStripMenuItem1->Text = ambilNama(NamaPenggunaMasuk);
				enableUserPanel();

			}
		}

	}


	private: System::Void menuToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	

		if (!pilihan_nama_teman) {
			MessageBox::Show("Pilih lah teman mu terlebih dahulu di box samping kanan", "Instruksi", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			IDTemanPilihan = ambilIdTeman(pilihan_nama_teman);
			fungsiAddChat(IDPenggunaMasuk, IDTemanPilihan);
			if (jalan_t1 == false) {
				Thread ^ t1 = gcnew Thread(gcnew ThreadStart(this, &mainDynch::fungsiThread));
				t1->Start();
				jalan_t1 = true;
			}
			
		}


	}
	private: System::Void comboBox1_SelectedValueChanged(System::Object^  sender, System::EventArgs^  e) {

		pilihan_nama_teman = comboBox1->SelectedItem->ToString()->ToLower();
		//array<String^>^pecah = pilihan_nama_teman->Split(' ');
		label1->Text = pilihan_nama_teman;
	}
	private: System::Void tambahTemanToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		TambahTeman ^ formadd = gcnew TambahTeman(ambilID(NamaPenggunaMasuk));
		formadd->ShowDialog();

	}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	//GetRidOfYou();
	
}
private: System::Void logOutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//DialogResult ^ pertanyaan = MessageBox::Show("Apakah anda yakin mau keluar?", "Pertanyaan", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	//if (pertanyaan == DialogResult.Yes) {
	
	//}
	
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	// buat kasih posisi cursor di teks paling terakhir
	richTextBox1->SelectionStart = richTextBox1->Text->Length;
	// buat otomatis scroll ke bawah 
	richTextBox1->ScrollToCaret();

}
};
}
