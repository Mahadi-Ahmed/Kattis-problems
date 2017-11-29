/*
	Open kattis problem Cold-puter Science: https://open.kattis.com/problems/cold
	Mahadi 30-11-17
*/

#include <iostream>

int main() {
	int arraySize = 0;
	int temperatures;
	int i = 0;
	std::cin >> arraySize;
	int arrayOfTemps[arraySize];
	while(std::cin >> temperatures) {
		arrayOfTemps[i] = temperatures;
		i++;
	}

	int numOfColdDays = 0; 								// This will store number of days which is under 0 i.e negative
	for (int j = 0; j < arraySize; ++j) {
		if (arrayOfTemps[j] < 0) {
			numOfColdDays += 1;
		}
	}
	std::cout << numOfColdDays;
	return 0;
}