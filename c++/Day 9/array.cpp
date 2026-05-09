#include <iostream>
using namespace std;
int main(){
   int arr[6];
    int size =sizeof (arr)/sizeof (arr[0]);//int data type
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
   
    return 0;
}