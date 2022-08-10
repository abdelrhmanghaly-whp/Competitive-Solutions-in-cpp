#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include <string>
#include <cctype>
#include <iostream>
#include <cstring>
#include<map>

int main() {
    int n;
    int k, w, sum = 0;
    std::cin >> k >> n >> w;
    std::vector<int>a(w);
    for (int i = 0; i < w; i++) {
        sum += ((i + 1) * k); // vvector inti to brute force ./ number theory
    }
    if ((sum - n) > 0) {
        std::cout << sum - n << std::endl;
    }
    else {
        std::cout << 0 << std::endl;
    }
    return 0;


}
    
 
 