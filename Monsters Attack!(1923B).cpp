#pragma GCC optimize("-O2")

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, std::less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define lli long long int
#define all(x) std::sort(((x).begin()),((x).end()))
#define rev(x) std::reverse(((x).begin()),((x).end()))
#define nall(x) x.begin(),x.end()
#define endl '\n';
#define Yes std::cout<<"YES"<<endl
#define No std::cout<<"NO"<<endl
#define stop(n) return void(std::cout<<n<<'\n');
#define ft first
#define sd second
#define pb push_back
#define pf push_front
#define em emplace
#define emb emplace_back
#define fi(i, n) for(int i=0; i<n; i++)
#define fj(j, n) for(int j=0; j<n; j++)
#define fstr(q, x) for(int (q)=0; (q)<(x).size(); q++)
#define fref(x, y) for(auto &(x) : (y))
#define faut(x, y) for(auto (x) : (y))
#define out(v) for(auto&e:v){std::cout<<e<<' ';}std::cout<<endl
#define in(v) for(auto&e:v){std::cin>>e;}
#define invect(n, v) for(int i=0; i<(n); i++)std::cin>>v[i];
typedef long long ll;
typedef unsigned long long ull;
typedef bool flag;
typedef std::vector<int> vr;
typedef std::vector<ll> vrl;
typedef std::vector<std::vector<int>> vvr;
typedef std::vector<std::string> vss;
typedef std::vector<std::pair<int, int>> vpi;
typedef std::vector<std::pair<ll, ll>> vpill;
typedef std::vector<int>::iterator vit;
typedef std::pair<int, int> pr;
typedef std::map<int, int> mp;
typedef std::map<char, int> mch;
typedef std::map<std::string, int> mps;
typedef std::unordered_map<int, int> ump;
typedef std::priority_queue<int> piq;
typedef std::deque<int> dq;
typedef std::stack<int> sk;
typedef std::set<int> si;
typedef std::set<char> sc;
typedef std::unordered_set<int> ust;
const ll mod = 1e9 + 7, MOD = 998244353, MAXM = 9e5 + 5, INF = INT_MAX;
const long double PI = acos(-1);


void abuser() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
#ifdef Clion
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
    freopen("ideal.in", "r", stdin), freopen("ideal.out", "w", stdout);
#endif
}


ll gcd(int a, int b) {
    return (b == 0 ? abs(a) : gcd(b, a % b));
}


ll lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}


ll lowbit(ll x) {
    return x & (-x);
}


ll fact(ll a) {
    if (a == 1) {
        return 1;
    }
    return a * fact(a - 1);
}


ll nPr(ll n, ll m) {
    return fact(n) / fact(n - m);
}


ll nCr(ll n, ll m) {
    return fact(n) / (fact(m) * fact(n - m));
}


ll digitsNumbers(ll n) {
    int res = 0;
    while (n != 0) {
        n /= 10;
        res++;
    }
    return res;
}


ll digitsSum(int x) {
    int res = 0;
    while (x) {
        res += x % 10;
        x /= 10;
    }
    return res;
}


ll power(int a, int b) {
    if (b == 0) {
        return 1;
    }
    ll p = power(a, b / 2);
    if (b % 2) {
        return (a * p * p);
    } else {
        return (p * p);
    }

}


ll fp(ll n, ll pow) {
    ll res = 1;
    while (pow) {
        if (pow & 1) { // ==1
            res *= n,
                    res %= mod,
                    pow--;
        } else {
            n *= n, n %= mod;
            pow >>= 1; // p/=2;
        }
    }
    return res;
}


ll mul(ll a, ll b){
    return ((a % mod) * (b % mod)) % mod;
}


ll add(ll a, ll b) {
    return ((a % mod) + (b % mod)) % mod;
}


ll sub(ll a, ll b) {
    return ((a % mod) - (b % mod) + mod) % mod;
}


bool isPrime(ll x) {

    if (x == 1 || x == 0) {
        return false;
    }

    for (int i = 2; i < x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}


int fibo(int n) {
    /*if (n <= 1) {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);*/
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}


void yn(bool n) {
    if (n) {
        std::cout << "YES" << endl
    } else {
        std::cout << "NO" << endl
    }
}


void sieve(int n) {
    std::vector<bool> prime;
    prime = std::vector<bool>(n + 1, 1);
    for (int i = 2; i * i < n; i++) {
        if (prime[i]) {
            for (int j = i * 2; j < n; j += i) {
                prime[j] = 0;
            }
        }
    }
}


ll divisorsCount(ll n) {
    bool prime[n + 1];
    memset(prime, 1, sizeof(prime));
    for (int i = 2; i * i < n; i++) {
        if (prime[i] == 1) {
            for (int j = i * 2; j < n; j += i) {
                prime[j] = 0;
            }
        }
    }
    int res = 1;
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            int c = 0;
            if (n % p == 0) {
                while (n % p == 0) {
                    n /= p;
                    c++;
                }
                res *= (c + 1);
            }
        }
    }
    return res - 1;
}


vrl getDivisors(ll n){
    vrl nums;
    for(ll i=1; i*i<n; i++){
        if(n%i==0){
            nums.pb(i);
            if(i*i!=n)nums.pb(n/i);
        }
    }
    return nums;
}


bool checkDiv(std::string &n, ll k) { // checks divs up to 10^inf
    ll rem = 0;
    faut(e, n)rem = ((rem * 10) + e - '0') % k;
    return rem == 0;
}


int min_index(vr a) {
    int idx = -1;
    int val = INT_MAX;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < val) {
            val = a[i];
            idx = i;
        }
    }
    return idx;
}


int max_index(vr a) {
    int idx = -1;
    int val = INT_MIN;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > val) {
            val = a[i];
            idx = i;
        }
    }
    return idx;
}


bool lucky(int i) { // string split
    /* std::string x = std::to_string(i);
     for(int i=0; i<x.size(); i++){
         if(!(x[i]=='4' || x[i]=='7')){
             return false;
         }
     }
     return true;*/

    while (i) {
        if (i % 10 - 4 && i % 10 - 7) return 0;
        i /= 10;
    }
    return 1;
}


bool isPalindrome(std::string x) {
    std::string q = x;
    rev(q);
    if (x == q) {
        return true;
    } else {
        return false;
    }
}


bool check(int m, int n, vr &v) { // bst sc
    return true;
}


const int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
const int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};




void Solution(){
    int n,k;std::cin>>n>>k;
    vpi v(n+1);
    for(int i=1; i<=n; i++)std::cin>>v[i].sd;
    for(int i=1; i<=n; i++){
        std::cin>>v[i].ft;
        v[i].ft=abs(v[i].ft);
    }
    std::sort(v.begin()+1, v.end(), [&](const pr& a, const pr& b) {
        return a.first < b.first;
    });
    int cond=0,ptr=1;
    flag can=1;
    while(can){
        int tmp=k;
        while(ptr<=n && tmp){
            if(v[ptr].ft-cond==0)stop("NO");
            int curr=v[ptr].sd,nxt=tmp;
            if(tmp>=curr)tmp-=curr;
            else tmp=0;
            if(v[ptr].sd<nxt)v[ptr].sd=0;
            else v[ptr].sd-=nxt;
            if(v[ptr].sd==0)ptr++;
        }
        if(ptr>n)break;
        cond++;
    }
    std::cout<<"YES"<<endl
}



int main() {
    abuser();
    int t = 1;
    std::cin >> t;
    // calc();
    while(t--){
        Solution();
        // if(t)std::cout<<endl
    }
    return 0;
}