#include <iostream>

using namespace std;
//  Program that takes 1 number from the user and print the multiplication table of this number (5)

int main()
{
    int x;
    cout << "Enter number " <<endl;
    cin >> x;
    for (int i=1 ; i <=10; ++i)
    {
        cout << x << "*" << i << "=" << x* i <<endl;
    }
    return 0;

}
