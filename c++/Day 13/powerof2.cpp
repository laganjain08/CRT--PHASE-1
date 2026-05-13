#include <iostream>
using namespace std;
bool Poweroftwo(int x){
    if(x==0)
    return false;
    if(x==1)
    return true;
    return(x%2==0) && Poweroftwo(x/2);//recursive case
   
}
int main() {
    int t;
    cout<<"Enter number of test cases:"<<endl;//multiple test cases
      cin>>t;
   
   while(t--){
   int n;
   cout<<"Enter a number:";
   cin>>n;
   bool result=Poweroftwo(n);
       if(result)
   cout<<n<<" is power of 2"<<endl;
      else
   cout<<n<<" is not a power of 2"<<endl;
   }
    return 0;
}