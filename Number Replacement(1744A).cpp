#include<bits/stdc++.h>
#define speed std::ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
void solution(){
   // a < c , b < d
   // a < x <= c , b < y <= d
   // x <= a,b , y <= b,d
   int n;
   bool f = 0;
   std::map<int,char>m;
   std::string x;
   std::cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
    std::cin>>arr[i];
   }
   /*
   5
   2 3 2 4 1
   cacta*/
   std::cin>>x;
   for(int i=0; i<n; i++){
    if(m.find(arr[i]) != m.end()){
        if(m[arr[i]]!= x[i]){
            f=1; // t
            break;
        }
    }
    m.insert({arr[i],x[i]});
   }
   if(f)
    std::cout<<"NO"<<std::endl;
   else
    std::cout<<"YES"<<std::endl;
 
 
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