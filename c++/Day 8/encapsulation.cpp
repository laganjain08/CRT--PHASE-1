#include <iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    void setBalance(int balance){
        this->balance=balance;
    }
   
    void withdraw(int amount){
        if(amount>balance){
            cout<<"Insufficient balance"<<endl;
        }
        else{
            balance-=amount;
            cout<<"Amount withdrawn:"<<amount<<endl;
        }
    }
    int getBalance(){
    return balance;
    }
};
int main(){
    ATM a;
    int n;
    cin>>n;
    a.setBalance(n);
    cout<<"Balance is:"<<a.getBalance()<<endl;
   
    a.withdraw(5000);
     cout<<"Amount remaining  is:"<<a.getBalance()<<endl;


    
    return 0;
}