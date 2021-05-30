#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "enter num1"<<endl;
    cin >> num1;
    cout << "enter num2"<<endl;
    cin >> num2;
    cout << "Before swap" << "\n num1=" << num1 << "\n num2=" << num2 << endl;
    cout << "Their Difference : " << num1 - num2 << endl;
    
     num2 = num1 - num2;
     num1 = num1 - num2;
    
 
    cout << "After swap" << "\n num1=" << num1 << "\n nmu2=" << num2 << endl;
    cout << "Their Difference : " << num2 - num1 << endl;
    return 0;
}