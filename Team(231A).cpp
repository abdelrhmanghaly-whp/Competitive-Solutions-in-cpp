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
    int x, y, z;
    int count = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> x >> y >> z;
        if (x + y + z >= 2) {
            count++;
        }
    }
    std::cout << count;
 }
   