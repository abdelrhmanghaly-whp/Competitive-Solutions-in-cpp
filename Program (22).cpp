#include <iostream>
using namespace std;
// Program (1)
/*
To search in array that contains 20 items for a key value sequentially
Means a user enters an array of 20 items ( any DataType you want) and
then enters a value and you should search for the entered value in the
array and print a suitable message
*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    int array[20];
    int value;
    int i;

    for ( i = 0; i < 20; i++)
    {
        cout << "Enter Your Chosen Numbers:" << endl;
        cin >> array[i];
    }

    cout << "Enter the number you would like to check:" << endl;
    cin >> value;

    for ( i = 0; i < 20; i++)
    {

        if (value == array[i])
        {
            cout << " output : " << value << " is found in the array ";
        }
    }
    if (value != array[i]);
    {
        cout << "The Number You choosed isnt found in the array";
    }
        
            
        

    
    return 0;
}
    

