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
#define em emplace
#define emb emplace_back
#define fi(i,n) for(int i=0; i<n; i++)
#define fj(j,n) for(int j=0; j<n; j++)
#define fref(x,y) for(auto &(x) : (y))
#define faut(x,y) for(auto (x) : (y))
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
    vr v(n);
    fi(i,n){
        std::cin>>v[i];
    }
    // int mxvalue = INT_MAX, mxvalue_2= INT_MAX;
    int mxvalue = 0, mxvalue_2= 0;
    int pos;
    fi(i,n){
        if(v[i]>mxvalue){
        mxvalue=v[i];
        pos=i;
        }
    }
    //std::sort(v.begin(),v.end());
    fi(i,n){
        if(v[i]>=mxvalue_2 && v[i]<=mxvalue){
            if(i==pos)
                continue;
                mxvalue_2=v[i];
        }
    }
   // bool f=0;
    fi(i,n){
        if(v[i]==mxvalue)
            std::cout<<mxvalue-mxvalue_2<<" ";
        if(v[i]-mxvalue == 0)
            continue;
            std::cout<<v[i]-mxvalue<<" ";
    }
    std::cout<<std::endl;
 
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