#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter support number:";
    cin>>n;
    cout<<"1.Support"<<endl;
    cout<<"2.Billing"<<endl;
    cout<<"3.Technical Issue"<<endl;
    cout<<"4.Speak to agent"<<endl;
    switch(n){
        case 1:
        cout<<"You selected support"<<endl;
        break;
        case 2:
        cout<<" You selected billing"<<endl;
        break;
        case 3:
        cout<<" You selected technical issue"<<endl;
        break;
        case 4:
        cout<<" You speak to an agent"<<endl;
        break;
        default:
        cout<<"Invalid response"<<endl;
    }
    return 0;
}