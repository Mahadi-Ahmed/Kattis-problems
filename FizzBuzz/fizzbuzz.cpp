/*
	Open kattis problem FizzBuzz: https://open.kattis.com/problems/fizzbuzz
	Mahadi 02-12-17
*/

#include <iostream>
#include <cmath>

int main() {
	int x = 0;
	int y = 0;
	int n = 0;
	std::cin >> x >> y >> n;
	for (int i = 1; i <= n; ++i){
		if((i % x) == 0 &&(i % y) == 0) {
			std::cout << "FizzBuzz" << "\n";
		} else if (i % x == 0) {
			std::cout << "Fizz" << "\n";
		} else if ( i % y == 0) {
			std::cout << "Buzz" << "\n";
		} else {
			std::cout << i << "\n";
		}
	}
	//std::cout << x << y << n;
	return 0;
}

/*
	Input is single line, 3 integers, X, Y, N where n is the range of numbers
	find which numbers are divisible by x, y and (x and y)
	example:
	2 3 7
	range is 1-7
	1
	2 - Fizz -> divisible by x
	3 - Buzz -> divisible by y
	4 - Fizz -> divisble by x
	5 
	6 - FizzBuzz -> divisble by y
	7 
*/