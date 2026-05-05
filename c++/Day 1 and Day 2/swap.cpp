#include <iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<< " enter first number:";
    cin>> a;
    cout<< " enter second number:";
    cin>> b;

    temp=a;
    a=b;
    b=temp;

    cout<<" result after swapping:"<< endl;
    cout<<"a="<<a;
    cout<< " b="<<b;

    return 0;
    
}