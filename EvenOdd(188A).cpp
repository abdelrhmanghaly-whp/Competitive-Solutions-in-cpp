#include<iostream>
#include<algorithm>
 
 
int main()
{
	// anta htprint 3la awl rakm el range bta3hom, bs note anha sorted odd el awl
	// hn2ol m3ana arkam mn 1 l 5 >> 
	// el mfrod 1 2 3 4 5 , hprint el arkam sorted odd b3den even, yb2a 1 3 5 [2] 4
	// >> el mfrod b3d ma mbrtbhom ha5od input y2oly el rakm el mogod feha, nktb 4 msln ka input, el output hyb2a 2
	// 
	
 
	long long n, k;
	std::cin >> n >> k;
 
	if ((n + 1) / 2 >= k) {
 
		std::cout<< k * 2 - 1 << std::endl; // >> de kda 3shan t5ls el arkam el even
	}
	else
	{
		std::cout << (k - (n + 1) / 2) * 2 << std::endl;
 
	}
     
}