#pragma once
#include"MyForm3.h"
#include<regex>
#include <msclr/marshal.h>
#include "GlobalVariables.h"

namespace English {

	using namespace std;
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consuela", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->label1->Location = System::Drawing::Point(475, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(248, 74);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Войти";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->textBox2->Location = System::Drawing::Point(404, 323);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(407, 37);
			this->textBox2->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->textBox1->Location = System::Drawing::Point(404, 215);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(407, 37);
			this->textBox1->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consuela", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->label3->Location = System::Drawing::Point(398, 288);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(251, 32);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Введите пароль";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consuela", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->label2->Location = System::Drawing::Point(398, 180);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(320, 32);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Введите свою почту";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Consuela", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->button1->Location = System::Drawing::Point(437, 512);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(344, 80);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Войти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->LinkColor = System::Drawing::SystemColors::MenuBar;
			this->linkLabel1->Location = System::Drawing::Point(524, 608);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(163, 13);
			this->linkLabel1->TabIndex = 11;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Вернуться в окно регистрации";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm2::linkLabel1_LinkClicked);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1211, 681);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FST.English";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	bool login(string email, string password) {
		ifstream file("F:\\ПРАКТИКА\\users account.txt"); // открываем файл для чтения
		string line;
		while (getline(file, line)) { // читаем файл построчно
			size_t pos = line.find(' '); // находим позицию первого пробела
			string file_email = line.substr(0, pos); // выделяем email из строки
			string file_password = line.substr(pos + 1); // выделяем пароль из строки
			if (file_email == email && file_password == password) { // если email и пароль совпадают
				file.close(); // закрываем файл
				return true; // возвращаем true
			}
		}
		file.close(); // закрываем файл
		return false; // если не нашли соответствия, возвращаем false
	}

	string convertToString(String^ str) {
		marshal_context context; //позволяет выполнить преобразование между типами String^ и string
		const char* chars = context.marshal_as<const char*>(str);
		return string(chars);
	}
#pragma endregion
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = textBox1->Text;
		GlobalVariables::globalEmail = email;
		string convertedEmail = convertToString(email); //преобразовываем переменную из String^ в string
		String^ password = textBox2->Text;
		string convertedPassword = convertToString(password); //преобразовываем переменную из String^ в string
		if (login(convertedEmail, convertedPassword)) {
			MessageBox::Show(this, "Авторизация вашего аккаунта прошла успешно!", "Система безопасности", MessageBoxButtons::OK, MessageBoxIcon::Information);
			MyForm3^ menu = gcnew MyForm3();
			menu->Show();
			MyForm2::Hide();
		}
		else MessageBox::Show(this, "Данного аккаунта не существует", "Система безопасности", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
};
}
