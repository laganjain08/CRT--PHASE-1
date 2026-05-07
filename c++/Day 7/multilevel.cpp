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

class Cricketer:public Player{
    public:
    int runs;
    void setRuns(int r){
        runs=r;
    }
    
};

class IndianCricketer:public Cricketer{
    public:
    string state;
    void setState(string s){
        state=s;
    }
    void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"Runs:"<<runs<<endl;
        cout<<"State:"<<state<<endl;
    }
};
int main(){
    int r;
    cin>>r;
    string s;
    cin>>s;
    IndianCricketer c1;
    c1.setName("Virat");
    c1.setRuns(r);
    c1.setState(s);
    c1.show();
    return 0;


}