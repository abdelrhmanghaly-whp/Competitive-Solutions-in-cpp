#pragma GCC optimize("-O2")

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

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
const int N = 3e5 + 5;
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
    return (b == 0 ? a : gcd(b, a % b));
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


void yn(bool n) {
    if (n) {
        std::cout << "YES" << endl
    } else {
        std::cout << "NO" << endl
    }
}


bool checkDiv(std::string &n, ll k) { // checks divs up to 10^inf
    ll rem = 0;
    faut(e, n)rem = ((rem * 10) + e - '0') % k;
    return rem == 0;
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


int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};



void Solution(){
    int n;std::cin>>n;
    std::string x;std::cin>>x;
    int ones=0;
    faut(e,x)ones+=(e=='1');
    std::string res(n+1,'0');
    int start=0;
    fi(i,n/2)start+=(x[i]!=x[n-i-1]);
    for(int i=start; i<=n-start;i=i+1+(n%2==0)) res[i]='1';
    std::cout<<res<<endl
}


int main() {
    abuser();
    int t = 1;
    std::cin >> t;
    while (t--) {
        Solution();
        /* if(t){
             std::cout<<endl
         }*/
    }
}