#include <iostream>
using namespace std;

int main() {
    int n, reversed Number = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0) {
        remainder = n%10;
        reversed Number = reversed Number*10 + remainder;
        n /= 10;
    }

    cout << "reversed Number = " << reversed Number;

    return 0;
}