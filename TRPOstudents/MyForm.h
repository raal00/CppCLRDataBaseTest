#pragma once

namespace TRPOstudents {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ShowGroupListBtn;
	protected:
	private: System::Windows::Forms::Button^ EditStudentBtn;
	private: System::Windows::Forms::Button^ AddNewStudentBtn;
	private: System::Windows::Forms::Button^ RemoveStudentBtn;

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
			this->ShowGroupListBtn = (gcnew System::Windows::Forms::Button());
			this->EditStudentBtn = (gcnew System::Windows::Forms::Button());
			this->AddNewStudentBtn = (gcnew System::Windows::Forms::Button());
			this->RemoveStudentBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ShowGroupListBtn
			// 
			this->ShowGroupListBtn->Location = System::Drawing::Point(12, 416);
			this->ShowGroupListBtn->Name = L"ShowGroupListBtn";
			this->ShowGroupListBtn->Size = System::Drawing::Size(141, 49);
			this->ShowGroupListBtn->TabIndex = 0;
			this->ShowGroupListBtn->Text = L"Список группы";
			this->ShowGroupListBtn->UseVisualStyleBackColor = true;
			this->ShowGroupListBtn->Click += gcnew System::EventHandler(this, &MyForm::ShowGroupListBtn_Click);
			// 
			// EditStudentBtn
			// 
			this->EditStudentBtn->Location = System::Drawing::Point(159, 416);
			this->EditStudentBtn->Name = L"EditStudentBtn";
			this->EditStudentBtn->Size = System::Drawing::Size(141, 49);
			this->EditStudentBtn->TabIndex = 1;
			this->EditStudentBtn->Text = L"Редактировать";
			this->EditStudentBtn->UseVisualStyleBackColor = true;
			this->EditStudentBtn->Click += gcnew System::EventHandler(this, &MyForm::EditStudentBtn_Click);
			// 
			// AddNewStudentBtn
			// 
			this->AddNewStudentBtn->Location = System::Drawing::Point(306, 416);
			this->AddNewStudentBtn->Name = L"AddNewStudentBtn";
			this->AddNewStudentBtn->Size = System::Drawing::Size(141, 49);
			this->AddNewStudentBtn->TabIndex = 2;
			this->AddNewStudentBtn->Text = L"Добавить";
			this->AddNewStudentBtn->UseVisualStyleBackColor = true;
			this->AddNewStudentBtn->Click += gcnew System::EventHandler(this, &MyForm::AddNewStudentBtn_Click);
			// 
			// RemoveStudentBtn
			// 
			this->RemoveStudentBtn->Location = System::Drawing::Point(453, 416);
			this->RemoveStudentBtn->Name = L"RemoveStudentBtn";
			this->RemoveStudentBtn->Size = System::Drawing::Size(141, 49);
			this->RemoveStudentBtn->TabIndex = 3;
			this->RemoveStudentBtn->Text = L"Удалить";
			this->RemoveStudentBtn->UseVisualStyleBackColor = true;
			this->RemoveStudentBtn->Click += gcnew System::EventHandler(this, &MyForm::RemoveStudentBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(797, 477);
			this->Controls->Add(this->RemoveStudentBtn);
			this->Controls->Add(this->AddNewStudentBtn);
			this->Controls->Add(this->EditStudentBtn);
			this->Controls->Add(this->ShowGroupListBtn);
			this->Name = L"MyForm";
			this->Text = L"Students";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ShowGroupListBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void EditStudentBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void AddNewStudentBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void RemoveStudentBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
};
}
