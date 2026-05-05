#include <iostream>
using namespace std;
int main(){
    int a,b;
     cout << "Enter two integers (a and b): ";
    cin >> a >> b;
     a = a << 2;
     b = b >> 3;
     cout << "Value of a after multiplying by 4: " << a << endl;
     cout << "Value after dividing by 8:"<< b<< endl;
      return 0;
}