#include<bits/stdc++.h>
#define speed std::ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define lli long long int
void solution(){
   // a < c , b < d
   // a < x <= c , b < y <= d
   // x <= a,b , y <= b,d
   /*Choose the number 2 and the letter c. After that a=[c,3,c,4,1].
    Choose the number 3 and the letter a. After that a=[c,a,c,4,1].
    Choose the number 4 and the letter t. After that a=[c,a,c,t,1].
    Choose the number 1 and the letter a. After that a=[c,a,c,t,a].*/
    lli n,q;
    lli sum=0, sofe=0, sofo=0;
    int x,y;
    std::cin>>n>>q;
    std::vector<lli>a(n);
    // The following q lines contain queries as two integers typej and xj (0≤typej≤1, 1≤xj≤104).
    for(int i=0; i<n; i++){
        std::cin>>a[i];
        if(a[i] % 2){
            sofo++;
        }
        else{
            sofe++;
        }
        sum+=a[i];
    }
    int res=q;
    while(res--){
        std::cin>>x>>y;
        if(x){
            sum+=(sofo * y);
        }
        else{
            sum+=(sofe * y);
        }
            std::cout<<sum<<std::endl;
        if(y % 2){
            if(!x){
                sofo =n;
                sofe=0;
            }
            else{
                sofo =0;
                sofe=n;
            }
        }
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