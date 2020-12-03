#pragma once
#include "SQLHandler.h"
#include "Student.h"


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
	private: System::Windows::Forms::ListBox^ StudentList;
	private: System::Windows::Forms::TextBox^ studId;
	private: System::Windows::Forms::TextBox^ studName;
	private: System::Windows::Forms::TextBox^ studFname;
	private: System::Windows::Forms::TextBox^ studBirth;
	private: System::Windows::Forms::TextBox^ studYearOfStart;
	private: System::Windows::Forms::TextBox^ studGroup;
	private: System::Windows::Forms::TextBox^ stufCourse;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ findStudentId;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ searcjStudentBtn;
	private: System::Windows::Forms::Button^ Task9;
	private: System::Windows::Forms::Button^ Task13;
	private: System::Windows::Forms::Button^ Task14;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->ShowGroupListBtn = (gcnew System::Windows::Forms::Button());
			this->EditStudentBtn = (gcnew System::Windows::Forms::Button());
			this->AddNewStudentBtn = (gcnew System::Windows::Forms::Button());
			this->RemoveStudentBtn = (gcnew System::Windows::Forms::Button());
			this->StudentList = (gcnew System::Windows::Forms::ListBox());
			this->studId = (gcnew System::Windows::Forms::TextBox());
			this->studName = (gcnew System::Windows::Forms::TextBox());
			this->studFname = (gcnew System::Windows::Forms::TextBox());
			this->studBirth = (gcnew System::Windows::Forms::TextBox());
			this->studYearOfStart = (gcnew System::Windows::Forms::TextBox());
			this->studGroup = (gcnew System::Windows::Forms::TextBox());
			this->stufCourse = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->findStudentId = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->searcjStudentBtn = (gcnew System::Windows::Forms::Button());
			this->Task9 = (gcnew System::Windows::Forms::Button());
			this->Task13 = (gcnew System::Windows::Forms::Button());
			this->Task14 = (gcnew System::Windows::Forms::Button());
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
			this->EditStudentBtn->Location = System::Drawing::Point(306, 361);
			this->EditStudentBtn->Name = L"EditStudentBtn";
			this->EditStudentBtn->Size = System::Drawing::Size(141, 46);
			this->EditStudentBtn->TabIndex = 1;
			this->EditStudentBtn->Text = L"Редактировать";
			this->EditStudentBtn->UseVisualStyleBackColor = true;
			this->EditStudentBtn->Click += gcnew System::EventHandler(this, &MyForm::EditStudentBtn_Click);
			// 
			// AddNewStudentBtn
			// 
			this->AddNewStudentBtn->Location = System::Drawing::Point(159, 416);
			this->AddNewStudentBtn->Name = L"AddNewStudentBtn";
			this->AddNewStudentBtn->Size = System::Drawing::Size(141, 49);
			this->AddNewStudentBtn->TabIndex = 2;
			this->AddNewStudentBtn->Text = L"Добавить";
			this->AddNewStudentBtn->UseVisualStyleBackColor = true;
			this->AddNewStudentBtn->Click += gcnew System::EventHandler(this, &MyForm::AddNewStudentBtn_Click);
			// 
			// RemoveStudentBtn
			// 
			this->RemoveStudentBtn->Location = System::Drawing::Point(306, 309);
			this->RemoveStudentBtn->Name = L"RemoveStudentBtn";
			this->RemoveStudentBtn->Size = System::Drawing::Size(141, 46);
			this->RemoveStudentBtn->TabIndex = 3;
			this->RemoveStudentBtn->Text = L"Удалить";
			this->RemoveStudentBtn->UseVisualStyleBackColor = true;
			this->RemoveStudentBtn->Click += gcnew System::EventHandler(this, &MyForm::RemoveStudentBtn_Click);
			// 
			// StudentList
			// 
			this->StudentList->Dock = System::Windows::Forms::DockStyle::Top;
			this->StudentList->FormattingEnabled = true;
			this->StudentList->Location = System::Drawing::Point(0, 0);
			this->StudentList->Name = L"StudentList";
			this->StudentList->Size = System::Drawing::Size(1020, 225);
			this->StudentList->TabIndex = 4;
			// 
			// studId
			// 
			this->studId->Location = System::Drawing::Point(159, 231);
			this->studId->Name = L"studId";
			this->studId->ReadOnly = true;
			this->studId->Size = System::Drawing::Size(141, 20);
			this->studId->TabIndex = 5;
			// 
			// studName
			// 
			this->studName->Location = System::Drawing::Point(159, 257);
			this->studName->Name = L"studName";
			this->studName->Size = System::Drawing::Size(141, 20);
			this->studName->TabIndex = 6;
			// 
			// studFname
			// 
			this->studFname->Location = System::Drawing::Point(159, 283);
			this->studFname->Name = L"studFname";
			this->studFname->Size = System::Drawing::Size(141, 20);
			this->studFname->TabIndex = 7;
			// 
			// studBirth
			// 
			this->studBirth->Location = System::Drawing::Point(159, 309);
			this->studBirth->Name = L"studBirth";
			this->studBirth->Size = System::Drawing::Size(141, 20);
			this->studBirth->TabIndex = 8;
			// 
			// studYearOfStart
			// 
			this->studYearOfStart->Location = System::Drawing::Point(159, 335);
			this->studYearOfStart->Name = L"studYearOfStart";
			this->studYearOfStart->Size = System::Drawing::Size(141, 20);
			this->studYearOfStart->TabIndex = 9;
			// 
			// studGroup
			// 
			this->studGroup->Location = System::Drawing::Point(159, 361);
			this->studGroup->Name = L"studGroup";
			this->studGroup->Size = System::Drawing::Size(141, 20);
			this->studGroup->TabIndex = 10;
			// 
			// stufCourse
			// 
			this->stufCourse->Location = System::Drawing::Point(159, 387);
			this->stufCourse->Name = L"stufCourse";
			this->stufCourse->Size = System::Drawing::Size(141, 20);
			this->stufCourse->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(135, 238);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(124, 264);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Имя";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(97, 290);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Фамилия";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(67, 316);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Дата рождения";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(41, 342);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Год начала обучения";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(111, 368);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Группа";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(122, 394);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Курс";
			// 
			// findStudentId
			// 
			this->findStudentId->Location = System::Drawing::Point(306, 257);
			this->findStudentId->Name = L"findStudentId";
			this->findStudentId->Size = System::Drawing::Size(141, 20);
			this->findStudentId->TabIndex = 19;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(306, 234);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Номер студента";
			// 
			// searcjStudentBtn
			// 
			this->searcjStudentBtn->Location = System::Drawing::Point(453, 257);
			this->searcjStudentBtn->Name = L"searcjStudentBtn";
			this->searcjStudentBtn->Size = System::Drawing::Size(75, 20);
			this->searcjStudentBtn->TabIndex = 21;
			this->searcjStudentBtn->Text = L"найти";
			this->searcjStudentBtn->UseVisualStyleBackColor = true;
			this->searcjStudentBtn->Click += gcnew System::EventHandler(this, &MyForm::searcjStudentBtn_Click);
			// 
			// Task9
			// 
			this->Task9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Task9.BackgroundImage")));
			this->Task9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Task9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Task9->Location = System::Drawing::Point(879, 234);
			this->Task9->Name = L"Task9";
			this->Task9->Size = System::Drawing::Size(129, 90);
			this->Task9->TabIndex = 22;
			this->Task9->Text = L"Списко студентов, не получивших 4";
			this->Task9->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Task9->UseVisualStyleBackColor = true;
			this->Task9->Click += gcnew System::EventHandler(this, &MyForm::Task9_Click);
			// 
			// Task13
			// 
			this->Task13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Task13.BackgroundImage")));
			this->Task13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Task13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Task13->Location = System::Drawing::Point(744, 234);
			this->Task13->Name = L"Task13";
			this->Task13->Size = System::Drawing::Size(129, 90);
			this->Task13->TabIndex = 23;
			this->Task13->Text = L"Список неуспевающих за последний семестр (4 курс)";
			this->Task13->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Task13->UseVisualStyleBackColor = true;
			this->Task13->Click += gcnew System::EventHandler(this, &MyForm::Task13_Click);
			// 
			// Task14
			// 
			this->Task14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Task14.BackgroundImage")));
			this->Task14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Task14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Task14->Location = System::Drawing::Point(609, 234);
			this->Task14->Name = L"Task14";
			this->Task14->Size = System::Drawing::Size(129, 90);
			this->Task14->TabIndex = 24;
			this->Task14->Text = L"Список отличников";
			this->Task14->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Task14->UseVisualStyleBackColor = true;
			this->Task14->Click += gcnew System::EventHandler(this, &MyForm::Task14_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1020, 469);
			this->Controls->Add(this->Task14);
			this->Controls->Add(this->Task13);
			this->Controls->Add(this->Task9);
			this->Controls->Add(this->searcjStudentBtn);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->findStudentId);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->stufCourse);
			this->Controls->Add(this->studGroup);
			this->Controls->Add(this->studYearOfStart);
			this->Controls->Add(this->studBirth);
			this->Controls->Add(this->studFname);
			this->Controls->Add(this->studName);
			this->Controls->Add(this->studId);
			this->Controls->Add(this->StudentList);
			this->Controls->Add(this->RemoveStudentBtn);
			this->Controls->Add(this->AddNewStudentBtn);
			this->Controls->Add(this->EditStudentBtn);
			this->Controls->Add(this->ShowGroupListBtn);
			this->Name = L"MyForm";
			this->Text = L"Students";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ShowGroupListBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		StudentList->Items->Clear();
		SQLHandler^ handler = gcnew SQLHandler();
		array<Student ^>^ students = handler->GetStudentList();
		if (students == nullptr) {
			MessageBox::Show("Студентов не найдено", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			for (int i = 0; i < students->Length; i++) {
				
				StudentList->Items->Add(students[i]->ToString());
			}
		}

	}
	private: System::Void EditStudentBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (studId->Text != nullptr) {
			Student^ student = gcnew Student();
			student->Id = Convert::ToInt32(studId->Text);
			student->YearOfStart = Convert::ToInt32(studYearOfStart->Text);
			student->Bithday = studBirth->Text;
			student->Course = Convert::ToInt32(stufCourse->Text);
			student->FName = studFname->Text;
			student->Name = studName->Text;
			student->Group = studGroup->Text;

			SQLHandler^ handler = gcnew SQLHandler();
			if (handler->EditStudent(student)) {
				
				MessageBox::Show("Студент редактирован", "-", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else {
				MessageBox::Show("Произошла ошибка", "-", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
	}
	private: System::Void AddNewStudentBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		
		SQLHandler^ handler = gcnew SQLHandler();
		Student^ student = gcnew Student();
		student->Bithday = studBirth->Text;
		student->Course = Convert::ToInt32(stufCourse->Text);
		student->FName = studFname->Text;
		student->Name = studName->Text;
		student->Group = studGroup->Text;
		student->YearOfStart = Convert::ToInt32(studYearOfStart->Text);
		if (!handler->AddNewStudent(student)) { 
			MessageBox::Show("Не удалось добавить нового студента", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			MessageBox::Show("Новый студент добавлен", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	private: System::Void RemoveStudentBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (studId->Text != nullptr) {
			int id = Convert::ToInt32(studId->Text);
			SQLHandler^ handler = gcnew SQLHandler();
			if (handler->RemoveStudent(id)) {
				MessageBox::Show("Студент удален", "-", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else {
				MessageBox::Show("Произошла ошибка", "-", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
	}
	private: System::Void searcjStudentBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (studId->Text != nullptr) {
			int id = Convert::ToInt32(findStudentId->Text);
			SQLHandler^ handler = gcnew SQLHandler();
			Student^ student = handler->GetStudentById(id);

			if (student != nullptr) {
				studId->Text = student->Id.ToString();
				studBirth->Text = student->Bithday;
				stufCourse->Text = student->Course.ToString();
				studFname->Text = student->FName;
				studName->Text = student->Name;
				studGroup->Text = student->Group;
				studYearOfStart->Text = student->YearOfStart.ToString();
			}
			else {
				MessageBox::Show("Студент не найден", "-", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
	}
private: System::Void Task14_Click(System::Object^ sender, System::EventArgs^ e) {
	StudentList->Items->Clear();
	SQLHandler^ handler = gcnew SQLHandler();
	array<Student^>^ students = handler->GetTask14();
	if (students == nullptr) {
		MessageBox::Show("Студентов не найдено", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		for (int i = 0; i < students->Length; i++) {

			StudentList->Items->Add(students[i]->GetFNameAndBithday());
		}
	}
}
private: System::Void Task13_Click(System::Object^ sender, System::EventArgs^ e) {
	StudentList->Items->Clear();
	SQLHandler^ handler = gcnew SQLHandler();
	array<Student^>^ students = handler->GetTask13();
	if (students == nullptr) {
		MessageBox::Show("Студентов не найдено", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		for (int i = 0; i < students->Length; i++) {

			StudentList->Items->Add(students[i]->GetFNameAndCourse());
		}
	}
}
private: System::Void Task9_Click(System::Object^ sender, System::EventArgs^ e) {
	StudentList->Items->Clear();
	SQLHandler^ handler = gcnew SQLHandler();
	array<Student^>^ students = handler->GetTask9();
	if (students == nullptr) {
		MessageBox::Show("Студентов не найдено", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		for (int i = 0; i < students->Length; i++) {

			StudentList->Items->Add(students[i]->GetFNameAndBithday());
		}
	}
}
};
}
