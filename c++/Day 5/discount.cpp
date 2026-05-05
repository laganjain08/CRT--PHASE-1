#include <iostream>
using namespace std;

void applyDiscount(double &billAmount) {
    billAmount = billAmount - (0.10 * billAmount); 
    cout << "Updated Bill Amount after 10% discount: " << billAmount << endl;
}

int main() {
    double bill=250.50;

    cout << bill<<endl;
    

    applyDiscount(bill); 

    return 0;
}