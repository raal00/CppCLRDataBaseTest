#pragma once
using namespace System;

ref class Student
{
public:
	int Id;

	String^ Bithday;
	int YearOfStart;
	int Course;
	String^ Group;

	String^ Name;
	String^ FName;

	String^ ToString() override {
		return  Id.ToString() + "\t" + 
				Name + "\t" + 
				FName + "\t" + 
				Bithday + "\t" + 
				YearOfStart.ToString() + "\t" + 
				Group + "\t" + 
				Course.ToString();
	}
};
