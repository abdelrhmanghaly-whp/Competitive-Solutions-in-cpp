#include <iostream>

using namespace std;
//Program that display the following menu
int main()
{
    int num1, num2, choice;

    cout<<" Menu "<<endl;
    cout<<" 1] sum "<<endl;
    cout<<" 2] sub "<<endl;
    cout<<" 3] mult "<<endl;
    cout<<" 4] reminder "<<endl;
    cout<<" 5] exit "<<endl;
    cout<<"---------------------------"<<endl;


    do{
        cout<<"Enter Your numbers"<<endl;
        cin>>num1>>num2;
    
    cout<<"choose from the pervious menu"<<endl;
    cin>>choice;


    if(choice==1)
    {
        cout<<"sum="<<num1+num2<<endl;
    }
    else if(choice==2)
    {
        cout<<"sub="<<num1-num2<<endl;
    }
    else if(choice==3)
    {
        cout<<"mult="<<num1*num2<<endl;
    }
    else if(choice==4)
    {
        cout<<"reminder="<<num1%num2<<endl;
    }
    }while(choice!=5);

    return 0;
}