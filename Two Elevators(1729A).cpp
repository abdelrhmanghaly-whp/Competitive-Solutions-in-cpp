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
void solution() {
    int a, b, c;
    std::cin >> a >> b >> c;
    int n = abs(b - c) + abs(c - 1);
    int k = abs(a - 1);
    if (n > k) { // 1 --> 1
        std::cout << 1 << std::endl;
    }
    else if (n < k) { // 2
        std::cout << 2 << std::endl;
    }
    else {
        std::cout << 3 << std::endl;
    }// 3
};     
int main() {
    int t;
     std::cin >> t;
     while (t--) {
         solution();
     }
    return 0;
}
   