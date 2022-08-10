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
    int n, x;
    int anton_count = 0, danik_count = 0;
    std::string z;
    std::cin >> n >> z;
    for (int i = 0; i < n; i++) {
        if (z[i] == 'A') {
            anton_count++;
        }
        else {
            danik_count++;
        }
    }
    if (anton_count > danik_count) {
        std::cout << "Anton" << std::endl;
    }
    else if (anton_count < danik_count) {
        std::cout << "Danik" << std::endl;
        
    }
    else {
    std::cout << "Friendship" << std::endl;
    }
    return 0;

 }
   
    
    