#include <iostream>
using namespace std;

int main()
{

    int height;
    cout << "enter your height"<<endl;
    cin >> height;
    cout << "this person is"<<endl;
    if (height == 150)
        cout << "average height"<<endl;
    else if (height < 150)
        cout << "dwarf"<<endl;
    else if (height >= 165)
        cout << "tall"<<endl;
    else
    /*
    why print abnormal hna ?, momken tb2a normal bs. el height 22l mn 150 dwarf w aktr mn 165 tall el ba2y normal
    fe mistake fel assignment 3la m2zon fa hprint normal 3ady
    */
        cout << "normal"<<endl;
    return 0;
}