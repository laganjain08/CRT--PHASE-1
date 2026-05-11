#include <iostream>
using namespace std;
int Binary_search(int nums[],int n,int target){
    int left=0;
    int right=n-1;
    while (left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==target){
              return mid;}
            else if(nums[mid]<target){
             left=mid+1;
            }
             else(nums[mid]>target);{
             right =mid-1;
           }
      }
}

    int main(){
        int arr[5]={2,4,6,8,14};
        int size=sizeof(arr)/sizeof(arr[0]);
        int target=8;
        int ans=Binary_search(arr,size,8);
        cout<<"Element found at index:"<<ans<<endl;
        return 0;

    }
    
