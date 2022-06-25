#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
	int x;
	string s;
	int count = 0;
	cin >> x >> s;
	for (int i = 0; i < x; i++)
	{
		if (s[i] == s[i + 1]) {
			count++;
		}
	}
	cout << count;
 
	
	
}