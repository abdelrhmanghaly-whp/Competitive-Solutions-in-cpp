#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include <string>
#include <cctype>
#include <iostream>
#include <cstring>
#include<map>
#include <unordered_set>
#include<set>
#include<climits>

int main(){

	int n, b, d;
	int aux_var;
	int sum = 0;
	int count = 0;
	std::cin >> n >> b >> d;
	for (int i = 0; i < n; i++) {
		std::cin >> aux_var;
		if (aux_var <= b) {
			sum += aux_var;

		}
		if (sum > d) {
			sum = 0;
			count++;
		}

	}
	std::cout << count << std::endl;


	return 0;
}