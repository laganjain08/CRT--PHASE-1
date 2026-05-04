#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int a=0,b=1,next;
    cout<<"Fibonacci sequence upto "<<n<<"is:";
    while(a<=n){
        cout<<a<<" ";
        next=a+b;
        a=b;
        b=next;
    }
return 0;
}