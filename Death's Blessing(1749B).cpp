#include<bits/stdc++.h>
#define speed std::ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define lli long long int
void solution(){
    lli n;
    std::cin>>n;
    std::vector<lli>a(n);
    std::vector<lli>b(n);
    lli count=0;
    lli sthvar, res;
    for(int i=0; i<n; i++){
        std::cin>>a[i];
    }
    for(int i=0; i<n; i++){
        std::cin>>b[i];
    }
    sthvar=b[0];
    for(int i=0; i<n; i++){
        count+=a[i]+b[i];
        if(b[i]>sthvar){
            sthvar=b[i];
        }
 
    }
    res= count-sthvar;
    std::cout<<res<<std::endl;
 
};
 
int main()
{
     speed
     int t;
     std::cin >> t;
     while (t--) {
        solution(); // cringe sol inc
    }
    return 0;
}