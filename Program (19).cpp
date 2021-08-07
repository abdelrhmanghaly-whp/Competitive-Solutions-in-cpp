#include <iostream>
using namespace std;
//Program that print odd numbers from 0 to 100 except numbers divided by 3

int main()
{
    cout <<"The odd numbers are:"<<endl;
    for (int i=0; i<=100; i++)
    {
        if (i % 2 != 0 && i % 3 !=0)
        cout << i << endl;
    
    }
    return 0;
}