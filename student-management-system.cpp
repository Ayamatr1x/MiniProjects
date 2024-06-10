

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class temp {
	string rollNum, fname, lname, Address , search;
	fstream file;
public :
	void addStudent();
	void showrecord();
	void checkrecord();


}obj;



int main()
{
  
   char choice;
   cout << "----------------" << endl;
   cout << "1-Add Student Record :   " << endl;
   cout << "2-View all Student Record :   " << endl;
   cout << "3-Search a Particular Student Record :   " << endl;
   cout << "4-Exit" << endl;
   cout << "----------------" << endl;
   cin >> choice;

   switch (choice) {
   case '1':
	   cin.ignore();
	   obj.addStudent();
	   break;
   case '2':
	   cin.ignore();
	   obj.showrecord();
	   break;
   case '3':
	   cin.ignore();
	   obj.checkrecord();
	   break;
   case '4':
	   cin.ignore();
	   break;
   default:
	   cout << "Invalid choice";
   }

	
}



void temp::addStudent() {
	cout << "Enter student Roll number ::  " << endl;
	getline(cin, rollNum);
	cout << "Enter First name " << endl;
	getline(cin, fname);
	cout << "Enter last name" << endl;
	getline(cin, lname);
	cout << "Enter Address" << endl;
	getline(cin, Address);

	file.open("studentdata.txt", ios::out | ios::app);
	file << rollNum << "*";
	file<< fname << "*";
	file<< lname << "*";
	file<< Address << endl;

	file.close();

}

void temp::showrecord() {
	file.open("studentdata.txt", ios::in);
	
	cout << "\n\n";
	cout << "\t\t rollNum \t\t\t fname \t\t\t lname \t\t\t Address" << endl;
	while (!file.eof()) {
		cout << "\t\t" << rollNum <<"\t\t\t" <<fname <<"\t\t\t" << lname << "\t\t\t" << Address << endl;

		getline(file, rollNum, '*');
		getline(file, fname, '*');
		getline(file, lname, '*');
		getline(file, Address, '\n');
	}
	file.close();
}

void temp::checkrecord() {
	//showrecord();
	cout << "Enter Student rollNum";
	getline(cin, search);
	file.open("studentdata.txt", ios::in);

	while (!file.eof()) {
		if (search == rollNum) {
			cout << "\t\t rollNum \t\t\t fname \t\t\t lname \t\t\t Address" << endl;
			cout << "\t\t" << rollNum << "\t\t" << fname << "\t\t\t" << lname << "\t\t\t" << Address << endl;
			cout << "Student found Sucecssfully ....";
		}
		getline(file, rollNum, '*');
		getline(file, fname, '*');
		getline(file, lname, '*');
		getline(file, Address, '\n');
	}
	
file.close(); 
}