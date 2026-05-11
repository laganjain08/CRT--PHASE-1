#include <iostream>
using namespace std;
int Linear_search(int nums[],int n,int target){
    for(int i=0;i<n;i++){
        if (nums[i]==target){

        
        return i;
    }
}
return -1;//element not found
}
int main(){
    int arr[5]={2,4,6,8,14};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans=Linear_search(arr,size,6);

    cout<<"Element found at index:"<<ans<<endl;
    
    return 0;

}