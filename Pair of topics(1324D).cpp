include<bits/stdc++.h>
#include<cmath>
#define localspeedghalyislegitatrash std::ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define lli long long int
#define all(x) ((x).begin()),((x).end())
#define Yes std::cout<<"YES"<<std::endl;
#define No std::cout<<"NO"<<std::endl;
#define ft first
#define sd second
#define pb push_back
#define pf push_front
#define em emplace
#define emb emplace_back
#define fi(i,n) for(int i=0; i<n; i++)
#define fj(j,n) for(int j=0; j<n; j++)
typedef long long ll;
typedef std::vector<int> vr;
typedef std::vector<std::vector<int>> vvr;
typedef std::vector<std::string> vss;
typedef std::vector<std::pair<int,int> > vpi;
typedef std::pair<int,int> pr;
typedef std::map<int,int> mp;
typedef std::deque<int> dq;
typedef std::queue<int> q;
typedef std::stack<int> sk;
typedef std::set<int> st;
 
 
 
 
ll gcd(int a, int b) {
  return (b == 0 ? a : gcd(b, a % b));
}
 
 
ll lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
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
 
void sol(){
    int n;
    std::cin>>n;
    vr a, b;
    fi(i,n){
        int p;
        std::cin>>p;
        a.emb(p);
    }
    fi(i,n){
        int p;
        std::cin>>p;
        b.emb(a[i]-p);
    }
    // all(a);
    std::sort(b.begin(),b.end());
    ll count=0;
    fi(i,n){
        if(b[i]>0){
            int it=lower_bound(b.begin(),b.end(), -b[i]+1)-b.begin();
            count+=(i-it);
        }
    }
    std::cout<<count<<std::endl;
};
 
int main()
{
      localspeedghalyislegitatrash
     // int t;
      //std::cin >> t;
     // while (t--) {
        sol();
  //  }
    return 0;
}