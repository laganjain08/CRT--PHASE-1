#include <iostream>
using namespace std;
int sumofDigits(int n){
    if(n==0)
    return 0;
    return (n%10)+sumofDigits(n/10);

}
int main(){
    int num=5137;
    cout<<"Sum of digits will be:"<<sumofDigits(num)<<endl;
    return 0;
}