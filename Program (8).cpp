
#include <iostream>
using namespace std;
int main()
{
 int number;
 cout << "Enter your menu game option"<<endl;
 cin >> number;
 switch (number)
 {
     case 1:
     cout << "Start New Game";
     break;
     case 2:
     cout << "Resume Game";
     break;
     case 3:
     cout << "Setting";
     break;
     case 4:
     cout << "Exit";
     break;
     
 }
 
    return 0;
}
