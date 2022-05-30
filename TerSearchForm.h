#pragma once

#include "TerSearchForm.h"
namespace TernarySearch {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TerSearchForm
	/// </summary>
	public ref class TerSearchForm : public System::Windows::Forms::Form
	{
	public:
		TerSearchForm(void)
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
		~TerSearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonMax;
	private: System::Windows::Forms::Button^ buttonMin;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBoxM;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxN;
	private: System::Windows::Forms::Label^ label4;




	//private: System::Windows::Forms::TextBox^ textBoxN;



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
			this->buttonMax = (gcnew System::Windows::Forms::Button());
			this->buttonMin = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxM = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxN = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonMax
			// 
			this->buttonMax->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonMax->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonMax->Location = System::Drawing::Point(297, 425);
			this->buttonMax->Name = L"buttonMax";
			this->buttonMax->Size = System::Drawing::Size(140, 30);
			this->buttonMax->TabIndex = 0;
			this->buttonMax->Text = L"Поиск максимума";
			this->buttonMax->UseVisualStyleBackColor = false;
			this->buttonMax->Click += gcnew System::EventHandler(this, &TerSearchForm::buttonMax_Click);
			// 
			// buttonMin
			// 
			this->buttonMin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonMin->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonMin->Location = System::Drawing::Point(533, 424);
			this->buttonMin->Name = L"buttonMin";
			this->buttonMin->Size = System::Drawing::Size(140, 30);
			this->buttonMin->TabIndex = 1;
			this->buttonMin->Text = L"Поиск минимума";
			this->buttonMin->UseVisualStyleBackColor = false;
			this->buttonMin->Click += gcnew System::EventHandler(this, &TerSearchForm::buttonMin_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(315, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(358, 48);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Тернарный поиск";
			this->label1->Click += gcnew System::EventHandler(this, &TerSearchForm::label1_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(118, 191);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(377, 29);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Введите массив через запятую";
			this->label3->Click += gcnew System::EventHandler(this, &TerSearchForm::label3_Click);
			// 
			// textBoxM
			// 
			this->textBoxM->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxM->Location = System::Drawing::Point(524, 200);
			this->textBoxM->Name = L"textBoxM";
			this->textBoxM->Size = System::Drawing::Size(412, 20);
			this->textBoxM->TabIndex = 6;
			this->textBoxM->TextChanged += gcnew System::EventHandler(this, &TerSearchForm::textBoxM_TextChanged);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(276, 262);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(219, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Результат поиска";
			this->label2->Click += gcnew System::EventHandler(this, &TerSearchForm::label2_Click);
			// 
			// textBoxN
			// 
			this->textBoxN->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxN->Location = System::Drawing::Point(524, 271);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->Size = System::Drawing::Size(412, 20);
			this->textBoxN->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 23);
			this->label4->TabIndex = 2;
			// 
			// TerSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(966, 542);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxN);
			this->Controls->Add(this->textBoxM);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonMin);
			this->Controls->Add(this->buttonMax);
			this->Name = L"TerSearchForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TerSearchForm";
			this->Load += gcnew System::EventHandler(this, &TerSearchForm::TerSearchForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void textBoxM_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBoxN_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonMin_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonMax_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TerSearchForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
