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
    std::string s, t;
    int index_mv = 0;
    std::cin >> s >> t;
    for (int i = 0; i < t.size(); i++) {
        if(s[index_mv] == t[i]){
            index_mv++;
        }
        
    }
    index_mv++;
    std::cout << index_mv;
    
    return 0;
}

 
   