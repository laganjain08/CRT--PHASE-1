#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main(){

string str1="Hello";
string str2="Jecrc";
cout<<str1<<" "<<str2<<endl;
//methods of string
int n=str1.length();
cout<<"Length of string is:"<<n<<endl;

cout<<"Append string:"<<str1.append("Students")<<endl;

cout<<"Is string empty:"<<str2.empty()<<endl;
cout<<"After concatenation string is:"<<str1+"Bachon"<<endl;
cout<<"After concatenation of string is:"<<str1<<endl;

str2.push_back('U');
cout<<"After push_back() method:"<<str2<<endl;

str2.pop_back();
cout<<"after pop_back() method:"<<str2<<endl;

int index=str1.find("ello");
cout<<"Index of 'ello' in str1:"<<index<<endl;

str1.swap(str2);
cout<<"After swapping str1 and str2"<<endl;
cout<<"str1:"<<str1<<endl;
cout<<"str2:"<<str2<<endl;

char ch=str1.at(1);
cout<<"Character at index 1 in str1:"<<ch<<endl;

string subStr=str2.substr(5,6);
cout<<"Substring of str2 from index 5 with length 6:"<<subStr<<endl;

string str3;
getline(cin,str3);
cout<<"You entered:"<<str3<<endl;

return 0;

}