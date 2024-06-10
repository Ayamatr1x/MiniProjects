#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class temp {
    string Username, Email, Password;
    fstream file;
    string searchname, searchpass , searchemail;
public:
    void login();
    void signUp();
    void forgot();
}obj;

//void temp::login() {
//    // Add login implementation
//    string searchname , searchpass ;
//    cout << "-----LOGIN------"<< endl;
//    cout << "Enter your UserName :: " << endl;
//    getline(cin, searchname);
//    cout << "Enter your Password :: " << endl;
//    getline(cin, searchpass);
//
//    file.open("logindata.txt", ios::in);
//    getline(file, Username,'*');
//    getline(file, Email, '*');
//    getline(file, Password, '\n');
//    while (!file.eof()) {         // running the code until end of file 
//        if (Username == searchname) {
//            if (Password == searchpass) {
//                cout << "Account Login Successful...." << endl;
//                cout << "\n Username :: " << Username << endl;
//                cout << "\n Email :: " << Email << endl;
//            }
//            else {
//                cout << "Password is incorrect......";
//            }
//        }
//        getline(file, Username, '*');
//        getline(file, Email, '*');
//        getline(file, Password, '\n');
//    }
//    file.close();
//}
//
//void temp::signUp() {
//    cout << "\n Enter Your username ::  ";
//    getline(cin, Username);
//    cout << "Enter your email address :: ";
//    getline(cin, Email);
//    cout << "enter your password ::  " << endl;
//    getline(cin, Password);
//
//    file.open("logindata.txt", ios::out | ios::app);
//    file << Username << "*" << Email << "*" << Password << endl;
//    file.close();
//    // Add sign-up implementation
//}
//
//void temp::forgot() {
//    // Add forgot password implementation
//    cout << "enter your username :: ";
//    getline(cin,searchname);
//    cout << "enter you email address :: ";
//    getline(cin, searchemail);
//
//    file.open("logindata.txt", ios::in);
//    getline(file, Username, '*');
//    getline(file, Email, '*');
//    getline(file, Password, '\n');
//    while (!file.eof()) {
//        if (Username == searchname) {
//            if (Email == searchemail) {
//                cout << "Account found ........."<<endl;
//                cout << "Your password :: " << Password << endl;
//            }
//            else {
//                cout << "Account not found............ ";
//            }
//        }
//        else {
//            cout << "not found..........";
//        }
//    }
//}

int main() {
    char choice;
    temp obj;  // Create an instance of the temp class

    cout << "\n 1- Login";
    cout << "\n 2- Sign-up";
    cout << "\n 3- Forgot password";
    cout << "\n 4- Exit";
    cout << "\n Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case '1':
        obj.login();
        break;
    case '2':
        obj.signUp();
        break;
    case '3':
        obj.forgot();
        break;
    case '4':
        cout << "Exiting...";
        break;
    default:
        cout << "Invalid Input...!";
    }

    return 0;
}

void temp::login() {
    cin.ignore();
    // Add login implementation
    string searchname, searchpass;
    cout << "-----LOGIN------" << endl;
    cout << "Enter your UserName :: " << endl;
    getline(cin, searchname);
    cout << "Enter your Password :: " << endl;
    getline(cin, searchpass);

    file.open("logindata.txt", ios::in);
    getline(file, Username, '*');
    getline(file, Email, '*');
    getline(file, Password, '\n');
    while (!file.eof()) {         // running the code until end of file 
        if (Username == searchname) {
            if (Password == searchpass) {
                cout << "Account Login Successful...." << endl;
                cout << "\n Username :: " << Username << endl;
                cout << "\n Email :: " << Email << endl;
            }
            else {
                cout << "Password is incorrect......";
            }
        }
        getline(file, Username, '*');
        getline(file, Email, '*');
        getline(file, Password, '\n');
    }
    file.close();
}

void temp::signUp() {
    cin.ignore(); // Clear the buffer before using getline

    cout << "\\nEnter Your User Name :: ";
    getline(cin, Username);

    cout << "Enter Your Email Address :: ";
    getline(cin, Email);

    cout << "Enter Your Password :: ";
    getline(cin, Password);

    file.open("loginData.txt", ios::out | ios::app);
    file << Username << "*" << Email << "*" << Password << endl;
    file.close();
}

void temp::forgot() {
    cin.ignore();
    // Add forgot password implementation
    cout << "enter your username :: ";
    getline(cin, searchname);
    cout << "enter you email address :: ";
    getline(cin, searchemail);

    file.open("logindata.txt", ios::in);
    getline(file, Username, '*');
    getline(file, Email, '*');
    getline(file, Password, '\n');
    while (!file.eof()) {
        if (Username == searchname) {
            if (Email == searchemail) {
                cout << "Account found ........." << endl;
                cout << "Your password :: " << Password << endl;
            }
            else {
                cout << "Account not found............ ";
            }
        }
        else {
            cout << "not found..........";
        }
    }
}