#include <iostream>
using namespace std;
class student{

     private:
    int RegNo=100;

    public:

    //data members
    string name;
    int age;

       //member function
    void display (){
  
    cout<<"Name is: "<<name<<endl;
    cout<<"Age is:"<<age<<endl;
    cout<<"Registration No:"<<RegNo<<endl;
    RegNo++;
  
    }   
};
int main(){
    student s1;
    s1.name="abc";
    s1.age =21;

    
    s1.display();


    student s2;
    s2.name="xyz";
    s2.age=22;
    s2.display();
    return 0;
}