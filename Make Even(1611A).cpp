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


}

int main()
{
    int t;
    std::cin >> t;
    while (t--) {
          int n, switcher=0;
    std::cin>>n;
    std::vector<int>a;
    while(n>0){
        a.push_back(n%10);
        n/=10;
    }
    reverse(a.begin(),a.end());
    if(a[a.size()-1] % 2 ==0){
        std::cout<<0<<std::endl;
        continue;

    }
    for(int i=0; i<a.size(); i++){
        if(a[i] % 2==0){
            switcher =1;
            break;
        }
    }
    if (switcher==0){
        std::cout<<-1<<std::endl;
        continue;
    }
    if(a[0] % 2 ==0){
        std::cout<<1<<std::endl;
        continue;

    }
    std::cout<<2<<std::endl;
    }

}
 