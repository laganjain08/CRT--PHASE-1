#include <iostream>
using namespace std;
int Sum(int p,int q){
    int ans=p+q;
    return ans;
}
int Mul(int p,int q){
    int ans=p*q;
    return ans;
}
void fun(){
    cout<<"Hello Code\n";
}
int main(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<Sum(a,b)<<endl;
    cout<<Mul(a,b)<<endl;
    fun();
    return 0;
}