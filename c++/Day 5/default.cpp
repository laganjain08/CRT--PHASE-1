#include <iostream>
using namespace std;
int add(int a,int b=6){
    return a+b;
}
int main(){
    int sum;
    cout<<"sum is:"<<add(3)<<endl;
    return 0;
}