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
    int n;
    std::cin >> n;
    std::vector<int>a(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
       
    }
    sort(a.begin(), a.end());
    for (auto e : a) {
        std::cout << e << " ";
    }
 
    
    return 0;
 
 }