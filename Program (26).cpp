#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter Your Number:" << endl;
  cin >> num;
  cout << endl;

 int x = 1;
  for (int i = 1; i <= num; i++) {
    for (int j = 1; j <= i; j++) {
      cout << x++ << " ";
    }
    cout << endl;
  }


  return 0;
}