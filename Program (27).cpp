#include <iostream>

using namespace std;

int main()
{
    int num1, num2, choice;

    cout<<" Menu "<<endl;
    cout<<" 1] sum "<<endl;
    cout<<" 2] sub "<<endl;
    cout<<" 3] mult "<<endl;
    cout<<" 4] Division "<<endl;
    cout<<" 5] modolus "<<endl;
    cout<<" 6] exit "<<endl;
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
        cout<<"div="<<num1%num2<<endl;
    }
    else if(choice==5)
    {
        cout<<"mod="<<num1%num2<<endl;
    }
    }while(choice!=6);

    return 0;
}