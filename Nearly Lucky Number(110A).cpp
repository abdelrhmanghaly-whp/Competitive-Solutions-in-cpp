#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#include<cctype>
#include<cstring>
#include<map>
#include<set>
#include<climits>
#include<iomanip>
#include<queue>
#include<stack>
#include<vector>

int main()
{
  long long int n;
  int count=0;
  int reminder;
  std::cin>>n;
  while(n!=0){
      reminder=n%10;
      if(reminder == 4 || reminder == 7){
          count++;
      }
      n/=10;
  }
  if(count == 4 || count == 7){
      std::cout<<"YES"<<std::endl;
  }
  else{
      std::cout<<"NO"<<std::endl;
  }
 return 0;
}