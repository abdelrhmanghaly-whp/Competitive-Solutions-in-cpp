#include<bits/stdc++.h>
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
#define fi(i,n) for(int i=0; i<n; i++)
#define fj(j,n) for(int j=0; j<n; j++)
typedef long long ll;
typedef std::vector<int> vr;
typedef std::vector<std::vector<int>> vvr;
typedef std::vector<std::string> vss;
typedef std::vector<std::pair<int,int> > vpi;
typedef std::pair<int,int> pr;
typedef std::map<int,int> mp;
 
 
ll gcd(int a, int b) {
  return (b == 0 ? a : gcd(b, a % b));
}
 
 
ll lcm(int a, int b) {
    return (a / std::__gcd(a, b)) * b;
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
    std::string x;
    std::cin>>x;
    ll c =0;
    fi(i,n){
        vr v(10);
        int uni = 0;
        int mxval= 0;
        for(int j=i; j<std::min(i+200,n); j++){
            int current=x[j]-'0';
            if(v[current]==0)
                uni++;
                v[current]++;
                // v[current]-uni++;
                mxval=std::max(mxval,v[current]);
                if(mxval <= uni){
                    c++;
                }
            }
        }
        std::cout<<c<<std::endl;
};
 
int main()
{
      localspeedghalyislegitatrash
      int t;
      std::cin >> t;
      while (t--) {
        sol();
    }
    return 0;
}