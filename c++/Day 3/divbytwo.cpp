#include <iostream>
using namespace std;
int main(){
    int n;
     int i=1;
    cout<<"Enter number";
    cin>>n;
   
    while(i <= n ){
        if(i%2==0){
            cout<<i<<" ";
        }
        
         i++;
    }
   

    
    return 0;

}