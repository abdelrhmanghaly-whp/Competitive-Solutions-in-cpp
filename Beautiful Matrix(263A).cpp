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
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            std::cin >> n;
            if (n == 1) {
                std::cout << abs(3 - i) + abs(3 - j); // 1 move 
             
            }
            
        }

    }

    return 0;

 }