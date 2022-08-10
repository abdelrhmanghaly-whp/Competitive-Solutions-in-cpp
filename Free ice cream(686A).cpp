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

int main(){

    long long int n, x, count = 0;
    long long int current_pp;
    char c;
    std::cin >> n >> x;
    for (int i = 0; i < n; i++) {
        std::cin >> c >> current_pp;
        if (c == '+') {
            x += current_pp;
        }
        else {
            if (x >= current_pp) {
                x -= current_pp;

            }
            else {
                count++;
            }
        }
    }
    std::cout << x << " " << count;
	return 0;
}