#include <iostream>
using namespace std;


int areaRectangle(int length, int width) {
    int area = length * width;
    cout << "Area of Rectangle = " << area << endl;
    return area;
}

int main() {
    int length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    int result = areaRectangle(length, width);

    return 0;
}