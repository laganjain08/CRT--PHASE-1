#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    while(true){
        cout<<" enter a positive integer:";
        cin>>n;
        if(n<0){
            break;
        }
        sum+=n;
    }
    cout<<"Final sum:"<<sum<<endl;
    return 0;

}