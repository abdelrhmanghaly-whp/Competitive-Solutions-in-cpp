#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define pb push_back
#define pf push_front
#define p push
typedef bool flag;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;
// thanks to flasha btw he solved it
void DoWork(){
    int n, m, k;
    cin >> n >> m >> k;
    list<int> a, b;
    for (int i = 0; i < n; i++){
        char x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < m; i++){
        char x;
        cin >> x;
        b.push_back(x);
    }

    a.sort();
    b.sort();
    string res = "";
    int moves[2] = {0, 0};
    while (!a.empty() && !b.empty()){
        if (*a.begin() < *b.begin() && moves[0] < k){
            res += (char) a.front();
            moves[0]++;
            a.pop_front();
            moves[1] = 0;
        }
        else if (moves[1] < k){
            res += (char) b.front();
            moves[1]++;
            b.pop_front();
            moves[0] = 0;
        }
        else {
            res += (char) a.front();
            moves[0]++;
            a.pop_front();
            moves[1] = 0;
        }
    }
    cout << res << endl;
}


int main() {
    fast
    int t = 1;
    cin >> t;
    while (t--){
        DoWork();
    }
    return 0;

}