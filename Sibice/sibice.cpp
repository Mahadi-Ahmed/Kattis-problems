/*
	Open kattis problem Sibice: https://open.kattis.com/problems/sibice
	Mahadi 01-12-17
*/

#include <iostream>
#include <cmath>

int main(){
	double n = 0;
	double w = 0;
	double h = 0;
	std::cin >> n;
	std::cin >> w;
	std::cin >> h;
	double max = sqrt((w*w)+(h*h));
	double match = 0;
	while(std::cin >> match) {
		if (match <= max) {
			std::cout << "DA\n";
		} else {
			std::cout << "NE\n";
		}
	}
	return 0;
}


/*
	Does it fit inside the box ?
	first input is n, number of test cases followed by w width and h height
	example
	5 3 4
	3
	4
	5
	6
	7
	sqrt(3^2 + 4^2) is the max length of each match
*/
