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
    std::string x;
    std::cin >> x;
    std::set<char>letters;

    for (int i = 0; i < x.length(); i++) {
        letters.insert(x[i]);
    }
    if (letters.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    }
    else {
        std::cout << "IGNORE HIM!" << std::endl;
    }
    return 0;

 }