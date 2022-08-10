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
    int result, sum = 0, pointer = 97;
    for (int i = 0; i < x.size(); i++) {
        result = abs(x[i] - pointer);
        if (result <= 13) { // num theory
            sum += result;
        }
        else {
            sum += (26 - result); 
        }
        pointer = x[i];

    }
    std::cout << sum;

    return 0;
}

 