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
//void soultion(){}


int main()
{

     /* int t = 1;

    std::cin >> t;
    while (t--) {
        solution();
    }*/
   long long int n,lvls,p,q;
   std::cin>>n;
   std::vector<int>a(n);
   std::cin>>p;
   for(int i=0; i<p; i++){
    std::cin>>lvls;
    a[lvls-1]=1;
   }
   std::cin>>q;
   for(int i=0; i<q; i++){
    std::cin>>lvls;
    a[lvls-1]=1;
   }
   for(int i=0; i<n; i++){
    if(a[i]!=1){
        std::cout<<"Oh, my keyboard!"<<std::endl;
        return 0;
    }
   }
        std::cout<<"I become the guy."<<std::endl;
        return 0;
        
}