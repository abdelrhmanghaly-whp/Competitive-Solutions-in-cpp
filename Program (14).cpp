#include <iostream>

using namespace std;
// Program that calculates and print the summation of the number divided by 2 and 3 from 0 to 100

int main()
{
    int sum=0;
    for(int i=0;i<=100;i++){
        if(i%3==0&&i%2==0){
            sum+=i;
            cout<<i<<endl;
        }
    }
    cout<<sum;
    return 0;
}
