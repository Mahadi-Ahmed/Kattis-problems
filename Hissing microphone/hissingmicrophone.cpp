/*
	Open kattis problem Hissing microphone: https://open.kattis.com/problems/hissingmicrophone
	Mahadi 29-11-17
*/

#include <iostream>
#include <string>
#include <cstring>

int main(){
	std::string Instring;
	std::cin >> Instring;
	int j = 1;
	int doubleSSFound = -1;
	for (int i = 0; i < Instring.length(); ++i) {
		char isS = Instring[i];
		char isSS = Instring[j];
		if ( (std::strncmp(&isS,"s",1) == 0) && (std::strncmp(&isSS,"s",1) == 0) ) {
			doubleSSFound = 1;
		} 
		j += 1;
	} 
	if (doubleSSFound == 1) {
			std::cout << "hiss";
		}	else {
			std::cout << "no hiss";
		}
	return 0;
}

