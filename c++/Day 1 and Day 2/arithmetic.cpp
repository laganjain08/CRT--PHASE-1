#include <iostream>
using namespace std;
int main(){
    double a,b;
    char op;
    cout<< " enter 1st number:";
    cin>> a;
    cout<< "Enter operator( '+','-','*','/'):";
    cin>> op;
    cout << " enter 2nd number:";
    cin>> b;
    switch(op) {
        case '+':
            cout << "Result: " << a + b;
            break;
        case '-':
            cout << "Result: " << a - b;
            break;
        case '*':
            cout << "Result: " << a * b;
            break;
        case '/':
            cout<< " Result:"<< a/b;
        break;
        
        default:
        cout<<" Invalid operator";}
        
         return 0;


}