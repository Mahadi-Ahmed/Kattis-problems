/*
	Open kattis problem Faktor: https://open.kattis.com/problems/faktor
	Mahadi 29-11-17
*/

#include <iostream>
#include <string>

int main() {
	int nOfPublished; 
	int factor;
	int bribed;
	while(std::cin >> nOfPublished >> factor) {
		bribed = (nOfPublished * (factor - 1)) + 1;
	}
	std::cout << bribed;
	return 0;
}


/*
	(count of citation) / (number of articles published) = faktor

	(count of citation) = (number of articles published) * (faktor)

	in the example : 894 / 38 = 23.53 rounded up to 24 impact factor

	The impact factor can be rounded up,

	sample input:

	38 : the number of articles you plan to publish 
	24 : The impact factor
	 		
	how many scientists do i need to bribe? 1 bribe = 1 citation
	38*24 = 912 -> 912 scientist bribed
	38*23 = 974 -> 874 scientist bribed

	number of articles published * (faktor - 1) + 1)

	(38 * 24 -1) +1 = 875
*/