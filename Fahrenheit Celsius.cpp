// Programmer: Zailyn Tamayo

// Fahrenheit Celsius Calculator 

#pragma once

namespace Ex08 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		double valueC, valueF;   // Value entered by user
		double resultF, resultC;  // Result

		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;


	protected: 


	private: System::Windows::Forms::Button^  Clear;
	private: System::Windows::Forms::Button^  CtoF;
	private: System::Windows::Forms::Button^  FtoC;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->CtoF = (gcnew System::Windows::Forms::Button());
			this->FtoC = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(259, 20);
			this->textBox1->TabIndex = 0;
			// 
			// Clear
			// 
			this->Clear->Location = System::Drawing::Point(197, 56);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(75, 23);
			this->Clear->TabIndex = 3;
			this->Clear->Text = L"Clear";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &Form1::Clear_Click);
			// 
			// CtoF
			// 
			this->CtoF->Location = System::Drawing::Point(13, 55);
			this->CtoF->Name = L"CtoF";
			this->CtoF->Size = System::Drawing::Size(75, 23);
			this->CtoF->TabIndex = 4;
			this->CtoF->Text = L"C to F";
			this->CtoF->UseVisualStyleBackColor = true;
			this->CtoF->Click += gcnew System::EventHandler(this, &Form1::CtoF_Click);
			// 
			// FtoC
			// 
			this->FtoC->Location = System::Drawing::Point(104, 55);
			this->FtoC->Name = L"FtoC";
			this->FtoC->Size = System::Drawing::Size(75, 23);
			this->FtoC->TabIndex = 5;
			this->FtoC->Text = L"F to C";
			this->FtoC->UseVisualStyleBackColor = true;
			this->FtoC->Click += gcnew System::EventHandler(this, &Form1::FtoC_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 93);
			this->Controls->Add(this->FtoC);
			this->Controls->Add(this->CtoF);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Zailyn Tamayo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Clear_Click(System::Object^  sender, System::EventArgs^  e) {
				  textBox1->Text = "";  
			 }

private: System::Void FtoC_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 valueF = Convert::ToDouble(textBox1->Text);
			 resultC = ((valueF - 32) * 5) / 9;
			 textBox1->Text = Convert::ToString(resultC);
		 }

private: System::Void CtoF_Click(System::Object^  sender, System::EventArgs^  e) {

			  valueC = Convert::ToDouble(textBox1->Text);
			  resultF = ((valueC * 9) / 5) + 32;
			  textBox1->Text = Convert::ToString(resultF);
			 
		 }
};
}