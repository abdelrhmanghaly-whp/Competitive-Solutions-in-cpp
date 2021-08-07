  #include <iostream>
using namespace std;
// to compute median and mean (avr)
int main()
{
    int a;
    int array[a];
    float sum=0.0;
    float avr;
    double med=0.0;

    cout<<"Enter Your Array Size:"<<endl;
    cin>>a;


       for(int i=0; i<a; i++)
    {
        cout << "Enter Your Numbers:" <<endl;
        cin >> array[i];
    }

      for(int i=0; i<a; i++)
    {
        sum+=array[i];
    }

        avr=sum/a;

        cout<<" mean ="<<avr<<endl;


       if (a % 2 != 0)
         array[a/2];
         med=(array[(a-1)/2] + array[a/2])/2.0;
         cout<<" median ="<<med;


    return 0;
}
