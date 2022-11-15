#include<bits/stdc++.h>
#include<cmath>
#define Ghaly std::ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define lli long long int
#define all(x) ((x).begin()),((x).end())
#define Yes std::cout<<"YES"<<std::endl;
#define No std::cout<<"NO"<<std::endl;
#define ft first
#define sd second
#define fi(i,n) for(int i=0; i<n; i++)
#define fi(j,n) for(int j=0; j<n; j++)
typedef long long ll;
typedef std::vector<int> vr;
typedef std::vector<std::vector<int>> vvr;
typedef std::vector<std::string> vss;
typedef std::vector<std::pair<int,int> > vpi;
typedef std::pair<int,int> pr;
typedef std::map<int,int> mp;
 
 
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
 
 
void el3bya7ag(){
    int n;
    std::cin>>n;
    vr a(n);
    fi(i,n){
        std::cin>>a[i];
    }
        if(a[0]<a.back()) Yes
        else No
};
 
int main()
{
     Ghaly
     int t;
     std::cin >> t;
     while (t--) {
        el3bya7ag(); // cringe sol inc
    }
    return 0;
}