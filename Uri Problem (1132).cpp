#include <iostream>

using namespace std;

int main()
{
    int x, y, less, more;
    int sum = 0;
    cout << "Enter First Number: "<< endl;
    cin >> x;
    cout << "Enter Second Numebr:" << endl;
    cin >>y;

    if (x < y) 
    {
        less = x;
        more = y;
    }
    else 
    {
        less = y;
        more= x;
    }

    for (int i = less; i <= more; ++i)
    {
        if (i % 13 != 0)
            sum += i;
    }

    cout <<"Summation Between Numbers is: " << sum << endl;

    return 0;
}