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
// thanks to flasha brdo hoa el 7alha :""D
void DoWork(){
    int n;
    cin >> n;
    if (n == 1) {
        cin >> n;
        cout << -1 << endl;
        return ;
    }
    else if (n == 2){
        int x, y;
        cin >> x >> y;
        cout << y << " " << x << endl;
        return ;
    }
    vi a(n), s(n+1);
    for (auto &i : s) i = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        s[a[i]]++;
    }
    int i = 0;
    bool f;
    while (i < n){
        f = false;
        for (int j = 0; j < n+1; j++){
            if (s[j] <= 0) continue;
            if (j == a[i]) {
                if (i == n - 1 && s[j] > 0)  {
                    s[j]--;
                    a[i] = j;
                    swap(a[i], a[i-1]);
                    i++;
                }
                f = true;
                continue;
            }
            s[j]--;
            a[i] = j;
            i++;
            if (f) break;
        }
    }
    for (auto x : a) cout << x << " ";
    cout << endl;
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