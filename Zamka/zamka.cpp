/*
	Open kattis Zamka: https://open.kattis.com/problems/zamka
	Mahadi 04-05-18
*/

#include <iostream>
#include <string>


int zamkaMin(int L, int D, int X);
int zamkaMax(int L, int D, int X);

int main(){
	int L = 0;
	int D = 0;
	int X = 0;

	int N = 0;
	int M = 0;

	int counterMin = 0;
	int counterMax = 0;

	std::string tempMin = "";
	std::string helper = "";

	std::cin >> L;
	std::cin >> D;
	std::cin >> X;

	//std::cout << "L " << L << " D " << D << " X " << X; 
	N = zamkaMin(L,D,X); // this will return 1 for sample input 1
	while(N != X){
		tempMin = std::to_string(N);
		for (int i = 0; i < tempMin.length(); ++i){
			helper = tempMin[i];
			counterMin += std::stoi(helper);
			std::cout << counterMin << "\n";
		}
		L += 1;
		N = zamkaMin(L,D,X);
	}
	std::cout << "This is N " << N << "\n";

	M = zamkaMax(L,D,X); // this will return 400 for sample intput 1
	while(M != X){
		tempMin = std::to_string(M);
		for (int i = 0; i < tempMin.length(); ++i){
			helper = tempMin[i];
			counterMax += std::stoi(helper);
			std::cout << counterMax << "\n";
		}
		D -= 1;
		M = zamkaMax(L,D,X);
	}
	std::cout << "This is M " << M;
	return 0;
}


// For now just try to solve the inequality
// This function solves for the output N
int zamkaMin(int L, int D, int X){
	int N = 0;
	while(!((N >= L ) && (N <= D))){
		N += 1;
	}

	return N;
}

// This function solves for the output M
int zamkaMax(int L, int D, int X){
	int M = D;
	while(!((M >= L )&& (M <= D))){
		M--;
	}

	return M;
}

/*
	You are given three integers L, D and X

	determine the minimal integer N such that L <= N <= D and the sum of its digits is X

	determine the maximal integer M such that L <= M <= D and the sum of its digits is X

	I'm given the variables L, D and X and have to find N & M.

	Sample input 1:
	1							this is	L
	400						this is	D
	4							this is	X

	Sample output 1:
	4							this is N , X is also true since 4 + 0 = 4
	40						this is M , X is also true since 4 + 0 = 4
	
	L <= N <= D and the sum of its digits is X
	L <= M <= D and the sum of its digits is X

	1 <= 4 <= 400 and the sum should be 4
	1 <= 40 <= 400 and the sum should be 4
	
	Sample intput 2:
	100						this is L
	500						this is D
	12						this is X

	Sample output 2:
	129						this is N, X is also true since 1 + 2 + 9 = 12
	480						this is M, X is also true since 4 + 8 + 0 = 12
	
	L <= N <= D and the sum of its digits is X
	L <= M <= D and the sum of its digits is X

	100 <= 129 <= 500 and x is true since 1 + 2 + 9 = 12
	100 <= 480 <= 500 and x is true since 4 + 8 + 0 = 12
*/
