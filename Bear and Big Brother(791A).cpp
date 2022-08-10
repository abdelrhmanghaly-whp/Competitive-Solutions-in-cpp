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
    int a, b;
    std::cin >> a >> b;
    int count = 0;
   
    while (a <= b) {
        a *= 3;
        b *= 2;
        count++;
       }

    std::cout << count;
 }
   
    