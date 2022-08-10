#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#include<cctype>
#include<cstring>
#include<map>
#include<set>
#include<climits>
#include<iomanip>
#include<queue>
#include<stack>
#include<vector>

int main()
{
   long long int n;
   std::cin>>n;
   std::cout<<(n%2==0? (n/2)*1:((n/2)*1)-n)<<std::endl;
   /*
   int res;
   res = n/2-n*(n%2);
   std::cout<<res;
   */

    return 0;
}