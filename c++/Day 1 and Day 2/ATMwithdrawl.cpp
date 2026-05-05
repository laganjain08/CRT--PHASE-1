#include <iostream>
using namespace std;

int main() {
    double balance = 10000;   
    double withdraw;

    cout << "===== ATM Withdrawal System =====" << endl;
    cout << "Your current balance is: Rs. " << balance << endl;

    cout << "Enter amount to withdraw: ";
    cin >> withdraw;

   
    if (withdraw <= 0) {
        cout << "Invalid amount! Please enter a positive value." << endl;
    }
   
    else if (balance - withdraw < 1000) {
        cout << "Transaction declined! Minimum balance of Rs. 1000 must be maintained." << endl;
    }
    
    else if (withdraw > 5000) {
        cout << "Transaction declined! Maximum withdrawal limit is Rs. 5000 per transaction." << endl;
    }
    
    else if (withdraw > balance) {
        cout << "Transaction declined! Insufficient balance." << endl;
    }
    
    else {
        balance -= withdraw;
        cout << "Transaction successful!" << endl;
        cout << "Please collect your cash." << endl;
        cout << "Remaining balance: Rs. " << balance << endl;
    }

    cout << "Thank you for using ATM!" << endl;

    return 0;
}