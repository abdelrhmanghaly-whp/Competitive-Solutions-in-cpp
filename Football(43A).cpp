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
/*void solution(){

}*/

int main()
{
    /*int t;
    std::cin >> t;
    while (t--) {
        solution();
    }*/
    int n, winning_t;
    std::string x[500];
    std::cin>>n;
    for(int i=0; i<n; i++){
        std::cin>>x[i];
    }
    sort(x,x+n);
    std::cout<<x[n/2]<<std::endl;
}