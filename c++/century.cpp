#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age>=18){
        if(age>=100){
            cout<<"Elgible to vote: Senior Citizen";
        }else{
            cout<<"Eligible to vote";
        }}
        else{
            if(age>=0 && age<=17){
                cout<<"Not eligible to vote";
            }else{
                cout<<"Invalid age";
            }
        }
     
}