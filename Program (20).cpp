#include <iostream>
using namespace std;
// Program that take number from user and print if number is even or odd repeat operation until user write 0


int main()
{
    int x, stop;
    do{
    cout << " Enter Your Number:" <<endl;
    cin >> x;
    if (x % 2 == 0)
    cout << "The Number is Even"<<endl;
    else
    cout << "The Number is odd"<<endl;
    cin >> stop;
}
while(stop!=0);
    
    return 0;
    
}