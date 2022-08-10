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
    std::string x;
    std::cin>>x;
    if((x[0]=='Y' || x[0]=='y')&&(x[1]=='E' || x[1]=='e')&&(x[2]=='S' || x[2]=='s')){
        std::cout<<"YES"<<std::endl;
    }
    else{
        std::cout<<"NO"<<std::endl;
    }
}

int main()
{
    int t = 1;
    std::cin >> t;
    while (t--) {
        solution();
    }

}
 