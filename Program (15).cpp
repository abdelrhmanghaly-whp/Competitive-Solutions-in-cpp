#include <iostream>
using namespace std;
//  Program that takes 2 numbers from the user and print the even numbers between them

int main()
{

int x,y,temp;
    cin>>x>>y;
    if (x>y){
        temp=x;
        x=y;
        y=temp;
    }
    for(int i=x;i<=y;i++){
        if (i%2==0){
            cout<<i<<endl;
        }
    }
return 0;
}
