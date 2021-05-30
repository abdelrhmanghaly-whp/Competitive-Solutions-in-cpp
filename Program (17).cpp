#include <iostream>
using namespace std;
// Program that takes 10 numbers from the user and print their average (4)

int main()
{
  int num;
  float input, sum=0, avg;
  cout << "Enter Your Numbers " <<endl;


  cin >> num; 

    for(int i = 1; i <= num; i++){
      cin >> input;
      sum += input;
    }

  avg = sum / num;
  cout << "average = " << avg << endl;

return 0;
}