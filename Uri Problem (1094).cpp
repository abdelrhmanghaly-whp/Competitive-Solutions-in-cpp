#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char name;
    int x,num,sum1=0,sum2=0,sum3=0;
    double presntage1,presntage2,presntage3,total;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>num>>name;
      switch(name)
      {
          case 'C':
          sum1 += num;
          break;
          case 'R':
         sum2 += num;
          break;
          case 'S':
          sum3 += num;
          break;
          
          
          
      }
        
    }
    total=sum1+sum2+sum3;
    presntage1=(sum1*100)/total;
    presntage2=(sum2*100)/total;
    presntage3=(sum3*100)/total;
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<sum1<<endl;
    cout<<"Total de ratos: "<<sum2<<endl;
    cout<<"Total de sapos: "<<sum3<<endl;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<presntage1<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<presntage2<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<presntage3<<" %"<<endl;
    return 0;
}