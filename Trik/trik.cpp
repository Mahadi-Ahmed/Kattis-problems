/*
	Open kattis Trick: https://open.kattis.com/problems/trik
	Mahadi 07-12-17
*/

#include <iostream>

int main() {
	int position = 1; // Position of the ball
	char move = ' ';
	while(std::cin >> move) {
		if(move == 'A' && position == 1){
			position = 2;
		} else if (move == 'A' && position == 2) {
			position = 1;
		}

		if(move == 'B' && position == 2){
			position = 3;
		} else if(move == 'B' && position == 3) {
			position = 2;
		}

		if(move == 'C' && position == 1){
			position = 3;
		} else if(move == 'C' && position == 3) {
			position = 1;
		}
	}
	std::cout << position ;
	return 0;
}

/*
	ALWAYS STARTS AT THE LEFTMOST CUP!

	Output: the index of the cup under which the ball is -> 
	1 if it is under the left cup,
	2 if it is under the middle cup or 
	3 if it is under the right cup.

	There are 6 possible moves:
	A: 1 -> 2 || 2 -> 1
	B: 2 -> 3 || 3 -> 2
	C: 1 -> 3 || 3 -> 1 

	Example:
	Input: CBABCACCC
	Start: 1
	C -> 3
	B -> 2
	A -> 2
	B -> NO VALID MOVE
	C -> 3
	A -> NO VALID MOVE
	C -> 1
	C -> 3
	C -> 1
	Output: 1
*/

