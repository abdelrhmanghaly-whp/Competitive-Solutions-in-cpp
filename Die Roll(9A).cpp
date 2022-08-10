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
    int y, w, range, count = 0;
    std::cin >> y >> w; // 4 2
    if (y > w || y == w) { // 4 > 2, range = 4
        range = y; // swap and hold
    }
    else {
        range = w; // swap and hold
    }
    for (int i = range; i <= 6; i++){ // 4 6
        count++;
    }
    if (count == 0) { // false

        std::cout << 0 << "/" << 1;
    }
    else if (count == 6) { // 6/6
        std::cout << 1 << "/" << 1;
    }
    else if (count == 5) {// 5/6
        std::cout << 5 << "/" << 6;
    }
    else if (count % 2 == 0) { // 2 4 % 2 = 0, 4/2 2/4
        std::cout << count / 2 << "/" << 6 / 2;
    }
    else { // nfs el 7war
        std::cout << count / count << "/" << 6 / count;
    }

    return 0;
}