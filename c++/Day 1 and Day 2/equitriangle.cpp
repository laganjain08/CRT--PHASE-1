# include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<" enter three sides of the triangle:";
    cin>> x>>y>>z;
    if( bool isEquilateral = (x == y) && (y == z)){
        cout<<" true";
    }else{
        cout<<" false";
    }
    return 0;

}