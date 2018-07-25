/*
    Open kattis problem Bijele: https://open.kattis.com/problems/pet
    Mahadi 25-07-18
*/

#include <iostream>

int main(){
	int contestant = 1;
	int highestScoreContestant = 0;
	int highestScore = 0;
	int scoreValue = 0;
	int contestantsScore = 0;
	int i = 0;

	while(std::cin >> scoreValue) {
		contestantsScore += scoreValue;
		i++;
		if (i == 4){
			i = 0;
			if (contestantsScore > highestScore){
				highestScore = contestantsScore;
				highestScoreContestant = contestant;
			}
			contestantsScore = 0;
			contestant++;
		}

	}

	std::cout << highestScoreContestant << " " << highestScore;

}






/*
	INPUT: 
	Five lines, each containing 4 integers, the grades a contestant got. The contestants are numbered 1 to 5 in the order in which their grades were given

	OUTPUT:
	Output on a single line the winner’s number and their points, separated by a space. The input data will guarantee that the solution is unique.
*/
