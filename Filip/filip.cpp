/*
	Open kattis problem filip: https://open.kattis.com/problems/filip
	Mahadi 12-09-18
*/

#include <iostream>
#include <array>
#include <string>


int main() {
	int twoThreeDigitNum [2] = {};
	int n = 0;
	int i = 0;
	while(std::cin >> n){
		twoThreeDigitNum[i] = n;
		i++;
	}

	// break the number into its digits
	int firstDigits [3] = {}; // place to save individual digits
	int firstNum = twoThreeDigitNum[0]; // firstNum is just the first int before its broken down
	int k = 0;
	// Extract the digits in reverse order
	while(firstNum > 0) {
		int digit = firstNum%10;
		firstNum /= 10;
		firstDigits[k] = digit;
		k++;
	}
	firstNum = firstDigits[0];

	int secondDigits [3] = {};
	int secondNum = twoThreeDigitNum[1];
	int j = 0;
	while(secondNum > 0) {
		int digit = secondNum%10;
		secondNum /= 10;
		secondDigits[j] = digit;
		j++;
	}
	secondNum = secondDigits[0];

	//std::cout << "last digit of the first number: " << firstNum << "\n";
	//std::cout << "last digit of the second number: " << secondNum << "\n";
	// make sure the last digit is not equal to eachother, if they are equal use the second last digit, etc etc...

	// 224 225
	if (firstDigits[0] == secondDigits[0]) {
		//std::cout << "första satasen\n";
		firstNum = firstDigits[1];
		secondNum = secondDigits[1];
		if ( firstDigits[1] == secondDigits[1]) {
			//std::cout << "andra satsen\n";
			firstNum = firstDigits[2];
			secondNum = secondDigits[2];
		}
	} 

	//td::cout << "The comparisons are being made on: " << "\n";
	//std::cout << "firstNum: " << firstNum << "\n";
	//std::cout << "secondNum " << secondNum << "\n"; 
	std::string output = "";
	if (firstNum > secondNum) {
		for (int i = 0; i < 3; ++i) {
			output += std::to_string(firstDigits[i]);
			//std::cout << firstDigits[i];
		}
	} else {
		for (int i = 0; i < 3; ++i) {
			output += std::to_string(secondDigits[i]);
			//std::cout << secondDigits[i];
		}
	}
	std::cout << output;
}

