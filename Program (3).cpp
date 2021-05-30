#include <iostream>
using namespace std;
int main()
{
    float height, base, area;
    
    cout << "Enter height of triangle: ";
    cin >> height;
    cout << "Enter base of triangle :";
    cin >> base;
    area = (height *base) / 2;
    cout << "Area of triangle = " << area;
    return 0;
    
    
}

