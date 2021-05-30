#include <iostream>
using namespace std;
// Program that takes 1 number from the user and print all the numbers divisible by the number the user entered from 1 to 100


int main()
{

int x;
    cin>>x;
    for(int i=0;i<=100;i++){
        if(i%x==0){
            cout<<i<<endl;
        }
    }
    return 0;
}

