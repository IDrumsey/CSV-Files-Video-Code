#include "Functions.h"

using namespace std;

void menu(){
	cout << "0. Quit\n";
	cout << "1. Enter new employee\n";
	cout << "Choice : ";
}

//Setters
	void Employee::setName(){
		cout << "Employee Name : ";
		cin.ignore();
		getline(cin, name);
	}
	
	void Employee::setAge(){
		cout << "Employee Age : ";
		cin >> age;
	}
	
	void Employee::setGender(){
		cout << "Employee Gender : ";
		cin >> gender;
	}
	
	void Employee::setDPT(){
		cout << "Employee Department : ";
		cin.ignore();
		getline(cin, dpt);
	}
	
//Getters
	std::string Employee::getName(){
		return name;
	}
	
	int Employee::getAge(){
		return age;
	}
	
	char Employee::getGender(){
		return gender;
	}
	
	std::string Employee::getDPT(){
		return dpt;
		}