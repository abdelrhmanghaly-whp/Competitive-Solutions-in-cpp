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
   int a,b,n,sum=0,count=0;
   std::cin>>a>>b>>n;
    while(sum <= n){
            if(a > b){
                b += a; 
                sum = b;
                count++;
            }
            else{
                // unchanged operation hna, "menf3sh el var exc 3 f operation 1"
                a += b;
                sum = a;
                count++;
            }
            if(sum > n){
                break;
            }
        }
        std::cout<<count<<std::endl;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--) {
        solution();
    }

}