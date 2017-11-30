/*
	Open kattis problem Sum kind of problem: https://open.kattis.com/problems/sumkindofproblem
	Mahadi 30-11-17
*/

#include <iostream>

int sumFirstN(int n) {
	return (n * (n +1)) / 2 ;
}

int sumOddN(int n) {
	return (n*n);
}

int sumEvenN(int n) {
	return (n * (n +1));
}

int main() {


	int firstInput = 0;
	int k = 0;
	int n = 0;
	std::cin >> firstInput;
	while(std::cin >> k >> n) {
		std::cout << k << " ";
		std::cout << sumFirstN(n) << " ";
		std::cout << sumOddN(n) << " ";
		std::cout << sumEvenN(n) << "\n";
 	}
	return 0;
}


/*
	First line of input contains one integer which is the number of data sets that follow.
	Each of the following lines contains 1 number which denotes the data set number followed by 
	an integer N, 1 <= N <= 10 000 

	Output is S_1 S_2 and S_3
	where S_1 S_2 and S_3 is:
	S_1 = The sum of the first N positive integers.
	S_2 = The sum of the first N odd integers.
	S_3 = The sum of the first N Even integers. 

	S_1 = (N * (N+1)) / 2 
	S_2 = N^2
	S_3 = N*(N+1)
*/