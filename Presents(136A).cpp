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
    int n, x;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        std::cin>>x;
        arr[x-1]=i+1;
    }
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }



    return 0;
}