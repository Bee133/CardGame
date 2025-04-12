#include <iostream>
#include <locale>
#include<string>
#include<time.h>
#include <stdlib.h>
#include "Igrock.h"

#pragma once

namespace CardsVisual {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Durack
	/// </summary>
	struct crds
	{
		std::string name;
	};
	crds ns[9] = { "6","7","8","9","D","J","Q","K","A" };

	struct crds2
	{
		std::string suit;
	};
	crds2 ns2[4] = { " spades"," clubs"," diamonds"," hearts" };

	bool otbvYoN;
	int otv;
	int cheyHod;
	int bita;
	std::string cosValue;
	std::string cardOfBotTo;
	int num3;
	int num2;
	int num4;
	int num5;

	int lenMasCard = 36;
	std::string* masCard = new std::string[lenMasCard];
	int lenMasCardBot = 0;
	std::string* masBot = new std::string[lenMasCardBot];
	int lenMasCardPlayer = 0;
	std::string* masPlayer = new std::string[lenMasCardPlayer];

	public ref class Durack : public System::Windows::Forms::Form
	{
	public:
		Durack(void)
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
		~Durack()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button7;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(452, 29);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richTextBox1->Size = System::Drawing::Size(281, 363);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(47, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 49);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Начать игру";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Durack::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(235, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(96, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(232, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Будете бить карту\? (да - 1/нет - 0)";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &Durack::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(43, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Козырная масть это:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(106, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"масть";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(232, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Выберите номер карты:";
			this->label4->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(235, 111);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(96, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(337, 61);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 20);
			this->button2->TabIndex = 8;
			this->button2->Text = L"ввести";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Durack::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(47, 341);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(170, 51);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Перейти к следующему ходу";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &Durack::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(47, 236);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(84, 99);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Совершить ход компьютерного интеллекта на игрока";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &Durack::button5_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(337, 111);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(67, 20);
			this->button7->TabIndex = 12;
			this->button7->Text = L"ввести";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &Durack::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(133, 236);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(84, 99);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Совершить ход игрока на компьютерный интеллект";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &Durack::button6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(7, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(169, 24);
			this->label5->TabIndex = 14;
			this->label5->Text = L"♠ - spades (Пики)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Maroon;
			this->label6->Location = System::Drawing::Point(7, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 24);
			this->label6->TabIndex = 15;
			this->label6->Text = L"♥ - hearts (Черви)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(7, 83);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(170, 24);
			this->label7->TabIndex = 16;
			this->label7->Text = L"♣ - clubs (Трефы)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::Maroon;
			this->label8->Location = System::Drawing::Point(7, 106);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(205, 24);
			this->label8->TabIndex = 17;
			this->label8->Text = L"♦ - dimounds (Бубны)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(7, 133);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 24);
			this->label9->TabIndex = 18;
			this->label9->Text = L"D - 10";
			this->label9->Click += gcnew System::EventHandler(this, &Durack::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::Maroon;
			this->label10->Location = System::Drawing::Point(7, 157);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(143, 24);
			this->label10->TabIndex = 19;
			this->label10->Text = L"J - Валет (Jack)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(7, 181);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(164, 24);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Q - Дама (Queen)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::Maroon;
			this->label12->Location = System::Drawing::Point(7, 205);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(159, 24);
			this->label12->TabIndex = 21;
			this->label12->Text = L"K - Король (King)";
			this->label12->Click += gcnew System::EventHandler(this, &Durack::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(7, 229);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(121, 24);
			this->label13->TabIndex = 22;
			this->label13->Text = L"A - Туз (Ace)";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 70.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(92, 70);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(99, 107);
			this->label14->TabIndex = 23;
			this->label14->Text = L"♤";
			this->label14->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 70.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(92, 71);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(99, 107);
			this->label15->TabIndex = 24;
			this->label15->Text = L"♧";
			this->label15->Visible = false;
			this->label15->Click += gcnew System::EventHandler(this, &Durack::label15_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 70.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::DarkRed;
			this->label16->Location = System::Drawing::Point(92, 70);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(99, 107);
			this->label16->TabIndex = 25;
			this->label16->Text = L"♢";
			this->label16->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 70.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::DarkRed;
			this->label17->Location = System::Drawing::Point(92, 70);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(99, 107);
			this->label17->TabIndex = 26;
			this->label17->Text = L"♡";
			this->label17->Visible = false;
			this->label17->Click += gcnew System::EventHandler(this, &Durack::label17_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Location = System::Drawing::Point(223, 139);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(223, 253);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Символьные Обозначения";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Durack::groupBox1_Enter);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::DarkRed;
			this->label18->Location = System::Drawing::Point(-8, -10);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(36, 39);
			this->label18->TabIndex = 27;
			this->label18->Text = L"♡";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::DarkRed;
			this->label19->Location = System::Drawing::Point(721, 395);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(36, 39);
			this->label19->TabIndex = 28;
			this->label19->Text = L"♢";
			this->label19->Click += gcnew System::EventHandler(this, &Durack::label19_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(-8, 395);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(36, 39);
			this->label20->TabIndex = 29;
			this->label20->Text = L"♧";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(721, -10);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(36, 39);
			this->label21->TabIndex = 30;
			this->label21->Text = L"♤";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(535, 9);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(152, 13);
			this->label22->TabIndex = 31;
			this->label22->Text = L"Перезапустите приложение.";
			this->label22->Visible = false;
			// 
			// Durack
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(745, 426);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"Durack";
			this->Text = L"Durack";
			this->Load += gcnew System::EventHandler(this, &Durack::Durack_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void push_back_masCard(std::string*& mas, int& size, std::string& value) {
			std::string* newMasCard = new std::string[size + 1];

			for (int i = 0; i < size; i++) {
				newMasCard[i] = mas[i];
			}

			newMasCard[size++] = value;

			delete[] mas;

			mas = newMasCard;
		}

		void pop_masCard(std::string*& mas, int& size, int& indForPop) {
			size--;
			std::string* newMasCard = new std::string[size];

			for (int i = 0; i < size; i++) {
				if (i >= indForPop) {
					newMasCard[i] = mas[i + 1];
				}
				else {
					newMasCard[i] = mas[i];
				}
			}

			delete[] mas;

			mas = newMasCard;
		}

		int opredCen(std::string*& mas, int& numDefCard, std::string& cosV) {
			int num1 = numDefCard;
			std::string strOfSimpDef = mas[num1];
			int valueCardOfP = 0;
			if (strOfSimpDef == "6 spades") {
				valueCardOfP = 1;
			}
			else if (strOfSimpDef == "7 spades") {
				valueCardOfP = 2;
			}
			else if (strOfSimpDef == "8 spades") {
				valueCardOfP = 3;
			}
			else if (strOfSimpDef == "9 spades") {
				valueCardOfP = 4;
			}
			else if (strOfSimpDef == "D spades") {
				valueCardOfP = 5;
			}
			else if (strOfSimpDef == "J spades") {
				valueCardOfP = 6;
			}
			else if (strOfSimpDef == "Q spades") {
				valueCardOfP = 7;
			}
			else if (strOfSimpDef == "K spades") {
				valueCardOfP = 8;
			}
			else if (strOfSimpDef == "A spades") {
				valueCardOfP = 9;
			}
			else if (strOfSimpDef == "6 clubs") {
				valueCardOfP = 1;
			}
			else if (strOfSimpDef == "7 clubs") {
				valueCardOfP = 2;
			}
			else if (strOfSimpDef == "8 clubs") {
				valueCardOfP = 3;
			}
			else if (strOfSimpDef == "9 clubs") {
				valueCardOfP = 4;
			}
			else if (strOfSimpDef == "D clubs") {
				valueCardOfP = 5;
			}
			else if (strOfSimpDef == "J clubs") {
				valueCardOfP = 6;
			}
			else if (strOfSimpDef == "Q clubs") {
				valueCardOfP = 7;
			}
			else if (strOfSimpDef == "K clubs") {
				valueCardOfP = 8;
			}
			else if (strOfSimpDef == "A clubs") {
				valueCardOfP = 9;
			}
			else if (strOfSimpDef == "6 diamonds") {
				valueCardOfP = 1;
			}
			else if (strOfSimpDef == "7 diamonds") {
				valueCardOfP = 2;
			}
			else if (strOfSimpDef == "8 diamonds") {
				valueCardOfP = 3;
			}
			else if (strOfSimpDef == "9 diamonds") {
				valueCardOfP = 4;
			}
			else if (strOfSimpDef == "D diamonds") {
				valueCardOfP = 5;
			}
			else if (strOfSimpDef == "J diamonds") {
				valueCardOfP = 6;
			}
			else if (strOfSimpDef == "Q diamonds") {
				valueCardOfP = 7;
			}
			else if (strOfSimpDef == "K diamonds") {
				valueCardOfP = 8;
			}
			else if (strOfSimpDef == "A diamonds") {
				valueCardOfP = 9;
			}
			else if (strOfSimpDef == "6 hearts") {
				valueCardOfP = 1;
			}
			else if (strOfSimpDef == "7 hearts") {
				valueCardOfP = 2;
			}
			else if (strOfSimpDef == "8 hearts") {
				valueCardOfP = 3;
			}
			else if (strOfSimpDef == "9 hearts") {
				valueCardOfP = 4;
			}
			else if (strOfSimpDef == "D hearts") {
				valueCardOfP = 5;
			}
			else if (strOfSimpDef == "J hearts") {
				valueCardOfP = 6;
			}
			else if (strOfSimpDef == "Q hearts") {
				valueCardOfP = 7;
			}
			else if (strOfSimpDef == "K hearts") {
				valueCardOfP = 8;
			}
			else if (strOfSimpDef == "A hearts") {
				valueCardOfP = 9;
			}

			if (strOfSimpDef.erase(0, 1) == cosV) {
				valueCardOfP = valueCardOfP * 10;
			}
			return valueCardOfP;
		}

		void otbivanie(std::string*& masPr, int& sizePr, std::string*& masAt, int& sizeAt, int& numDefCard, int& numDenjCard, std::string& cosV) {
			int numPr = numDefCard;
			int numAt = numDenjCard;
			std::string strOfSimpDef = masPr[numPr];
			std::string strOfSimpDef2 = masPr[numPr];
			std::string strOfSimpDenj = masAt[numAt];
			std::string strOfSimpDenj2 = masAt[numAt];
			std::string strOfSimpDef1 = strOfSimpDef.erase(0, 1);
			if (strOfSimpDef1 == cosV) {
				if (opredCen(masPr, numDefCard, cosV) > opredCen(masAt, numDenjCard, cosV)) {
					char strOtv[40];
					std::string str1 = "Карты \"" + masPr[numPr] + "\" и \"" + masAt[numAt] + "\" уходят в биту.\r\n\r\n";
					strcpy(strOtv, str1.c_str());
					this->richTextBox1->Text += gcnew String(strOtv);
					pop_masCard(masPr, sizePr, numPr);
					pop_masCard(masAt, sizeAt, numAt);
					bita = 1;
				}
				else {
					char strOtv[45];
					std::string str1 = "Нельзя походить \"" + masPr[numPr] + "\" на \"" + masAt[numAt] + "\".\r\n\r\n";
					strcpy(strOtv, str1.c_str());
					this->richTextBox1->Text += gcnew String(strOtv);
					bita = 0;
				}
			}
			else {
				strOfSimpDef2 = strOfSimpDef2.erase(0, 1);
				strOfSimpDenj = strOfSimpDenj.erase(0, 1);
				if (strOfSimpDef2 == strOfSimpDenj) {
					if (opredCen(masPr, numDefCard, cosV) > opredCen(masAt, numDenjCard, cosV)) {
						char strOtv[40];
						std::string str1 = "Карты \"" + masPr[numPr] + "\" и \"" + masAt[numAt] + "\" уходят в биту.\r\n\r\n";
						strcpy(strOtv, str1.c_str());
						this->richTextBox1->Text += gcnew String(strOtv);
						pop_masCard(masPr, sizePr, numPr);
						pop_masCard(masAt, sizeAt, numAt);
						bita = 1;
					}
					else {
						char strOtv[45];
						std::string str1 = "Нельзя походить \"" + masPr[numPr] + "\" на \"" + masAt[numAt] + "\".\r\n\r\n";
						strcpy(strOtv, str1.c_str());
						this->richTextBox1->Text += gcnew String(strOtv);
						bita = 0;
					}
				}
				else {
					char strOtv[45];
					std::string str1 = "Нельзя походить \"" + masPr[numPr] + "\" на \"" + masAt[numAt] + "\".\r\n\r\n";
					strcpy(strOtv, str1.c_str());
					this->richTextBox1->Text += gcnew String(strOtv);
					bita = 0;
				}
			}
		}

		void viborBota(std::string*& masB, int& sizeB, std::string*& masP, int& sizeP, int& numDenjCardOfP, std::string& cosV) {
			std::string cardOfPlayer = masP[numDenjCardOfP];
			bool botTakeCard = true;
			int numP = numDenjCardOfP;
			for (int i = 0; i < sizeB; i++) {
				std::string strOfSimpDef = masB[i];
				strOfSimpDef = strOfSimpDef.erase(0, 1);
				std::string strOfSimpAt = masP[numDenjCardOfP];
				strOfSimpAt = strOfSimpAt.erase(0, 1);
				if (strOfSimpDef == cosV) {
					if (opredCen(masB, i, cosV) > opredCen(masP, numDenjCardOfP, cosV)) {
						num5 = i;
						botTakeCard = false;
						otbvYoN = true;
					}
				} else {
					if (strOfSimpDef == strOfSimpAt) {
						if (opredCen(masB, i, cosV) > opredCen(masP, numDenjCardOfP, cosV)) {
							num5 = i;
							botTakeCard = false;
							otbvYoN = true;
						}
					}
				}
			}
			if (botTakeCard == true) {
				char strOtv[61];
				std::string str1 = "Компьютерный интеллект взял карту \"" + cardOfPlayer + ".\r\n\r\n";
				strcpy(strOtv, str1.c_str());
				this->richTextBox1->Text += gcnew String(strOtv);
				push_back_masCard(masB, sizeB, cardOfPlayer);
				pop_masCard(masP, sizeP, numP);
				otbvYoN = false;
			}
		}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(0, "rus");
		srand(time(0));
		int m = 0;
		for (int i = 0; i <= 8; i++) {
			for (int j = 0; j <= 3; j++) {
				masCard[m] = ns[i].name + ns2[j].suit;
				m++;
			}
		}
		cosValue = ns2[0 + rand() % (3 + 1 - 0)].suit;
		char strOtv[45];
		std::string str1 = "Козырная масть это:" + cosValue + ".\r\n";
		strcpy(strOtv, str1.c_str());
		this->richTextBox1->Text += gcnew String(strOtv);
		str1 = cosValue;
		if (cosValue == " spades") {
			this->label14->Visible = true;
		} else if (cosValue == " clubs") {
			this->label15->Visible = true;
		} else if (cosValue == " diamonds") {
			this->label16->Visible = true;
		} else if (cosValue == " hearts") {
			this->label17->Visible = true;
		}
		strcpy(strOtv, str1.c_str());
		this->label3->Text = gcnew String(strOtv);
		this->label3->Visible = true;
		for (int i = 0; i < 6; i++) {
			int m = i;
			int number = 0 + rand() % (lenMasCard - 0);
			push_back_masCard(masPlayer, lenMasCardPlayer, masCard[number]);
			pop_masCard(masCard, lenMasCard, number);
		}
		for (int i = 0; i < 6; i++) {
			int m = i;
			int number = 0 + rand() % (lenMasCard - 0);
			push_back_masCard(masBot, lenMasCardBot, masCard[number]);
			pop_masCard(masCard, lenMasCard, number);
		}
		cheyHod = 0 + rand() % (1 + 1 - 0);
		if (cheyHod == 0) {
			this->button5->Visible = true;
			this->button1->Visible = false;
		}
		if (cheyHod == 1) {
			this->button6->Visible = true;
			this->button1->Visible = false;
		}
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Durack_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(0, "rus");
	srand(time(0));
	char strOtv[45];
	std::string str1 = "Ваши карды: \r\n\r\n";
	strcpy(strOtv, str1.c_str());
	this->richTextBox1->Text += gcnew String(strOtv);
	for (int i = 0; i < lenMasCardPlayer; i++) {
		char strOtv[45];
		std::string str1 = masPlayer[i] + "\r\n";
		strcpy(strOtv, str1.c_str());
		this->richTextBox1->Text += gcnew String(strOtv);
	}
	str1 = " \r\n";
	strcpy(strOtv, str1.c_str());
	this->richTextBox1->Text += gcnew String(strOtv);
	num2 = 0 + rand() % (lenMasCardBot - 0);
	cardOfBotTo = masBot[num2];
	str1 = "На вас пошли картой : " + cardOfBotTo + ".\r\n";
	strcpy(strOtv, str1.c_str());
	this->richTextBox1->Text += gcnew String(strOtv);
	str1 = "Вы будете бить? \r\n";
	strcpy(strOtv, str1.c_str());
	this->richTextBox1->Text += gcnew String(strOtv);
	this->label1->Visible = true;
	this->textBox1->Visible = true;
	this->button2->Visible = true;
	this->label4->Visible = true;
	this->textBox2->Visible = true;
	this->button5->Visible = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((this->textBox1->Text != "") && (this->textBox2->Text != "")) {
		int otvCh1 = System::Convert::ToInt16(this->textBox1->Text);
		otv = otvCh1;
		int otvCh2 = System::Convert::ToInt16(this->textBox2->Text);
		num3 = otvCh2 - 1;
		if (otv == 1) {
			otbivanie(masPlayer, lenMasCardPlayer, masBot, lenMasCardBot, num3, num2, cosValue);
		}
		if ((bita == 1) || (otv == 0)) {
			this->textBox1->Visible = false;
			this->label1->Visible = false;
			this->button2->Visible = false;
			this->label4->Visible = false;
			this->textBox2->Visible = false;
			this->button4->Visible = true;
			bita = 0;
		} else {
			this->label1->Visible = true;
			this->textBox1->Visible = true;
			this->button2->Visible = true;
			this->label4->Visible = true;
			this->textBox2->Visible = true;
			this->button5->Visible = false;
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(0, "rus");
	srand(time(0));
	char strOtv[45];
	if (cheyHod == 0) {
		if (otv == 1) {
			if ((lenMasCardPlayer == 5) && (lenMasCard >= 1)) {
				int num_min = 0 + rand() % (lenMasCard - 0);
				push_back_masCard(masPlayer, lenMasCardPlayer, masCard[num_min]);
				pop_masCard(masCard, lenMasCard, num_min);
			}
			if ((lenMasCardBot == 5) && (lenMasCard >= 1)) {
				int num_min2 = 0 + rand() % (lenMasCard - 0);
				push_back_masCard(masBot, lenMasCardBot, masCard[num_min2]);
				pop_masCard(masCard, lenMasCard, num_min2);
			}
		}
		else {
			std::string str1 = "Вы берёте в руку карту \"" + cardOfBotTo + "\".\r\n";
			strcpy(strOtv, str1.c_str());
			this->richTextBox1->Text += gcnew String(strOtv);
			push_back_masCard(masPlayer, lenMasCardPlayer, cardOfBotTo);
			pop_masCard(masBot, lenMasCardBot, num2);
			if (lenMasCard >= 1) {
				int num_min3 = 0 + rand() % (lenMasCard - 0);
				push_back_masCard(masBot, lenMasCardBot, masCard[num_min3]);
				pop_masCard(masCard, lenMasCard, num_min3);
			}
		}
	}
	if (cheyHod == 1) {
		if ((lenMasCardPlayer == 5) && (lenMasCard >= 1)) {
			int num_min = 0 + rand() % (lenMasCard - 0);
			push_back_masCard(masPlayer, lenMasCardPlayer, masCard[num_min]);
			pop_masCard(masCard, lenMasCard, num_min);
		}
		if ((lenMasCardBot == 5) && (lenMasCard >= 1)) {
			int num_min2 = 0 + rand() % (lenMasCard - 0);
			push_back_masCard(masBot, lenMasCardBot, masCard[num_min2]);
			pop_masCard(masCard, lenMasCard, num_min2);
		}
	}
	if (lenMasCardBot == 0) {
		MessageBox::Show("Победил компьютерный интеллект!","Ура, поздравляем!",MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		this->label22->Visible = true;
		this->richTextBox1->Clear();
	}
	else if (lenMasCardPlayer == 0) {
		int k1 = 0;
		Igrock^ gamer;
		gamer = gcnew Igrock(k1);
		gamer->Dobavl();
		String^ s = gcnew String((gamer->Get_schetIgroka()).c_str());
		MessageBox::Show("Победил вы!", "Ура, поздравляем! Ваш счёт: " + s, MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		this->label22->Visible = true;
		this->richTextBox1->Clear();
	} else {
		if (cheyHod == 0) {
			this->button6->Visible = true;
			this->button4->Visible = false;
			cheyHod = 1;
		}
		else {
			this->button5->Visible = true;
			this->button4->Visible = false;
			cheyHod = 0;
		}
	}
}
private: System::Void Durack_Load_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox2->Text != "") {
		int otvCh2 = System::Convert::ToInt16(this->textBox2->Text);
		num4 = otvCh2 - 1;
		viborBota(masBot, lenMasCardBot, masPlayer, lenMasCardPlayer, num4, cosValue);
		if (otbvYoN == true) {
			otbivanie(masBot, lenMasCardBot, masPlayer, lenMasCardPlayer, num5, num4, cosValue);
		}
		this->button7->Visible = false;
		this->label4->Visible = false;
		this->textBox2->Visible = false;
		this->button4->Visible = true;
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(0, "rus");
	srand(time(0));
	char strOtv[45];
	std::string str1 = "Ваши карды: \r\n\r\n";
	strcpy(strOtv, str1.c_str());
	this->richTextBox1->Text += gcnew String(strOtv);
	for (int i = 0; i < lenMasCardPlayer; i++) {
		char strOtv[45];
		std::string str1 = masPlayer[i] + "\r\n";
		strcpy(strOtv, str1.c_str());
		this->richTextBox1->Text += gcnew String(strOtv);
	}
	str1 = " \r\n";
	strcpy(strOtv, str1.c_str());
	this->richTextBox1->Text += gcnew String(strOtv);
	str1 = "Выберите номер карты, чтобы походить: \r\n";
	strcpy(strOtv, str1.c_str());
	this->richTextBox1->Text += gcnew String(strOtv);
	this->label4->Visible = true;
	this->textBox2->Visible = true;
	this->button7->Visible = true;
	this->button6->Visible = false;
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
