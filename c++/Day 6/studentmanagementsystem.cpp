#include<iostream>
using namespace std;

class Student {
private:
    string name, regNo, email;
    int rollNo;
    long long phone;
    float marks;

public:
    // Constructor taking only name
    Student(string n) {
        name = n;

        if (name == "Lagan") {
            rollNo = 101;
            regNo = "REG001";
            email = "lagan@gmail.com";
            phone = 9876543210;
            marks = 90.5;
        }
        else if (name == "Chirag") {
            rollNo = 102;
            regNo = "REG002";
            email = "chirag@gmail.com";
            phone = 9123456780;
            marks = 85.0;
        }
        else if (name == "Aman") {
            rollNo = 103;
            regNo = "REG003";
            email = "aman@gmail.com";
            phone = 9988776655;
            marks = 88.5;
        }
        else {
            cout << "\nStudent not found!" << endl;
            rollNo = 0;
            regNo = "N/A";
            email = "N/A";
            phone = 0;
            marks = 0;
        }
    }

    // Display function
    void display() {
        cout << "\n Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Registration No: " << regNo << endl;
        cout << "Email: " << email << endl;
        cout << "Phone: " << phone << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    string name;

    cout << "Enter student name: ";
    cin >> name;

    Student s(name);   
    s.display();

    return 0;
}