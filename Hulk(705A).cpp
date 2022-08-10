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
    // n 1 > i hate it  1%2=1 2%2=0 3%2=1 4%2=0 5%2=1 menf3sh abd2 el i b = 0, httl3 false condition lazm 1 ' 2
    // n 2 > i hate that \ i love it >> 2 cond
    // n 3 > i hate that \ i love that \ i hate it >> 3 cond + that + ut
    // y3ny el it htb2a already printed b3d i love - i hate "out of looping"
    // amta aprint el that ? ..
    
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        // <= 3shan fel ms2la 2ayly inclusive
        if (i % 2) {
            std::cout << "I hate ";
        }
        else {
            std::cout << "I love ";
        }
        if (i < n) {
            std::cout << "that ";
        }
        // I hateitI loveitI hateit
        
    }
    std::cout << "it\n";\
}

   
    