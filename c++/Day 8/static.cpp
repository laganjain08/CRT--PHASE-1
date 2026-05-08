#include <iostream>
using namespace std;
class Employee{
    public:
    static int reg_no;//declare  static variable
    static  void show(){//declare static member function
        cout<<"Employee reg no is:"<<reg_no<<endl;
       
    }
};
int Employee::reg_no=100;//define static variable 
int main(){
Employee E1;
Employee E2;
Employee E3;
Employee E4;
Employee ::show();//call static function 
return 0;
}