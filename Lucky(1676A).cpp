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
void solution() {

    std::string x;
    std::cin >> x;

    if (x[0] + x[1] + x[2] == x[3] + x[4] + x[5]) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

}
int main(){
    int t = 1;
    std::cin >> t;
    while (t--) {
        solution();
    }
    return 0;
    
}