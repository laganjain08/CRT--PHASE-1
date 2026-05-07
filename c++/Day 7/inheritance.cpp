#include<iostream>
using namespace std;
//parent class
class Player{
    public:
    string name;
    int age;
    void setName(string n){
        name=n;
    }
};
// Derived class or child class
class Cricketer:public Player{
    public:
    int runs;
    void setRuns(int r){
        runs=r;
    }
    void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"Runs:"<<runs<<endl;
    }
};
int main(){
    int r;
    cin>>r;
    Cricketer c1;
    c1.setName("Virat");
    c1.setRuns(r);
    c1.show();
    return 0;


}