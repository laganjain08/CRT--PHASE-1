#include <iostream>
using namespace std;
void swap_array(int &a,int &b){//call by reference{
    int temp=a;
    a=b;
    b=temp;
}
int Bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                //cout<<"Array is sorted here:"<<endl;
                swap_array(arr[j],arr[j+1]);
                flag=true;

            }
        }
   }
}
int main(){
    int arr[5]={2,4,8,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    Bubble_sort(arr,size);
    cout<<"Sorted array:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}

