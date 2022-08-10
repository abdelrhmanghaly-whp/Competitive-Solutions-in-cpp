#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include <string>
#include <cctype>
#include <iostream>
#include <cstring>
int main()
{
    // key is an ykon fe nested loop, required ane atl3 
    // fun
    int t;
    std::cin >> t;
    while (t--)
    {
        // body
        std::string x;
        std::cin >> x;
        int count = 0;
        for (int i = 0; i < x.size(); i++)
            if (x[i] != '0')
                count++;
        std::cout << count << std::endl;
        for (int i = 0; i < x.size(); i++)  // nl 2
        {
            if (x[i] != '0')
            {
                std::cout << x[i];
                for (int j = i + 1; j < x.size(); j++) // obv
                {
                    std::cout << '0';
                }
                std::cout << " "; // a7sn mn el \n lol
            }
        }
        std::cout << std::endl;
    }
     
    return 0;
}