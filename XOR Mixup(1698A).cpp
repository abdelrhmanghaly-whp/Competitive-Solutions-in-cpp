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

void solution() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int num = 0;
        for (int j = 0; j < n; j++) {
            if (i == j)
                continue;
            num ^= a[j];
        }

        if (num == a[i]) {
            std::cout << a[i] << std::endl;
            return;
        }
    }
}
int main(){
    
    int t;
    std::cin >> t;
    while (t--) {
        solution();
    }
   
    return 0;
}

 