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
    int n;
    std::cin>>n;


}*/

int main()
{
    /*int t;
    std::cin >> t;
    while (t--) {
        solution();
    }*/
    int n, count=0;
    std::cin>>n;
    std::vector<int>a(n);
    std::set<int>x;
    for(int i=0; i<n; i++){
        std::cin>>a[i];
        x.insert(a[i]);

        }
        for(int i : a){
            if(i != *x.begin() && i != *(--x.end())){
                count++;
            }

        }
        std::cout<<count;
        return 0;
}