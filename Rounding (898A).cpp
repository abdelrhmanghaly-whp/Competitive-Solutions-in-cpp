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
    // el fekra ane 3ndy number set mt2sma 2 < arkam mn 0 l 5, arkam mn 5 l 10, h3ml condition le kol wa7da fehom 
    // take it is example lw ay rakm 22l mn aw equal 5 hn3ml awl condition el hoa hntr7 el rakm el basic mn el rounding res fa daymn hyrg3 l > 0
    // y3ny 493 >> 493 % 10 = 3, 493 - 3 = 490 > true
    // 496 % 10 = 6, = 490 + 10 = 500 > true condition 
 
    int x, rounding_res;
    std::cin >> x; // 5 >> 5432359 >> 113
    rounding_res = x % 10; // 5 >> 5432359 % 10 = , 5 / 9, >> 113 % 10 = 3
    if (rounding_res <= 5) {
        std::cout << x - rounding_res; // 5-5 =0, 113-3 = 110,  "5432359 - 9 = last b 50" 
    }
    else {
        std::cout << x - rounding_res + 10;  // for bigger numbers, example el output el mogod 5432359 - 9 = 5432350 + 10 = 5432360 >> 
    }
    return 0;
}
 
   