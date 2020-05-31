#pragma once
#include <iostream>

void menu();

class Employee{
	private:
	std::string name;
	int age;
	char gender;
	std::string dpt;
	
	public:
	void setName();
	void setAge();
	void setGender();
	void setDPT();
	
	std::string getName();
	int getAge();
	char getGender();
	std::string getDPT();
	
};