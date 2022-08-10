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
    int n, t, k, d; // 8 6 5 4
    std::cin >> n >> t >> k >> d;
    int res = (t + d) / t; // 10 / 6  = 1
    res*= k; // 1*5=5 cakes, 5 cakes in 12 min, true >> yes
    if (res < n) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}