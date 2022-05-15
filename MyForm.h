#pragma once

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
#include "raduga.h"

namespace Modelrainbow {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary> 
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;


	protected:

	private:
		int h, w;
		bool butt = 1, but = 1;
		raduga* radd;
		long double* a = new long double[7];
		long double b, R, L, a1, b1;
		int N;
		float raz = 15, sdvgx = 330, sdvgy=300;
		Graphics^ image;
		BufferedGraphics^ bufferedGraphics;
		BufferedGraphicsContext^ bufferedGraphicsContext;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox7;















		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(34, 36);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(900, 700);
			this->panel1->TabIndex = 0;
			this->panel1->UseWaitCursor = true;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(1016, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 38);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"3";
			this->textBox1->UseWaitCursor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Snow;
			this->label1->Location = System::Drawing::Point(982, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 32);
			this->label1->TabIndex = 4;
			this->label1->Text = L"b";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(1016, 130);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(180, 38);
			this->textBox4->TabIndex = 5;
			this->textBox4->Text = L"5";
			this->textBox4->UseWaitCursor = true;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(1016, 246);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(180, 38);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"400";
			this->textBox2->UseWaitCursor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Snow;
			this->label2->Location = System::Drawing::Point(979, 246);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 32);
			this->label2->TabIndex = 7;
			this->label2->Text = L"L";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Snow;
			this->label3->Location = System::Drawing::Point(978, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 32);
			this->label3->TabIndex = 8;
			this->label3->Text = L"R";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1016, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 38);
			this->button1->TabIndex = 9;
			this->button1->Text = L"ѕервый эксперимент";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(1016, 290);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(61, 38);
			this->textBox3->TabIndex = 10;
			this->textBox3->Text = L"4";
			this->textBox3->UseWaitCursor = true;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(1135, 290);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(61, 38);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"0.74";
			this->textBox5->UseWaitCursor = true;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Snow;
			this->label4->Location = System::Drawing::Point(979, 296);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 32);
			this->label4->TabIndex = 12;
			this->label4->Text = L"a";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Snow;
			this->label5->Location = System::Drawing::Point(1098, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 32);
			this->label5->TabIndex = 13;
			this->label5->Text = L"b";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1016, 202);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 38);
			this->button2->TabIndex = 14;
			this->button2->Text = L"2.1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(1016, 334);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(180, 38);
			this->textBox6->TabIndex = 15;
			this->textBox6->Text = L"5";
			this->textBox6->UseWaitCursor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Snow;
			this->label6->Location = System::Drawing::Point(975, 337);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 32);
			this->label6->TabIndex = 16;
			this->label6->Text = L"R";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1016, 422);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(180, 38);
			this->button3->TabIndex = 17;
			this->button3->Text = L"ќстановить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Snow;
			this->label7->Location = System::Drawing::Point(1085, 473);
			this->label7->Name = L"label7";
			this->label7->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label7->Size = System::Drawing::Size(0, 32);
			this->label7->TabIndex = 18;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::Snow;
			this->label8->Location = System::Drawing::Point(1025, 473);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 32);
			this->label8->TabIndex = 19;
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1004, 591);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 20;
			this->button4->Text = L"¬верх";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1044, 620);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 21;
			this->button5->Text = L"¬право";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(963, 620);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 22;
			this->button6->Text = L"¬лево";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1004, 649);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 23;
			this->button7->Text = L"¬низ";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(1136, 611);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(66, 40);
			this->button8->TabIndex = 24;
			this->button8->Text = L"÷ентр";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::Snow;
			this->label9->Location = System::Drawing::Point(976, 554);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(226, 25);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Ёлементы управлени€";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(1117, 202);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(79, 38);
			this->button9->TabIndex = 26;
			this->button9->Text = L"2.2";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::Snow;
			this->label10->Location = System::Drawing::Point(975, 381);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 32);
			this->label10->TabIndex = 28;
			this->label10->Text = L"N";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(1016, 378);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(180, 38);
			this->textBox7->TabIndex = 27;
			this->textBox7->Text = L"5";
			this->textBox7->UseWaitCursor = true;
			// 
			// MyForm
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::Cursor;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1228, 768);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->ImeMode = System::Windows::Forms::ImeMode::On;
			this->Name = L"MyForm";
			this->Text = L"Rainbow";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		w = this->panel1->Width - 1;
		h = this->panel1->Height - 1;
		b = Convert::ToDouble(this->textBox1->Text);
		R = Convert::ToDouble(this->textBox4->Text);
		L = Convert::ToDouble(this->textBox2->Text);
		label7->Text = " ";
		label8->Text = " ";
		radd = new raduga(b, R, L);
		a[0] = 350;
		a[1] = 410;
		a[2] = 470;
		a[3] = 540;
		a[4] = 600;
		a[5] = 670;
		a[6] = 800;
		image = panel1->CreateGraphics();
		this->bufferedGraphicsContext = BufferedGraphicsManager::Current;
		this->bufferedGraphicsContext->MaximumBuffer = System::Drawing::Size(w + 1, h + 1);
		this->bufferedGraphics = bufferedGraphicsContext->Allocate(image, Rectangle(0, 0, w + 1, h + 1));
		this->bufferedGraphics->Graphics->Clear(panel1->BackColor);
		but = 1;
		while (but)
		{
			Application::DoEvents();
			Draw();
			_sleep(50);
		}
	}

		   void Draw()
		   {
				
			   
			   Color^ color = gcnew Color();
			   Brush^ br = gcnew SolidBrush(Color::FromArgb(200, 156, 241, 255));
			   Pen^ pen = gcnew Pen(color->Violet);
			   this->bufferedGraphics->Graphics->Clear(Color::SkyBlue);
			   float x1, y1, x2, y2, x3, y3, x4, y4, r;
			   r = R;
			   bufferedGraphics->Graphics->FillEllipse(br, sdvgx - raz * r, sdvgy - raz * r, r * 2 * raz, r * 2 * raz);
			   long double px1, py1, px2, py2, px3, py3, px4, py4;

			   for (int i = 0; i < 7; i++)
			   {
				   if (i == 0)
				   {
					   pen = gcnew Pen(color->BlueViolet);
				   }
				   else if (i == 1)
				   {
					   pen = gcnew Pen(color->DarkBlue);
				   }
				   else if (i == 2)
				   {
					   pen = gcnew Pen(color->Blue);
				   }
				   else if (i == 3)
				   {
					   pen = gcnew Pen(color->Green);
				   }
				   else if (i == 4)
				   {
					   pen = gcnew Pen(color->Yellow);
				   }
				   else if (i == 5)
				   {
					   pen = gcnew Pen(color->Orange);
				   }
				   else
				   {
					   pen = gcnew Pen(color->Red);
				   }

				   radd->L = a[i];
				   radd->beam(px1, py1, px2, py2, px3, py3, px4, py4);

				   x1 = raz * px1;
				   y1 = -raz * py1;
				   x2 = raz * px2;
				   y2 = -raz * py2;
				   x3 = raz * px3;
				   y3 = -raz * py3;
				   x4 = raz * px4;
				   y4 = -raz * py4;

				   
				   bufferedGraphics->Graphics->DrawLine(pen, x1 + sdvgx, y1 + sdvgy, x2 + sdvgx, y2 + sdvgy);
				   bufferedGraphics->Graphics->DrawLine(pen, x2 + sdvgx, y2 + sdvgy, x3 + sdvgx, y3 + sdvgy);
				   bufferedGraphics->Graphics->DrawLine(pen, x3 + sdvgx, y3 + sdvgy, x4 + sdvgx, y4 + sdvgy);
			   }
			   pen = gcnew Pen(color->White);
			   bufferedGraphics->Graphics->DrawLine(pen, 0., y1 + sdvgy, x1 + sdvgx, y1 + sdvgy);
			   
			   bufferedGraphics->Render();

			   
			  
		   }
		   
		   
		   
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	w = this->panel1->Width - 1;
	h = this->panel1->Height - 1;
	R = Convert::ToDouble(this->textBox6->Text);
	L = Convert::ToDouble(this->textBox2->Text);
	a1 = Convert::ToDouble(this->textBox3->Text);
	b1 = Convert::ToDouble(this->textBox5->Text);
	radd = new raduga(0, R, L);
	image = panel1->CreateGraphics();
	this->bufferedGraphicsContext = BufferedGraphicsManager::Current;
	this->bufferedGraphicsContext->MaximumBuffer = System::Drawing::Size(w + 1, h + 1);
	this->bufferedGraphics = bufferedGraphicsContext->Allocate(image, Rectangle(0, 0, w + 1, h + 1));
	this->bufferedGraphics->Graphics->Clear(panel1->BackColor);
	
	label8->Text="b:";
	double b_l;
	double a2=a1, b2=b1;
	butt = 1;
	while(butt && butt)
	{
		if (a1 > b1)
		{
			while (a1 > b1 && butt)
			{
				Application::DoEvents();
				a1 -= 0.02;
				Drat();
				_sleep(1);
				b_l = radd->b;
				label7->Text = Convert::ToString(b_l);
				
			}
		}



		else if (b1 > a1 && butt)
		{
			while (b1 > a1 && butt)
			{
				Application::DoEvents();
				b1 += 0.02;
				Drat();
				_sleep(1);
				b_l = radd->b;
				label7->Text = Convert::ToString(b_l);
				if (b1 > a2)
				{
					a1 = a2;
					b1 = b2;
					break;
				}
			}
			
		}
	}
	
}
	   void Drat()
	   {
		   Color^ color = gcnew Color();
		   float x1, y1, x2, y2, x3, y3, x4, y4, r;
		   long double px1, py1, px2, py2, px3, py3, px4, py4;
		   double c1;
		   r = R;
		   Brush^ br = gcnew SolidBrush(Color::FromArgb(100, 160, 240, 255));
		   Pen^ pen = gcnew Pen(color->Green);
		   this->bufferedGraphics->Graphics->Clear(Color::SkyBlue);
		   float x_s, y_s;
		   x_s = sdvgx - raz * r;
		   y_s = sdvgy - raz * r;
		   bufferedGraphics->Graphics->FillEllipse(br, x_s, y_s, r * 2 * raz, r * 2 * raz);
		   
		   if (a1 > b1)
		   {
			   radd->b = a1;
		   }
		   else
		   {
			   radd->b = b1;
		   }
		   

			   radd->beam(px1, py1, px2, py2, px3, py3, px4, py4);
			   

			   x1 = raz * px1;
			   y1 = -raz * py1;
			   x2 = raz * px2;
			   y2 = -raz * py2;
			   x3 = raz * px3;
			   y3 = -raz * py3;
			   x4 = raz * px4;
			   y4 = -raz * py4;


			   bufferedGraphics->Graphics->DrawLine(pen, x1 + sdvgx, y1 + sdvgy, x2 + sdvgx, y2 + sdvgy);
			   bufferedGraphics->Graphics->DrawLine(pen, x2 + sdvgx, y2 + sdvgy, x3 + sdvgx, y3 + sdvgy);
			   bufferedGraphics->Graphics->DrawLine(pen, x3 + sdvgx, y3 + sdvgy, x4 + sdvgx, y4 + sdvgy);
			   pen = gcnew Pen(color->Green);
			   bufferedGraphics->Graphics->DrawLine(pen, 0., y1 + sdvgy, x1 + sdvgx, y1 + sdvgy);
		   
		   
		   
		   

		   bufferedGraphics->Render();
		   delete br;
		   delete pen;
	   }
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	butt = 0;
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	sdvgy -= 25;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	sdvgx += 25;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	sdvgx -= 25;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	sdvgy += 25;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	sdvgx = 330, sdvgy = 300;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	w = this->panel1->Width - 1;
	h = this->panel1->Height - 1;
	R = Convert::ToDouble(this->textBox6->Text);
	L = Convert::ToDouble(this->textBox2->Text);
	a1 = Convert::ToDouble(this->textBox3->Text);
	b1 = Convert::ToDouble(this->textBox5->Text);
	N = Convert::ToInt64(this->textBox7->Text);
	radd = new raduga(0, R, L);
	image = panel1->CreateGraphics();
	this->bufferedGraphicsContext = BufferedGraphicsManager::Current;
	this->bufferedGraphicsContext->MaximumBuffer = System::Drawing::Size(w + 1, h + 1);
	this->bufferedGraphics = bufferedGraphicsContext->Allocate(image, Rectangle(0, 0, w + 1, h + 1));
	this->bufferedGraphics->Graphics->Clear(panel1->BackColor);

	double * rt = new double[N];
	for (int i = 0; i < N; i++)
	{
		rt[i] = a1 + (b1 - a1) * rand() / RAND_MAX;
	}
	
	butt = 1;
	while (butt)
	{
		Application::DoEvents();
		Drap(rt);
		_sleep(50);
	}

}

	   void Drap(double * rt)
	   {
		   Color^ color = gcnew Color();
		   float x1, y1, x2, y2, x3, y3, x4, y4, r;
		   long double px1, py1, px2, py2, px3, py3, px4, py4;
		   double c1;
		   r = R;
		   Brush^ br = gcnew SolidBrush(Color::FromArgb(100, 160, 240, 255));
		   Pen^ pen = gcnew Pen(color->Red);
		   this->bufferedGraphics->Graphics->Clear(Color::SkyBlue);
		   float x_s, y_s;
		   label7->Text = " ";
		   label8->Text = " ";
		   x_s = sdvgx - raz * r;
		   y_s = sdvgy - raz * r;
		   bufferedGraphics->Graphics->FillEllipse(br, x_s, y_s, r * 2 * raz, r * 2 * raz);
		   
		   
		   for (int i = 0; i < N; i++)
		   {
			   radd->b = rt[i];
			   radd->beam(px1, py1, px2, py2, px3, py3, px4, py4);


			   x1 = raz * px1;
			   y1 = -raz * py1;
			   x2 = raz * px2;
			   y2 = -raz * py2;
			   x3 = raz * px3;
			   y3 = -raz * py3;
			   x4 = raz * px4;
			   y4 = -raz * py4;

			   pen = gcnew Pen(color->Red);
			   bufferedGraphics->Graphics->DrawLine(pen, x1 + sdvgx, y1 + sdvgy, x2 + sdvgx, y2 + sdvgy);
			   pen = gcnew Pen(color->Yellow);
			   bufferedGraphics->Graphics->DrawLine(pen, x2 + sdvgx, y2 + sdvgy, x3 + sdvgx, y3 + sdvgy);
			   pen = gcnew Pen(color->Green);
			   bufferedGraphics->Graphics->DrawLine(pen, x3 + sdvgx, y3 + sdvgy, x4 + sdvgx, y4 + sdvgy);
			   pen = gcnew Pen(color->Orange);
			   bufferedGraphics->Graphics->DrawLine(pen, 0., y1 + sdvgy, x1 + sdvgx, y1 + sdvgy);
		   }

		   





		   bufferedGraphics->Render();
		   delete br;
		   delete pen;
	   }
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
