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
    // located at point x(x>0), 5 moves counted m3aya b 1
    // optimal ben 3.5 w 4 hyb2a 3, l2no akeed msh hywsl abl 3 moves
    int n;
    int x = 0;
    std::cin >> n;
    if (n % 5 == 0) { // 1 % 5 = 1 so on l2y rakm m3ada el 5, 5%5 =0
        x = n / 5; // yb2a htd5ol hna, 5/5 = 1
    }
    else { // 12 % 5 = 2
        x = n / 5 + 1; // hyd5ol fel else yb2a 12/5+1 = 3,4 taken as int yb2a hyrg3 3
    }
    std::cout << x;

    return 0;
}
    
 
 