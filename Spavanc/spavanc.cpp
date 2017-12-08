/*
	Open kattis Spavanc: https://open.kattis.com/problems/spavanac
	Mahadi 07-12-17
*/

#include <iostream>

int main() {
	int hour = 0;
	int min = 0;
	int d = 0;
	while(std::cin >> hour >> min) {
		d = min - 45;
		min = (d % 60 + 60) % 60;
		if ( d <= 0){
			hour -= 1;
			hour = (hour % 24 + 24) % 24;
		} 
	}

	std::cout << hour << " " << min << std::endl;

	return 0;
}
