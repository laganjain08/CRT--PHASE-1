#include <iostream>
using namespace std;
class Cricketers{
    public:
     string name;
     int runs;
     double avg;

     //parameterized constructor
     Cricketers(string n,int r,double avg){
        name =n;
        runs=r;
        this->avg=avg;
     }
     //member function
     void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"Runs:"<<runs<<endl;
        cout<<"Average:"<<avg<<endl;
     }

};
int main(){
    Cricketers c1("Sachin",100,202);
    c1.name;
    c1.runs;
    c1.avg;
    c1.show();
    return 0;
}