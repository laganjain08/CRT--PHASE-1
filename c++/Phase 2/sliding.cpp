#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int sum=0,mx=0;
    for(int i=0,j=0;j<n;j++){
        sum=sum+a[j];
        if(j>=k-1){
              cout<<sum<<" ";
            mx=max(mx,sum);
              sum=sum-a[i];//17-5=12
            i++;
        }
        //if(j==k-1)cout<<sum<<" ";//14
        //mx=max(mx,sum);
    }
    //cout<<mx;
    

}