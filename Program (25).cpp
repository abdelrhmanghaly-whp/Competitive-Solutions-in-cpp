#include <iostream>
using namespace std;
int main()
{
    int z[5][4];
    int sum=0;
    for (int row =0; row < 5; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> z[row][col];
            sum = sum + z[row][col];
            
        }
        
    }
    for (int row = 0; row < 5; row++)
    {
        for(int col =0; col < 5; col++)
        {
            cout << z[row][col] << " ";
        }
        cout << endl;
    }
    

return 0;
}

