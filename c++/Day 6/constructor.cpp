#include <iostream>
using namespace std;
 class Student{
    public:
    string name;//data member
    int rollno;
    
    //Default Constructor
    Student(){
        name="Lagan";
        rollno=1;

    }
    void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<rollno<<endl;
        cout<<"Default Constructor is called"<<endl;
    }
 };
 int main(){
    Student s1;
    s1.show();
    s1.name;
    s1.rollno;
    return 0;
 }
 