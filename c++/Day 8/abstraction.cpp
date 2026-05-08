#include <iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    ATM(int b){
        balance=b;
    }
    void withdraw(int amount){
        if(amount>balance){
            cout<<"Insufficient balance"<<endl;
        }
        else{
            balance-=amount;
            cout<<"Current amount withdrawn:"<<amount<<endl;
        }
    }
    void showBalance(){
     cout<<"balance:"<<balance<<endl;
    }
};
int main(){
    ATM a(10000);
    a.withdraw(5000);
    a.showBalance();


    return 0;
}