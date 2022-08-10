#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#include<cctype>
#include<iostream>
#include<cstring>
#include<map>
#include<unordered_set>
#include<set>
#include<climits>
int main(){
    /*int t = 1;
    std::cin >> t;
    while (t--) {
        solution();
    }*/
    int n, m;
    std::cin >> n >> m;
    int count_prime = 0;
    int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    for (int i = 0; i < m; i++) {
        if (arr[i] == n && arr[i + 1] == m)
        {
            count_prime = 1;
        }
    }
    if (count_prime == 1)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    return 0;
 }
   
    
    