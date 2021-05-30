#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "enter number from 1 to 10"<<endl;
    cin >> number;
    cout << "You entered" <<endl;
    switch (number)
    {

    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two ";
        break;
    case 3:
        cout << "Three ";
        break;
    case 4:
        cout << "Four ";
        break;
    case 5:
        cout << "Five ";
        break;
    case 6:
        cout << "Six ";
        break;
    case 7:
        cout << "Seven ";
        break;
    case 8:
        cout << "Eight ";
        break;
    case 9:
        cout << "Nine ";
        break;
        
        case 10:
        cout << "Ten";
        break;
    }
    
    return 0;
}