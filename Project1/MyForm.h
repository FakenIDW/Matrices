#pragma once
#include <msclr/marshal_cppstd.h>
#include "Matrix.h"

namespace Project1 {

	int sizeMatrix = 3;
	matrix<int> A;
	matrix<int> B;
	matrix<int> Result;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::AntiqueWhite;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView2->Location = System::Drawing::Point(397, 96);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 4;
			this->dataGridView2->Size = System::Drawing::Size(381, 377);
			this->dataGridView2->TabIndex = 1;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			this->dataGridView2->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellValueChanged);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::Color::AntiqueWhite;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView3->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView3->Location = System::Drawing::Point(809, 96);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 4;
			this->dataGridView3->Size = System::Drawing::Size(382, 377);
			this->dataGridView3->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::AntiqueWhite;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(12, 96);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 4;
			this->dataGridView1->Size = System::Drawing::Size(374, 377);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellValueChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox1->Location = System::Drawing::Point(276, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 30);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(118, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"������� �1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(537, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"������� �2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(958, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"���������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label4->Location = System::Drawing::Point(12, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(259, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"������� ������ �������";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(218, 489);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(29, 37);
			this->button1->TabIndex = 9;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(253, 489);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(29, 37);
			this->button2->TabIndex = 10;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(288, 489);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(29, 37);
			this->button3->TabIndex = 11;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(323, 489);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(53, 37);
			this->button4->TabIndex = 12;
			this->button4->Text = L"*k";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox2->Location = System::Drawing::Point(733, 496);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(89, 30);
			this->textBox2->TabIndex = 13;
			this->textBox2->Visible = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label5->Location = System::Drawing::Point(394, 496);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(337, 25);
			this->label5->TabIndex = 14;
			this->label5->Text = L"��������� �� ����� ������� �1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label6->Location = System::Drawing::Point(14, 495);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(198, 25);
			this->label6->TabIndex = 15;
			this->label6->Text = L"�������� ��������";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FloralWhite;
			this->ClientSize = System::Drawing::Size(1220, 555);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int IsInt(System::String^ inputString)
		{
			int result = INT_MAX;
			Int32::TryParse(inputString, result);
			return result;
		}
		const int sizeData = 350;
	private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Rows->Clear();
		dataGridView2->Rows->Clear();
		dataGridView3->Rows->Clear();


		String^ str1 = textBox1->Text;
		int size = IsInt(str1);
		if (size != INT_MAX)
		{
			sizeMatrix = size;
			A = matrix<int>(size, size);
			B = matrix<int>(size, size);
			Result = matrix<int>(size, size);
		}

		dataGridView1->ColumnCount = sizeMatrix;
		dataGridView2->ColumnCount = sizeMatrix;
		dataGridView3->ColumnCount = sizeMatrix;
		dataGridView1->RowCount = sizeMatrix;
		dataGridView2->RowCount = sizeMatrix;
		dataGridView3->RowCount = sizeMatrix;

		int sizeOP = sizeData / sizeMatrix - 5;

		for (int i = 0; i < sizeMatrix; i++)
		{
			dataGridView1->Columns[i]->Width = sizeOP;
			dataGridView1->Rows[i]->Height = sizeOP;

			dataGridView2->Columns[i]->Width = sizeOP;
			dataGridView2->Rows[i]->Height = sizeOP;

			dataGridView3->Columns[i]->Width = sizeOP;
			dataGridView3->Rows[i]->Height = sizeOP;
		}

		for (int i = 1; i < sizeMatrix; i++)
		{
			for (int j = 0; j < i; j++)
			{
				dataGridView1[j, i]->Value = 0;
				dataGridView2[j, i]->Value = 0;
				dataGridView3[j, i]->Value = 0;
			}
		}
	}
	private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		int rowIndex = e->RowIndex;
		int columnIndex = e->ColumnIndex;
		int result = 0;
		Int32::TryParse(dataGridView1[columnIndex, rowIndex]->Value->ToString(), result);
		A[rowIndex][columnIndex] = result;

		dataGridView1[columnIndex, rowIndex]->Value = A[rowIndex][columnIndex];
	}
	private: System::Void dataGridView2_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		int rowIndex = e->RowIndex;
		int columnIndex = e->ColumnIndex;
		int result = 0;
		Int32::TryParse(dataGridView2[columnIndex, rowIndex]->Value->ToString(), result);
		B[rowIndex][columnIndex] = result;

		dataGridView2[columnIndex, rowIndex]->Value = B[rowIndex][columnIndex];
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Result = A + B;
		for (int i = 0; i < sizeMatrix; i++)
		{
			for (int j = 0; j < sizeMatrix; j++)
			{
				dataGridView3[j, i]->Value = Result[i][j];
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Result = A - B;
		for (int i = 0; i < sizeMatrix; i++)
		{
			for (int j = 0; j < sizeMatrix; j++)
			{
				dataGridView3[j, i]->Value = Result[i][j];
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Result = A * B;
		for (int i = 0; i < sizeMatrix; i++)
		{
			for (int j = 0; j < sizeMatrix; j++)
			{
				dataGridView3[j, i]->Value = Result[i][j];
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!textBox2->Visible)
		{
			textBox2->Visible = true;
			return;
		}

		int k = 0;
		Int32::TryParse(textBox2->Text, k);

		if (k != 0)
		{
			Result = A * k;
			for (int i = 0; i < sizeMatrix; i++)
			{
				for (int j = 0; j < sizeMatrix; j++)
				{
					dataGridView3[j, i]->Value = Result[i][j];
				}
			}
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Rows->Clear();
		dataGridView2->Rows->Clear();
		dataGridView3->Rows->Clear();


		String^ str1 = textBox1->Text;
		int size = IsInt(str1);
		if (size == INT_MAX || size == 0) return;
		sizeMatrix = size;
		A = matrix<int>(size, size);
		B = matrix<int>(size, size);
		Result = matrix<int>(size, size);

		dataGridView1->ColumnCount = sizeMatrix;
		dataGridView2->ColumnCount = sizeMatrix;
		dataGridView3->ColumnCount = sizeMatrix;
		dataGridView1->RowCount = sizeMatrix;
		dataGridView2->RowCount = sizeMatrix;
		dataGridView3->RowCount = sizeMatrix;

		int sizeOP = sizeData / sizeMatrix - 5;

		for (int i = 0; i < sizeMatrix; i++)
		{
			dataGridView1->Columns[i]->Width = sizeOP;
			dataGridView1->Rows[i]->Height = sizeOP;

			dataGridView2->Columns[i]->Width = sizeOP;
			dataGridView2->Rows[i]->Height = sizeOP;

			dataGridView3->Columns[i]->Width = sizeOP;
			dataGridView3->Rows[i]->Height = sizeOP;
		}

		for (int i = 1; i < sizeMatrix; i++)
		{
			for (int j = 0; j < i; j++)
			{
				dataGridView1[j, i]->Value = 0;
				dataGridView2[j, i]->Value = 0;
				dataGridView3[j, i]->Value = 0;
			}
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		/*dataGridView1->ColumnCount = sizeMatrix;
		dataGridView2->ColumnCount = sizeMatrix;
		dataGridView3->ColumnCount = sizeMatrix;
		dataGridView1->RowCount = sizeMatrix;
		dataGridView2->RowCount = sizeMatrix;
		dataGridView3->RowCount = sizeMatrix;

		int sizeOP = sizeData / sizeMatrix - 5;

		for (int i = 0; i < sizeMatrix; i++)
		{
			dataGridView1->Columns[i]->Width = sizeOP;
			dataGridView1->Rows[i]->Height = sizeOP;

			dataGridView2->Columns[i]->Width = sizeOP;
			dataGridView2->Rows[i]->Height = sizeOP;

			dataGridView3->Columns[i]->Width = sizeOP;
			dataGridView3->Rows[i]->Height = sizeOP;
		}

		for (int i = 1; i < sizeMatrix; i++)
		{
			for (int j = 0; j < i; j++)
			{
				dataGridView1[j, i]->Value = 0;
				dataGridView2[j, i]->Value = 0;
				dataGridView3[j, i]->Value = 0;
			}
		}*/
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}