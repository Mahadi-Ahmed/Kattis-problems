/*
	Open kattis problem Pot: https://open.kattis.com/problems/pot
	Mahadi 30-11-17
*/

#include <iostream>
#include <string>
#include <cmath>

int main(){
	int numberOfTerms = 0;
	std::cin >> numberOfTerms;
	std::string termWPow = " ";
	std::string term = " "; 
	int totalX = 0;
	std::string power = " ";
	while(std::cin >> termWPow) {
		power = termWPow.substr((termWPow.length() - 1),termWPow.length());
		term = termWPow.substr(0,termWPow.length()-1);
		totalX += pow((atoi(term.c_str())),(atoi(power.c_str())));
	}
	std::cout << totalX;
	return 0;
}

/*
	First line of input contains an integer which represent how many terms will be added.
	Each new line is one of the terms that has to be added, it will be two integers where the last integer
	is the power of the previous one, i.e :

	5
	23
	17
	43
	52
	22
	X = 2^3 + 1^7 + 4^3 + 5^2 + 2^2 = 102

*/