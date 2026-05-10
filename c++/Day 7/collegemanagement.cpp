#include <iostream>
using namespace std;
class College{
    public:
    string name;
    int age;
    void setDetail(string n,int a){
        name=n;
        age=a;
    }

};
class Student:public College{
    public:
    string Course;
    int rollNo;
    int year;
    void setData(string c,int r,int y){
        Course=c;
        rollNo=r;
        year=y;

    }
    void show(){
        cout<<"Name of student:"<<name<<endl;
        cout<<"Age of student:"<<age<<endl;
        cout<<"Course of student:"<<Course<<endl;
        cout<<"Roll No:"<<rollNo<<endl;
        cout<<"Year studying in:"<<year<<endl;
    }

};
class Teacher:public College{
    public:
    string Dept;
    int empID;
    double salary;
    void setInfo(string d,int e,double s){
        Dept=d;
        empID=e;
        salary=s;
    }
    void show(){
        cout<<"Name of employee:"<<name<<endl;
        cout<<"Age of employee:"<<age<<endl;
        cout<<"Department of employee:"<<Dept<<endl;
        cout<<"Employee ID:"<<empID<<endl;
        cout<<"Salary of employee:"<<salary<<endl;
    }
};
int main(){
   
  Student s1;
  s1.setDetail("Lagan",20);
  s1.setData("Bachelor of Technology" ,21,3);
  s1.show();

  Teacher t1;
  t1.setDetail("Girish",35);
  t1.setInfo("Engineering",123,40000);
  t1.show();
  return 0;

}