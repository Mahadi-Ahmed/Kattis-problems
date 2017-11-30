/*
	Open kattis problem Batter up: https://open.kattis.com/problems/batterup
	Mahadi 30-11-17
*/

#include <iostream>

int main() {
	int arraySize = 0;
	double slg = 0 ; 		// This will be the batters slugging percentage
	std::cin >> arraySize;
	int i = 0;
	double slgHits = 0;
	while(std::cin >> slg) {
		if (slg >= 0) {
			slgHits += slg;
			i++;
		}
	}

	std::cout << slgHits / i ;
	return 0;
}




/*
	Indata 1:
	3
	3 0 2 
	3+0+2 / 3 = 1.666666667 = slg -> outdata
	
	Indata 2:
	3
	1 -1 4
	1+4 / 2 = 2.5 = slg -> outdata

	Indata 3:
	11
	-1 -1 -1 -1 0 0 0 0 0 0 1
	1 / 7 = 0.142857143 = slg -> outdata
*/