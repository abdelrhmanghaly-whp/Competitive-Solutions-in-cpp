#include<iostream>
#include<algorithm>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        // lazm arkz 3la: ana h3ml bel zabt 3 statament, gamel haktb eh fehom
        // el mfrod lw el input % 3 besawy 0 yb2a ana 3ndy el n/3, n/3+1 = spaces, wel minus b new line
        // tab lw el mod b 1? 3ndy brdo n/3, w n/3+2 el mra de = spaces, w bdl +1, tb2a -1, n/3-1
        // 2flt el else el mfrod tb2a ashl haga 7arfen hload up el 2 im stataments w agy abd2 a3ml operating ll spaces wel new line tany
        int n;
        std::cin >> n;
        if (n % 3 == 0)
        {
            std::cout << n / 3 << " ";
            std::cout << n / 3 + 1 << " ";
            std::cout << n / 3 - 1 << "\n";
        }
        else if (n % 3 == 1)
        {
            std::cout << n / 3 << " ";
            std::cout << n / 3 + 2 << " ";
            std::cout << n / 3 - 1 << "\n";
        }
        else
        {
            std::cout << n / 3 + 1 << " ";
            std::cout << n / 3 + 2 << " ";
            std::cout << n / 3 - 1 << "\n";
        }
    }
    return 0;
}
