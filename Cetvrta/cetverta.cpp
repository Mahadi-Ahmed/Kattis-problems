/*
	Open kattis problem Cetvrta: https://open.kattis.com/problems/cetvrta
	Mahadi 03-09-18
*/

#include <iostream>
#include <array>


int main() {
	std::array<int,3> xCords;
	std::array<int,3> yCords;
	int x = 0;
	int y = 0;
	int i = 0;
	while(std::cin >> x >> y) {
		xCords[i] = x;
		yCords[i] = y;
		i++;
	}
	int xMissing = 0;
	int yMissing = 0;
	
	// finding missing x
	if(xCords[0] == xCords[1]){
		xMissing = xCords[2];
	} else if (xCords[0] == xCords[2]){
		xMissing = xCords[1];
	} else {
		xMissing = xCords[0];
	}

	// finding missing y
	if(yCords[0] == yCords[1]){
		yMissing = yCords[2];
	} else if(yCords[0] == yCords[2]){
		yMissing = yCords[1];
	} else {
		yMissing = yCords[0];
	}

	std::cout << xMissing << " " << yMissing;

	// for (int i = 0; i < 3; ++i){
	// 	std::cout << "xcords " << xCords[i] << " ";
	// }

	// for (int i = 0; i < 3; ++i){
	// 	std::cout << "ycords " << yCords[i] << " ";
	// }
}

/*
 Input1 :
 5 5
 5 7
 7 5

 Output1 : 
 7 7

 Input2 : 
 30 20
 10 10
 10 20

 Output2 :
 30 10

Basic soloution: Notice the pattern that the inputs of the x coordinate have a pair and another number, this number is missing its partner, its the same with the inputs of the y coordinates. IE 5 & 5 & 7 is the inputs of x coords with the pair being 5 & 5 with 7 being left out, meaning the output should be 7 to form the missing pair. 
*/
