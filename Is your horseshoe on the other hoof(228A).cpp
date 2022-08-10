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
    std::set<int>x;
    for (int i = 0; i < 4; i++) {
        std::cin >> n;
        x.emplace(n);
    }
    std::cout << 4 - x.size() << std::endl;
  
    return 0;
}