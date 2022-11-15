#include<bits/stdc++.h>
#define speed std::ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define lli long long int
void solution(){
    int n,m;
    std::cin>>n>>m;
    int arr[m][2];
    for(int i=0; i<m; i++){
        std::cin>>arr[i][0];
        std::cin>>arr[i][1];
    }
        if(n>m){
            std::cout<<"YES"<<std::endl;
        }
 
        else{
            std::cout<<"NO"<<std::endl;
        }
 
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