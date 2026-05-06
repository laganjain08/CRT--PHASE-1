#include<iostream>
using namespace std;
class Area{
    public:
int length;
int breadth;
int side;
double radius;

 Area(int l,int b ){
    length=l;
    breadth=b;
}
   void show() {
   
    cout<<"Length:"<<length<<endl;
    cout<<"Breadth:"<<breadth<<endl;
    cout<<"Area of rectangle:"<<length*breadth<<endl;
 }

Area(int s){
        side=s;
    }
        void disp(){
        cout<<"Side:"<<side<<endl;
        cout<<"Area of square:"<<side*side<<endl;
    }
Area(double r){
    radius=r;
}
    void display(){
        cout<<"Radius :"<<radius<<endl;
        cout<<"Area:"<<3.14*radius*radius<<endl;
    }
Area(){
    length=0;
    breadth=0;
    side=0;
    radius=0;
}
    void dis(){
    cout<<"No data is given"<<endl;
}   
};
int main(){
    Area a1(2,4);
    a1.length;
    a1.breadth;
    a1.show();

    Area a2(4);
    a2.side;
    a2.disp();

    Area a3(6.23);
    a3.radius;
    a3.display();

    Area a4;    
    a4.dis();
    a4.length;
    a4.breadth;
    a4.side;
    a4.radius;


    return 0;
    
}
