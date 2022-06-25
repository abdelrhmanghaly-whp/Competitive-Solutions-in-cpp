#include <iostream>
#include <algorithm>
using namespace std;



int main()
{

	int lvls, x, y;
	// x da awl player, y tany player, lvls de 3add el as2la
	int count = 0;
	// counter looping 3la el as2la bel nsba le el lvls
	int arr[10];
	// testing capcity, momken tzed aw t2el 3ady '' low cap to test ''
	// note: el 2 players can coop- yb2a single array lel atnen

	cin >> lvls >> x >> y;
	// inputs
	for (int i = 0; i < x; i++) 
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i < x + y; i++)
	{
		cin >> arr[i];
	}
	

	for (int i = 0; i < x + y - 1 ; i++) // coop arr
	{
		if (arr[i] != arr[i + 1])  // out of bound *
		{
			count++;
		}
		
	}
	sort(arr, arr + (x + y));
	
	/*outputs, lw 3add el lvls el at7lt == el couter ?
	y3ny x solved 5, y solved nfs el 5 el arkam el duplicated htt4al
	el mfrod el passed == el counter tprint el stataments*/

	if (lvls == count) 
	{
		cout << "i become the guy";

	}
	else
	{
		cout << "oh, my keyboard";
	}
	
	return 0;
	

