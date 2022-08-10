/*#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#include<cctypee
#include<cstring>
#include<map>
#include<set>
#include<climits>
#include<iomanip>
#include<queue>
#include<stack>
#include<vector>*/
#include<bits/stdc++.h>
void solution(){
   long long int rate;
   std::cin>>rate;

   if(rate>=1900){

    std::cout<<"Division 1"<<std::endl;
   }
   else if(rate>=1600 && rate <= 1900){

    std::cout<<"Division 2"<<std::endl;
   }
   else if(rate>=1400 && rate<1600){

    std::cout<<"Division 3"<<std::endl;
   }
   else{

    std::cout<<"Division 4"<<std::endl;
   }
}

int main()
{
    int t;
    std::cin >> t;
    while (t--) {
        solution();
    }

}