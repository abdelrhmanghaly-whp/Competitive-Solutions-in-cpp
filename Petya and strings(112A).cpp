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
    std::string x, y;
    std::cin >> x;
    std::cin >> y;
    // loop 3la el strings, 
    for (int i = 0; i < x.size(); i++) {
        x[i] = tolower(x[i]); // momken anta t5leha tolower 3ady, el mohm t5ly el strings united l2no katb fel case msh htfr2, el mohm y2ma lower kolo, y2ma upper kolo
    }
    for (int i = 0; i < y.size(); i++) {
        y[i] = tolower(y[i]);
    }
            if (x == y) {
                std::cout << 0 << std::endl; // lw equal yb2a b 0
            }
            if (x > y) {
                std::cout << 1 << std::endl; // lw awl string akbr yb2a 1
            }
            if (x < y) {
                std::cout << -1 << std::endl; // el tany b -1
            }
  
    return 0;
}
    
 