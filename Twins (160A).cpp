#include <iostream>
#include <algorithm>


int main()
{
	// lw ana a5t coin b value akbr, hdmn ane hb2a a7sn mn el coins el 22l 3shan tdeny el max val ll coin >
	// second sample mbyana an fe 2 coins kol coin val =1, fa el mfrod ba5od akbr val? el hya 2 wla a5od el feha 1 w 1 ? useless sa7 ?
	// summarize >> coin b value akbr a7sn mn seprated coins bvalue as8r, l2ny momken a5od wa7da big b 4 aw afdl agm3 ll 4 3la 4 coins:
	
	// intia n of coins, array of coins, sum
	int n;
	std::cin >> n;
	int* c = new int[n];
	int sum = 0;

	// llcoins
	for (int i = 0; i < n; i++) {
		std::cin >> c[i];
		sum += c[i];


	}
		sum = sum / 2;
	
	std::sort(c, c + n);
	int curr_sum = 0;
	int count = 1;
	// de la5oya
	for (int i = n - 1; i >= 0; i--) {

		curr_sum += c[i];
		if (curr_sum <= sum) {
			count++;
		}
		else
			break;
	}
	// 4 mrat 8alat bsbb de, """
	std :: cout << count;
	
	return 0;

	


}
