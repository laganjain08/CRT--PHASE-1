#include <iostream>
using namespace std;
 int globvar = 100;
 int main(){
    int uservalue;
    cout<< "enter an integer:";
    cin>> uservalue;

    if(uservalue == 0){
        cout<< "Division by zero is not allowed";
        return 0;
    }

    double result = (double)globvar/uservalue;
    cout<<"result of division:"<< result <<endl;
    return 0;


 }
