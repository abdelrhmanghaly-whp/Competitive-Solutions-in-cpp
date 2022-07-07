#include<iostream>
#include<algorithm>



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
	std::cout<< endl;
	return 0;
}
