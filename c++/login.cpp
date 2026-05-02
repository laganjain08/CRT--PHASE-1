#include <iostream>
#include <string>

using namespace std;
int main(){
    const string Username= "abc";
    const string Password= "0852";
     string User, Pass;
    
     cout<<" Enter Username:";
     cin >> User;

     cout<<" Enter Password:";
     cin >> Pass;
     if ( User== Username && Pass== Password){
        cout<<" Login Succesfully ";
     }else 
     {
        cout<<" Login Failed";
    }
    return 0;
}