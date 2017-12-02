/*
    Open kattis problem Bijele: https://open.kattis.com/problems/bijele
    Mahadi 02-12-17
*/

#include <iostream>

int main() {
	int amountEachMonth = 0;
	int rMonth = 0;
	std::cin >> amountEachMonth;
	int months = 0;
	std::cin >> months;
	int m = 0;
	while(std::cin >> m){
		rMonth += amountEachMonth - m;
	}

	std::cout << rMonth + amountEachMonth;
	return 0;
}

/*
	Example data:
	10 - X -> amount of megabytes he gets per month
	3	- n -> amount of months we know how much he has spent
	4 
	6 
	2
	(10-4)+(10-6)+(10-2) + 10 = 28 
*/