#include <iostream>
using namespace std;
class Stack{
    private:
    int arr[100];
    int a;
    int top;
    public:
    Stack(){
     top=-1;}

void push(int val){
    if(top<99){
        top++;
        arr[top]=val;
    }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }
    int tope(){
        if(top>=0){
            return arr[top];

        }else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    int size(){
        if(top>=0){
            return ++top;
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }
    bool isEmpty(){
        if(top<=-1){
            return true;
        }
        else{
            return false;
        }
    }};
    int main(){
   Stack s;
   s.push(10);
   s.push(20);
   s.push(30);
 cout<<"Top element:"<<s.tope()<<endl;
 cout<<"Stack size:"<<s.size()<<endl;
 s.pop();
 cout<<"Stack size after pop:"<<s.size()<<endl;
 cout<<"is stack empty? "<<(s.isEmpty()?"yes":"no")<<endl;
 return 0;

    }
