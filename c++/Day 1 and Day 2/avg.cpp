#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<" enter three integers:";
    cin>> x >> y >> z;
    int sum= x+y+z;
    double avg=sum/3.0;
    cout<<" Sum:"<<sum<<endl;
    cout<<" average:"<<avg<< endl;
    return 0;
}