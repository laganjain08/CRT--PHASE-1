#include<iostream>
using namespace std;
int main(){
    int n;
    long long factorial=1;
    cout<<"Enter the number:";
    cin>>n;
     if(n<0){
        cout<<" Factorial is not defined for neagtive number";
     }else{
        for(int i=1;i<=n;i++){
        factorial *= i;
     }
     cout<<"Factorial of the number is:"<<factorial;
}
return 0;
}