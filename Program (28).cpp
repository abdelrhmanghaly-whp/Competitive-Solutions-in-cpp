#include<iostream>
using namespace std;
int main ()
{
    int num[10];
    int i;
    int j;
    int descending;


    cout<<"Enter 10 Numbers :"<<endl;
    for (i = 0; i < 10; ++i)
    cin>>num[i];

    for (i = 0; i < 10; ++i)
    {
        for (j = i + 1; j < 10; ++j)
        {
            if (num[i] < num[j])
            {
                descending = num[i];
                num[i] = num[j];
                num[j] = descending;
            }
        }
    }
    cout<<" Numbers in descending are:"<<endl;
    for (i = 0; i < 10; ++i)
    {
        cout<<num[i]<< " ";


    }
  return 0;
  }


