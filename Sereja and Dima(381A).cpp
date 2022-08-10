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
    int n, Sereja_Sum = 0, Dima_Sum = 0;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
   
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) { // 1 2 3 4 5 6 7
            Sereja_Sum += std::max(a[0], a[a.size() - 1]); // sum of cards
        }
        else { // 4 5
            Dima_Sum += std::max(a[0], a[a.size() - 1]); // sum of cards
        }
        // rightm,leftm
        if (a[0] > a[a.size() - 1]) {
            a.erase(a.begin() + 0); // << back erase
        }
        else a.erase(a.begin() + a.size() - 1); // nfs el 7war
    } // 16 12
    std::cout << Sereja_Sum << " " << Dima_Sum << std::endl;

	return 0;
}

 
   
    
    