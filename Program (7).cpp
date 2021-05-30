#include <iostream>
using namespace std;
int main()
{
    int weekdays;
    cout<< "Enter weekdays (1-7)"<<endl;
    cin >> weekdays;
    cout<<"the day is"<<endl;
switch (weekdays)
{
 case 1:
cout << " Saturday";
 break;
    
case 2:
cout << "Sunday";
break;

case 3:
cout <<"Monday";
break;

case 4:
cout <<"Tuesday";
break;

case 5: 
cout <<"Wednesday";
break;

case 6: 
cout <<"Thursday";
break;

case 7:
cout <<"Friday";
break;

default:
cout << "Weekdays must be (1-7)";
break;
}

    return 0;
}