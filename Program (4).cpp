#include <iostream>
using namespace std;

int main()
{

    int num1, num2, num3;
    cout << "enter num1"<<endl;
    cin >> num1;
    cout << "enter num2"<<endl;
    cin >> num2;
    cout << "enter num3"<<endl;
    cin >> num3;
    cout << "the maximum value is"<<endl;
    if (num1 >= num2 && num1 >= num3)
    {
        cout << num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        cout << num2;
    }
    else
    {
        cout << num3;
    }
    return 0;
}