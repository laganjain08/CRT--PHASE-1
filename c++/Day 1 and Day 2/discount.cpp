#include <iostream>
using namespace std;
int main(){
    int age;
    cout<< "enter age:";
    cin>>age;
    if( age>=16 && age<=65){
        cout<<"Discount provided";
    }else{
        cout<<" Discount not provided";
    }
    return 0;
}