#pragma once

namespace English {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm8
	/// </summary>
	public ref class MyForm8 : public System::Windows::Forms::Form
	{
	public:
		MyForm8(void)
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
		~MyForm8()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm8::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consuela", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->label4->Location = System::Drawing::Point(254, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(701, 74);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Тренажерный тест";
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
			this->label1->Location = System::Drawing::Point(1026, 474);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 46);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Следующий \r\nвопрос";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Consuela", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->button4->Location = System::Drawing::Point(12, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(147, 53);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Назад";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm8::button4_Click);
			// 
			// MyForm8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1211, 681);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm8";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FST.English";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm8::Hide();
	}
};
}
