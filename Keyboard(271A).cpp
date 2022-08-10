#include<iostream>
#include<algorithm>
 
 
using namespace std;
std::string a = "qwertyuiopasdfghjkl;zxcvbnm,./";
 
int main()
{
	char c;
	std::cin >> c;
	std::string s;
	std::cin >> s;
	for (int i = 0; i < s.length(); i++)
		if (c == 'R')
			std::cout << a[a.find(s[i]) - 1];
		else
			std::cout << a[a.find(s[i]) + 1];
	cout<< endl;
	return 0;
}