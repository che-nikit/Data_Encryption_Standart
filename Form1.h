#include "DES.h"
#include<iostream>
#include<fstream>
#include<string>
#include<math.h>
#include<cctype>
#include<windows.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#pragma once


namespace DesCppWinform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 



	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(338, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(185, 26);
			this->textBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(338, 86);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 34);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Закодировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(338, 126);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(185, 34);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Раскодировать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(400, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"КЛЮЧ";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(251, 26);
			this->textBox2->TabIndex = 8;
			this->textBox2->Click += gcnew System::EventHandler(this, &Form1::textBox2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(12, 126);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(251, 26);
			this->textBox3->TabIndex = 9;
			this->textBox3->Click += gcnew System::EventHandler(this, &Form1::textBox3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(59, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 18);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Обрабатываемый файл";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(72, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 18);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Обработанный файл";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(560, 194);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"DES";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		/*
		richTextBox2 ->Text = "";
		string message;
		MarshalString(richTextBox1->Text,message);
		int a = message.length();
		message = DES::CheckMessage(message);
		//message = DES::MessageToHex(message);
		a = message.length();
		string key;
		MarshalString(textBox1->Text,key);
		key = DES::MessageToHex(key);
		*/

		string message;
		string str;
		MarshalString(textBox2->Text,str);
        ifstream is; 
		is.open(str.c_str(), ios::binary);
		if(is.good())
		{
		  is.seekg( 0, ios::end );
		  message.resize( is.tellg() );
		  is.seekg( 0, ios::beg );

		  is.read( (char*)message.data(), message.size() );
		  is.close();
		}
		message = DES::CheckMessage(message);
		//message = DES::MessageToHex(message);

		string key;
		MarshalString(textBox1->Text,key);
		key = DES::MessageToHex(key);
		


		int parts = message.length() / 8;
		string res = "";
		for(int i = 0; i < parts; i++)
		{
			string jjj = message.substr(8*i,8);
			jjj = DES::MessageToHex(jjj);
			string s = DES::des_process(jjj, key, true);

			for(int i = 0; i < s.length() ; i+= 2)
			{
				string d;
				int j;
				d += s[i];
				d += s[i+1];
				j = HEX_TO_DEC(d);
				res += (unsigned char)j;
			}
			//richTextBox2 ->Text += gcnew String(res.c_str());
		}

		string str2;
		MarshalString(textBox3->Text,str2);
		fstream of;
		of.open(str2.c_str(), ios::out | ios::binary);
		int h = 0;
		while(h < res.length())
		{
			of.put(res[h]);
			h++;
		}
		//of.write(res.c_str(),res.length());
		of.close();
	}

	void MarshalString ( String ^ s, string& os ) 
	{
	   using namespace Runtime::InteropServices;
	   const char* chars = 
		  (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	   os = chars;
	   Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	int HEX_TO_DEC(string st)
	{
		int i,s,k,p;
		s=0;
		p=st.length()-1;
		for (i=0; i < st.length(); i++)
		{
			switch (toupper(st[i]))
			{
				case 'A': k=10; break;
				case 'B': k=11; break;
				case 'C': k=12; break;
				case 'D': k=13; break;
				case 'E': k=14; break;
				case 'F': k=15; break;
				case '1': k=1; break;
				case '2': k=2; break;
				case '3': k=3; break;
				case '4': k=4; break;
				case '5': k=5; break;
				case '6': k=6; break;
				case '7': k=7; break;
				case '8': k=8; break;
				case '9': k=9; break;
				case '0': k=0; break;
			}
			s=s+k*pow(16.0,p);
			p--;
		}
		return s;
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {

			 /*
		richTextBox1 ->Text = "";
		string message;
		MarshalString(richTextBox2->Text,message);
		message = DES::CheckMessage(message);
		//message = DES::MessageToHex(message);
		*/

		string str;
		MarshalString(textBox2->Text,str);
		string message;
        ifstream is; 
		is.open(str.c_str(), ios::binary);
		if(is.good())
		{
		  is.seekg( 0, ios::end );
		  message.resize( is.tellg() );
		  is.seekg( 0, ios::beg );

		  is.read( (char*)message.data(), message.size() );
		  is.close();
		}

		message = DES::CheckMessage(message);

		string key;
		MarshalString(textBox1->Text,key);
		key = DES::MessageToHex(key);

		int sd = message.length();
		int parts = message.length() / 8;
		string res = "";
		for(int i = 0; i < parts; i++)
		{
			string jjj = message.substr(i*8,8);
			jjj = DES::MessageToHex(jjj);
			string s = DES::des_process(jjj, key, false);
			
			for(int i = 0; i < s.length() ; i+= 2)
			{
				string d;
				int j;
				d += s[i];
				d += s[i+1];
				j = HEX_TO_DEC(d);
				res += (unsigned char)j;
			}
			fstream of;
			string str2;
			MarshalString(textBox3->Text,str2);
			of.open(str2.c_str(), ios::out | ios::binary);
			int h = 0;
			while(h < res.length())
			{
				of.put(res[h]);
				h++;
			}
			//of.write(res.c_str(),res.length());
			of.close();
		}
		 }
private: System::Void textBox2_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if (textBox2 ->Text->Length == 0)
				{
					 openFileDialog1->InitialDirectory = ".\\";
					 openFileDialog1->Filter = "Text (*.txt)|*.txt";

					 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
					 {
						 textBox2->Text = openFileDialog1->FileName;
					 }
				}
		 }
private: System::Void textBox3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (textBox3 ->Text->Length == 0)
			{
				 saveFileDialog1->InitialDirectory = ".\\";
				 saveFileDialog1->Filter = "Text (*.txt)|*.txt";

				 if(saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 textBox3->Text = saveFileDialog1->FileName;
				 }
			}
		 }
};
}

