#include <iostream>
using namespace std;

int main(void)
{
    int x;
    cin >> x;

    int counter = 0;
    for(int i = 0, y; i < 5; i++){
        cin >> y;
        if(x == y)
            counter++;
    }

    cout << counter << endl;

    return 0;
}