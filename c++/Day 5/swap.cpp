#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
   int a=2,b=4;
   cout<<"Numbers before swapping:"<<a<<" "<<b<<endl;
   
   swap(&a,&b);
   cout<<"After swapping:"<<a<<" "<<b<<endl;



    return 0;
}