/*
	Open kattis problem Nasty hacks: https://open.kattis.com/problems/nastyhacks
	Mahadi 01-12-17
*/

#include <iostream>

int main() {
	int amountOfcases = 0;
	std::cin >> amountOfcases;
	int r = 0;
	int e = 0;
	int c = 0;
	while(std::cin >> r >> e >> c){
		if((e - c) > r) {
			std::cout << "advertise\n";
		} else if ( (e - c) < r ) {
			std::cout << "do not advertise\n";
		} else {
			std::cout << "does not matter\n";
		}
	}
	return 0;
}

/*
	first input n is the number of test cases
	next line is 3 numbers separated by spaces r , e and c 
	r = expected revenue if no advertisement
	e = expected revenue if with advertisement
	c = The cost of advertisement
	Is it worth it to use adverts?

	if e - c > r -> advertise
	if e - c == r -> does not matter
	if e - c < r -> do not advertise

	example case:
	-100 -70 40
	r= -100
	e = -70
	c = 40		e-c		 r
	e - c => -30 > -100 => do not advertise
*/