#include <iostream>

 using namespace std;
int main()
{
int n[5];
int fact=1;
int i;
cout<<"Enter 5 numbers:"<<endl;

for (i = 0; i < 5; ++i) 
{
   fact*=i;
   cin>>n[i];

}
   cout<<" factorial of " <<n[i]<<" is: "<< fact << endl; 


return 0;
}