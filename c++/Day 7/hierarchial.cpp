#include <iostream>
using namespace std;
class Player{
    public:
    string name;
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
    void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"Runs:"<<runs<<endl;
    }
};
class  Footballer:public Player{
    public:
    int goals;
    void setGoals(int g){
        goals=g;
    }
    void show(){
    cout<<"Name:"<<name<<endl;
    cout<<"Goals :"<<goals<<endl;
    }

};
int main(){
    Cricketer c1;
    c1.setName("Virat");
    c1.setRuns(100);
    c1.show();

    Footballer f1;
    f1.setName("Sunil");
    f1.setGoals(85);
    f1.show();
    return 0;

}