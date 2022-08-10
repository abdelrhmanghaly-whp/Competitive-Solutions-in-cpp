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
    int n, h;
    int sum = 0;
    std::cin >> n >> h;
    std::vector<int>a(n);
    // vector, momken anta tst5dm array 3ady

    for (int i = 0; i < n; i++) { // vector loop
        std::cin >> a[i];
        if (a[i] > h) { // lw el person akbr mn h el fence, s3tha htt7sb b 2, yb2a sum+=1
            sum += 1;
        }
        sum++; // lakn lw 3ady hyt7sb b 1, fa el sum++
        
    }
    std::cout << sum; // res

    return 0;
 }
    
 
 