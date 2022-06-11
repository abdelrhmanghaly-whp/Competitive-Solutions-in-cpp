#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
 
    int sum(string s){
        int total=0;
        for(int i=0;i<s.size();i++){
            total+=(s[i]-'a'+1);
        }
        return total;
    }
    void solve (){
        string s;
        cin>>s;
        int n = s.size();
        if(n==1) cout<<"Bob "<<((int)s[0]-'a'+1)<<"\n";
        else{
            if(n%2==0) cout<<"Alice "<<sum(s)<<"\n";
            else{
                if(s[0]>s[n-1]) cout<<"Alice "<<sum(s.substr(0,n-1))-((int)s[n-1]-'a'+1)<<"\n";
                else cout<<"Alice "<<sum(s.substr(1))-((int)s[0]-'a'+1)<<"\n";
            }
        }
    }
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);

        int t=1;
        cin>>t;
        for(int i=1;i<=t;i++){
            solve();
        }
        return 0;
    }