#pragma once

namespace English {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(243, 215);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(726, 262);
			this->webBrowser1->TabIndex = 16;
			this->webBrowser1->Url = (gcnew System::Uri(L"V:\\C121\\Атанасов\\ПРАКТИКА\\Present Simple.html", System::UriKind::Absolute));
			this->webBrowser1->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &MyForm5::webBrowser1_DocumentCompleted);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Consuela", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->button1->Location = System::Drawing::Point(12, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 46);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Вернуться обратно";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1211, 681);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->webBrowser1);
			this->Name = L"MyForm5";
			this->Text = L"FST.English";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*MyForm4^ theory = gcnew MyForm4();
		theory->ShowDialog();*/
		//MyForm4::Hide();
	}
	private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
		
	}
	};
}
