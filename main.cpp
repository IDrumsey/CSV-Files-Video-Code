
#include <fstream>
#include "Functions.h"

using namespace std;


int main(){
	int choice;
	
	//Create Employee Object to use
	Employee E;
	
	//Open database file
	ofstream db("Database.csv");
	
	//Write Header 
	db << "Name , Age , Gender , Department\n";
	
	if(!db.fail()){
		
		do {
			menu();
			cin >> choice;
			
			if(choice == 1){
				E.setName();
				E.setAge();
				E.setGender();
				E.setDPT();
				
				db << E.getName() << " , ";
				db << E.getAge() << " , ";
				db << E.getGender() << " , ";
				db << E.getDPT() << endl;
				
				cout << "Done\n";
				system("pause");
			}
			system("cls");
		}while(choice != 0);
	}
	db.close();
}
