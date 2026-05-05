#include <iostream>
using namespace std;
int  coffeevolume(int shots){
    return shots*30;
}
int main(){
int shots;
cout<<"Enter number of shots:";
cin>>shots;
cout<<"Volume of coffee in mL:"<<coffeevolume(shots)<<"mL"<<endl;

    return 0;
}