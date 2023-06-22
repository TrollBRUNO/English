#pragma once
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

namespace English {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm7
	/// </summary>
	// Функциональный объект для сравнения пар по второму элементу
	struct PairCompare
	{
		bool operator()(std::pair<std::string, int> a, std::pair<std::string, int> b)
		{
			return a.second > b.second;
		}
	};
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	public:
		MyForm7(void)
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
		~MyForm7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm7::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(161)));
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consuela", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->label4->Location = System::Drawing::Point(404, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(639, 76);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Таблица ковбоев";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consuela", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(161)));
			this->label1->Location = System::Drawing::Point(258, 226);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(375, 44);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Email  and  Score :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consuela", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(161)));
			this->label2->Location = System::Drawing::Point(259, 270);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(590, 205);
			this->label2->TabIndex = 7;
			this->label2->Text = L"79119574538@yandex.ru   -   0/10\r\nadmin@mail.com       0/10\r\nexample@email.bg    "
				L"   0/10\r\nmain@google.com       0/10\r\ntrollbruno@mail.com       0/10";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consuela", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->label3->Location = System::Drawing::Point(184, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 64);
			this->label3->TabIndex = 8;
			this->label3->Text = L"the\r\nbest";
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1211, 681);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm7";
			this->Text = L"FST.English";
			this->Load += gcnew System::EventHandler(this, &MyForm7::MyForm7_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		String^ filename = "E:\\ПРАКТИКА\\table leader.txt";

#pragma endregion
		private: System::Void MyForm7_Load(System::Object^ sender, System::EventArgs^ e)
		{
			// Чтение данных из файла
			ifstream file("E:\\ПРАКТИКА\\table leader.txt");
			string line;
			vector<pair<string, int>> data; // Вектор пар (email, очки)

			while (std::getline(file, line))
			{
				// Разбиение строки на email и очки
				size_t pos = line.find(" - ");
				string email = line.substr(0, pos);
				int points = stoi(line.substr(pos + 3));

				data.push_back(make_pair(email, points));
			}

			// Сортировка данных по набранным очкам (от большего к меньшему)
			sort(data.begin(), data.end(), PairCompare());

			// Вывод первых пяти строк в метку
			String^ labelText = "";
			for (int i = 0; i < 5 && i < data.size(); i++)
			{
				labelText += gcnew String(data[i].first.c_str()) + "  -  " + data[i].second + "/10\n";
			}

			label2->Text = labelText;
		}

		//private: System::Void MyForm7_Load(System::Object^ sender, System::EventArgs^ e) {
		//	auto Reader = gcnew IO::StreamReader(filename);

		//	String^ line;
		//	String^ content = "";

		//	while ((line = Reader->ReadLine()) != nullptr)
		//	{
		//		if (line->Trim() == "")
		//		{
		//			break; // выходим из цикла, если встретили пустую строку
		//		}
		//		content += line + "\n"; // добавляем текущую строку к содержимому
		//	}

		//	Reader->Close();

		//	// записываем содержимое в label
		//	label2->Text = content;
		//}
};
}
