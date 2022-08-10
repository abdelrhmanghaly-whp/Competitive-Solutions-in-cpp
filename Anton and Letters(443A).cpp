#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include <string>
#include <cctype>
#include <iostream>
#include <cstring>
#include<map>
#include <unordered_set>
#include<set>
#include<climits>


using namespace std;

int main(){
    std::set <char> chars;
    std::string x;
    std::getline(cin, x);
    for (int i = 0; i < x.size(); i++) {
        if (isalpha(x[i])) {
            chars.insert(x[i]);
        }
    }
    std::cout << chars.size();

  
    return 0;
}