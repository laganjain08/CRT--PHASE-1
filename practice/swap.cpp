#include <iostream>
using namespace std;

void Swap(int &p,int &q){//pass by referrence
    int temp;
    temp=p;
    p=q;
    q=temp;
    
}
int main(){
    int p,q;
    cout<<"Enter numbers:"<<endl;
    cin>>p>>q;
    Swap(p,q);
    cout<<"Numbers after swapping:"<<p<<" "<<q<<endl;
    return 0;
}