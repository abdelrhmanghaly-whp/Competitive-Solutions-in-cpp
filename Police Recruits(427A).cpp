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
    int n, sum = 0, count = 0;
    std::cin >> n; // 3
    std::vector<int>a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i]; // -1 -1 1
        sum += a[i];
        if (sum < 0) {
            sum = 0;
            count++; // 1+1 =2
        }

    }
    std::cout << count; // 2
	return 0;
}