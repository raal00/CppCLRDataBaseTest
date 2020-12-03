#pragma once
#include "Student.h"
using namespace System;
using namespace Data;
using namespace Data::SqlClient;

ref class SQLHandler
{
private:
	bool isConnected = false;
	SqlConnectionStringBuilder^ connectionString;
	SqlConnection^ connection;

	void connect() {
		connectionString = gcnew SqlConnectionStringBuilder();

		connectionString->DataSource = "PERSONAL-PC\\SQLEXPRESS";
		connectionString->InitialCatalog = "campDB";
		connectionString->IntegratedSecurity = true;


		connection = gcnew SqlConnection(Convert::ToString(connectionString));
		connection->Open();
		if (connection->State == ConnectionState::Open) {
			isConnected = true;
		}
		connection->StateChange += gcnew System::Data::StateChangeEventHandler(this, &SQLHandler::OnStateChange);
	}
	void SQLHandler::OnStateChange(System::Object^ sender, System::Data::StateChangeEventArgs^ e)
	{
		if (e->CurrentState == ConnectionState::Open) {
			isConnected = true;
		}
		else if (e->CurrentState == ConnectionState::Closed) {
			isConnected = false;
		}
	}
public:

	int GetTableLength(String^ tableName) {
		if (!isConnected) connect();

		SqlCommand^ command = gcnew SqlCommand();
		command->CommandText = "SELECT count(*) FROM " + tableName;
		command->Connection = connection;
		return Convert::ToInt32(command->ExecuteScalar()->ToString());
	}
	bool RemoveStudent(int id) {
		if (isConnected == false) connect();
		SqlCommand^ command = gcnew SqlCommand();
		command->CommandText = "DELETE FROM dbo.Student WHERE Id = " + id;

		command->Connection = connection;
		int compleate = command->ExecuteNonQuery();
		return compleate == 1;
	}
	bool EditStudent(Student^ student) {
		if (isConnected == false) connect();
		SqlCommand^ command = gcnew SqlCommand();
		command->CommandText = "UPDATE dbo.Student SET " 
			+ "[Bithday] =" + "'" +student->Bithday + "'"
			+ ",[YearOfStart] =" + student->YearOfStart
			+ ",[Course] =" + student->Course 
			+ ",[Group] =" + "'" + student->Group + "'"
			+ ",[Name] =" + "'"+ student->Name + "'"
			+ ",[FName] =" + "'" + student->FName + "'"
			+ " WHERE Id = " + student->Id;
		command->Connection = connection;
		int compleate = command->ExecuteNonQuery();
		return compleate == 1;
	}
	
	Student^ GetStudentById(int id) {
		if (isConnected == false) connect();
		SqlCommand^ command = gcnew SqlCommand();
		command->CommandText = "SELECT * FROM dbo.Student WHERE Id = " + id;
		command->Connection = connection;
		SqlDataReader^ reader = command->ExecuteReader();
		Student^ student = gcnew Student();
		
		if (reader->HasRows == false) return nullptr;
		while (reader->Read()) {
			student->Name = reader["Name"]->ToString();
			student->Course = Convert::ToInt32(reader["Course"]->ToString());
			student->Bithday = reader["Bithday"]->ToString();
			student->Group = reader["Group"]->ToString();
			student->FName = reader["FName"]->ToString();
			student->Id = Convert::ToInt32(reader["Id"]->ToString());
			student->YearOfStart = Convert::ToInt32(reader["YearOfStart"]->ToString());
		}
		return student;
	}

	bool AddNewStudent(Student^ student) {
		if (isConnected == false) connect();
		SqlCommand^ command = gcnew SqlCommand();
		command->CommandText = "INSERT INTO dbo.Student ([Bithday], [YearOfStart], [Course], [Group], [Name], [FName])"
			+ " VALUES ('" + student->Bithday + "'," + student->YearOfStart
			+ "," + student->Course + ",'" + student->Group + "','" + student->Name + "','" + student->FName + "');";

		command->Connection = connection;
		int compleate = command->ExecuteNonQuery();
		return compleate == 1;
	}

	array<Student^>^ GetStudentList() {
		
		int studentsCount = GetTableLength("dbo.Student");
		if (studentsCount <= 0) return nullptr;

		array<Student^>^ students = gcnew array<Student^>(studentsCount);
		int index = 0;

		SqlCommand^ command = gcnew SqlCommand();
		command->CommandText = "SELECT * FROM dbo.Student";
		command->Connection = connection;
		
		SqlDataReader^ reader = command->ExecuteReader();
		while (reader->Read()) {
			students[index] = gcnew Student();
			students[index]->Name = reader["Name"]->ToString();
			students[index]->Course = Convert::ToInt32(reader["Course"]->ToString());
			students[index]->Bithday = reader["Bithday"]->ToString();
			students[index]->Group = reader["Group"]->ToString();
			students[index]->FName = reader["FName"]->ToString();
			students[index]->Id = Convert::ToInt32(reader["Id"]->ToString());
			students[index]->YearOfStart = Convert::ToInt32(reader["YearOfStart"]->ToString());
			index++;
		}
		return students;
	}
	array<Student^>^ GetTask14() {
		int studentsCount = GetTableLength("dbo.Student");
		if (studentsCount <= 0) return nullptr;

		array<Student^>^ students = gcnew array<Student^>(studentsCount);
		int index = 0;
		SqlCommand^ command = gcnew SqlCommand();
		command->CommandText = "SELECT * FROM dbo.[Student] WHERE[Student].Id NOT IN(SELECT DISTINCT[Student].Id FROM dbo.[Student]"+
							   "JOIN dbo.[Rating] ON[Student].Id = [Rating].StudentId WHERE[Rating].[Value] < > 5)";
		command->Connection = connection;

		SqlDataReader^ reader = command->ExecuteReader();
		while (reader->Read()) {
			students[index] = gcnew Student();
			students[index]->Name = reader["Name"]->ToString();
			students[index]->Course = Convert::ToInt32(reader["Course"]->ToString());
			students[index]->Bithday = reader["Bithday"]->ToString();
			students[index]->Group = reader["Group"]->ToString();
			students[index]->FName = reader["FName"]->ToString();
			students[index]->Id = Convert::ToInt32(reader["Id"]->ToString());
			students[index]->YearOfStart = Convert::ToInt32(reader["YearOfStart"]->ToString());
			index++;
		}
		Array::Resize(students, index);
		return students;
	}
	array<Student^>^ GetTask9() {
		int studentsCount = GetTableLength("dbo.Student");
		if (studentsCount <= 0) return nullptr;

		array<Student^>^ students = gcnew array<Student^>(studentsCount);
		int index = 0;
		SqlCommand^ command = gcnew SqlCommand();
		command->CommandText = "SELECT * FROM dbo.[Student] WHERE [Student].Id NOT IN ( "+
								"SELECT DISTINCT[Student].Id FROM dbo.[Student] " +
								"JOIN dbo.[Rating] ON[Student].Id = [Rating].StudentId " +				
								"WHERE[Rating].[Value] = 4)";
		command->Connection = connection;

		SqlDataReader^ reader = command->ExecuteReader();
		while (reader->Read()) {
			students[index] = gcnew Student();
			students[index]->Name = reader["Name"]->ToString();
			students[index]->Course = Convert::ToInt32(reader["Course"]->ToString());
			students[index]->Bithday = reader["Bithday"]->ToString();
			students[index]->Group = reader["Group"]->ToString();
			students[index]->FName = reader["FName"]->ToString();
			students[index]->Id = Convert::ToInt32(reader["Id"]->ToString());
			students[index]->YearOfStart = Convert::ToInt32(reader["YearOfStart"]->ToString());
			index++;
		}
		Array::Resize(students, index);
		return students;
	}
	array<Student^>^ GetTask13() {
		int studentsCount = GetTableLength("dbo.Student");
		if (studentsCount <= 0) return nullptr;

		array<Student^>^ students = gcnew array<Student^>(studentsCount);
		int index = 0;
		SqlCommand^ command = gcnew SqlCommand();
		command->CommandText = "SELECT DISTINCT [Student].[Id], [Student].[Name], [Student].[Course], " +
							   " [Student].[Bithday], [Student].[Group], [Student].[Fname], [Student].[YearOfStart] " + 
							   " FROM dbo.[Student] JOIN dbo.[Rating] ON[Student].[Id] = [Rating].[StudentId] " +
							   "WHERE[Rating].[SubjectId] IN " +
							   "( SELECT DISTINCT[Subject].[Id] FROM dbo.[Subject] " +
							   "JOIN dbo.[SESSIA_SUBJECT] ON[Subject].Id = dbo.[SESSIA_SUBJECT].SubjectId " +
							   "JOIN dbo.[Sessia] ON[SESSIA_SUBJECT].[SessiaId] = " + 
							   "( SELECT DISTINCT [Sessia].[Id] FROM dbo.[Sessia] "
							   "JOIN dbo.[Student] ON ([Student].YearOfStart + [Student].Course) = [Sessia].[Year] " +
							   "WHERE[Sessia].Half = 0 AND[Student].Course = 4 ) ) AND[Rating].[SessionId] = ( " +
							   "SELECT DISTINCT [Sessia].[Id] FROM dbo.[Sessia] JOIN dbo.[Student] ON([Student].YearOfStart + [Student].Course) = [Sessia].[Year] " +
							   "WHERE[Sessia].Half = 0 AND[Student].Course = 4) AND [Rating].[Value] = 2";
		command->Connection = connection;

		SqlDataReader^ reader = command->ExecuteReader();
		while (reader->Read()) {
			students[index] = gcnew Student();
			students[index]->Name = reader["Name"]->ToString();
			students[index]->Course = Convert::ToInt32(reader["Course"]->ToString());
			students[index]->Bithday = reader["Bithday"]->ToString();
			students[index]->Group = reader["Group"]->ToString();
			students[index]->FName = reader["FName"]->ToString();
			students[index]->Id = Convert::ToInt32(reader["Id"]->ToString());
			students[index]->YearOfStart = Convert::ToInt32(reader["YearOfStart"]->ToString());
			index++;
		}
		Array::Resize(students, index);
		return students;
	}
};




