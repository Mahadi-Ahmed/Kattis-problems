/*
	Open kattis problem Autori: https://open.kattis.com/problems/autori
	Mahadi 28-11-17
*/

#include <iostream>
#include <string>
#include <cctype>

int main(){
	std::string autoriNames;// This string will store the first letter of each name and will be the output
	std::string inputNames;
	int upperOrNot = 0;
	std::cin >> inputNames;
	for (std::string::size_type i = 0; i < inputNames.length(); ++i){
		upperOrNot = isupper(inputNames[i]);
		if (upperOrNot != 0){
			autoriNames += inputNames[i];
		}
	}
	std::cout << autoriNames;
	return 0;
}