#include<bits/stdc++.h>
#include<math.h>
#include <iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve() {
    set<char>diff;
        string s; cin >> s;
    for (auto i : s) {
        diff.insert(i);
    }
    int ok = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != s[i % (int)diff.size()]) ok = 0;
    }
    cout << (ok ? "YES" : "NO") << "\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout <<fixed;
    cout <<setprecision(10);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}
// ms2la shrmota msh 3ayz a4ofha tany