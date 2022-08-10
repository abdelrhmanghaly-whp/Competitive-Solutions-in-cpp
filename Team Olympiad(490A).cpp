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
     /*int t = 1;

    std::cin >> t;
    while (t--) {
        solution();
    }*/
    int n, x, lowest_nteam;
    std::cin>>n;
    std::vector<int>a[4];
    for(int i=0; i<n; i++){
        std::cin>>x;
        a[x].push_back(i+1);
    }
    lowest_nteam =std::min(a[1].size(),std::min(a[2].size(),a[3].size()));
    std::cout<<lowest_nteam<<std::endl;
    for(int i=0; i<lowest_nteam; i++){

        std::cout<<a[1][i]<<" "<<a[2][i]<<" "<<a[3][i]<<std::endl;
    }



    return 0;
}