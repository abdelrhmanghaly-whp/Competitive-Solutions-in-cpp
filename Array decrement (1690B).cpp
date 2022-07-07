#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
int main()
{


    // el mfrod hstore el diff f array tany, b7es ane lma agy a4of fe aktr mn 1 unique ytl3ly el NO answer
    // note brdo an el diff > el mogod 3ndy el answer >> NO
        // estab
        int t;
        std::cin >> t;
        while (t--)
        {
            // intia
            int n;
            std:: cin>> n;
            std::vector<int> a(n), b(n);

            // vectors loop
            for (int i = 0; i < n; i++) {
                std::cin >> a[i];
            }
            for (int i = 0; i < n; i++) {
                std::cin >> b[i];
            }
            // max
            int num = 0;
            for (int i = 0; i < n; i++) {
                num = std::max(num, a[i] - b[i]);
            }
            for (int i = 0; i < n; i++) {
                a[i] = std::max(a[i] - num, 0); 
            }
            // h8zn el sol ano daymn true, aloop 3leh, if else statament w bs
            bool sol = true;
            for (int i = 0; i < n; i++) {
                if (a[i] != b[i]) {
                    sol = false;
                    break; // break out the loop 3shan el time mebozsh m3aya w a5od time limit ze awl submission 
                }
            }
            if (sol) {
                std::cout << "YES" << '\n';
            }
            else {
                std::cout << "NO" << '\n';
            }
        }

        return 0;
}


