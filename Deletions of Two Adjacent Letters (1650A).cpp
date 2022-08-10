#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include <string>
int main()
{
    // test function
    int t;
    std::cin >> t;
    while (t--)
    {

        // body
        std::string x;
        char y;
        std::cin >> x >> y;
        bool flag = false;
        for (int i = 0; i < x.size(); i++) {
            if (x[i] == y) {
                if (i % 2 == 0) {
                    flag = true;
                    break;
                }
            }
        }
        std::cout << (flag? "YES" : "NO") << std::endl;
    }

        return 0;
}