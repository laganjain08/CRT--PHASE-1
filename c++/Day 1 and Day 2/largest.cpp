#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<" Enter the Numbers:";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"Largest NUmber is:"<<a;
        }else{
            cout<<"Largest Number is:"<<c;
        }
    }else{
        if(b>c){
            cout<<"Largest Number is:"<<b;
        }else{
            cout<<"Largest Number is:"<<c;
        }
    }
}
