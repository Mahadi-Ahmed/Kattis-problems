/*
	Open kattis problem Stuck in a timeloop: https://open.kattis.com/problems/hissingmicrophone
	Mahadi 29-11-17
*/

#include <iostream>

int main() {
	int inputValue = 0;
	std::cin >> inputValue;
	for (int i = 1; i < inputValue + 1 ; ++i){
		std::cout << i << " Abracadabra\n";
	}
	return 0;
}