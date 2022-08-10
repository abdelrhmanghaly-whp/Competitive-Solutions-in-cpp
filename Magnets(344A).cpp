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
    int n, count = 1;
    std::cin >> n;
    std::string x, temp_carry;
    std::cin >> temp_carry;
    for (int i = 1; i < n; i++) {
        std::cin >> x;
        if (x != temp_carry) {
            count++;
            temp_carry = x;
        }
    }
    std::cout << count << std::endl;
 
 }
   