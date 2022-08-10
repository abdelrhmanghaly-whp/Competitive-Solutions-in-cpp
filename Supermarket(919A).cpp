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
#include<iomanip>

int main(){
    
   /* int t;
    std::cin >> t;
    while (t--) {
        solution();
    }*/
    double n, m, min_val = INT_MAX; 
    std::cin >> n >> m;
    std::vector<int>a(2 * n); 
    for (int i = 0; i < 2 * n - 1; i += 2) {
        std::cin >> a[i] >> a[i + 1];
        std::cout << std::setprecision(8);
        if (m * a[i] / a[i + 1] < min_val) {
            min_val = (m * a[i] / a[i + 1]);
        }
    }
    std::cout << min_val << std::endl;

    return 0;
}

 