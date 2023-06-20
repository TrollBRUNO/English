#pragma once

namespace English {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
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
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm6::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consuela", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label1->Location = System::Drawing::Point(1031, 473);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Следующий \r\nвопрос";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm6::label1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(121)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->numericUpDown1->Cursor = System::Windows::Forms::Cursors::Default;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->numericUpDown1->Location = System::Drawing::Point(861, 524);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 26);
			this->numericUpDown1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consuela", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->label2->Location = System::Drawing::Point(720, 527);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Номер ответа:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consuela", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->label3->Location = System::Drawing::Point(230, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(172, 23);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Первый вопрос";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consuela", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->label4->Location = System::Drawing::Point(266, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(685, 74);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Контрольный тест";
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1211, 681);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm6";
			this->Text = L"FST.English";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*bool isDocumentComplited = false;*/
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (!isDocumentComplited) {
			
			isDocumentComplited = true;
		}*/
		int count = 0;
		switch (count) {
		case 0:
			label3->Text = "Первый вопрос";
			count++;
			break;
		case 1:
			label3->Text = "Второй вопрос";
			count++;
			break;
		case 2:
			label3->Text = "Третий вопрос";
			count++;
			break;
		case 3:
			label3->Text = "Четвертый вопрос";
			count++;
			break;
		case 4:
			label3->Text = "Пятый вопрос";
			label3->Refresh();
			count++;
			break;
		case 5:
			label3->Text = "Шестой вопрос";
			label3->Refresh();
			count++;
			break;
		case 6:
			label3->Text = "Седьмой вопрос";
			label3->Refresh();
			count++;
			break;
		case 7:
			label3->Text = "Восьмой вопрос";
			label3->Refresh();
			count++;
			break;
		case 8:
			label3->Text = "Девятый вопрос";
			label3->Refresh();
			count++;
			break;
		case 9:
			label3->Text = "Десятый вопрос";
			label3->Refresh();
			count = 0;
			break;
		}

	}
	};
}
