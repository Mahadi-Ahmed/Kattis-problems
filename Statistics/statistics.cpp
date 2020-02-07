/*
	Open kattis Statistics: https://open.kattis.com/problems/statistics
	Mahadi feat ramtin 08-12-17
	28-04-18
*/

#include <iostream>
#include <climits>
#include <string>
#include <sstream>
#include <istream>
#include <vector>


using namespace std;

string stats(int data, int size);

int main() {
	int min = INT_MAX;
	int max = INT_MIN;
	int temp = 0;
	int firstValue = 0;
	int i = 0;
	int cases = 0;
	string myLine = " ";
	while(cin >> temp){
		firstValue = temp;
		if (i != 0) {
			if (temp < min) {
				min = temp;
			} else if (temp > max) {
				max = temp;
			}
		} else if ( 0 == firstValue -1) {
			//cout << "hello everybody" ;
			cin >> temp;
			min = temp;
			max = temp;
			//i = 0;
		}
		i++;		

	}
	//cout << "i: " << i;
	cout << "Case " << cases + 1 << ": " << min << " " << max << " " << max - min << endl;


	return 0;
}
/*
if (i != 0) {
	if (temp < min) {
		min = temp;
	} else if (temp > max) {
			max = temp;
		}
		}
		i++;		

*/

/*

	First input contains how many integers will follow.
	Input sample:
	2 4 10
	9 2 5 6 4 5 9 2 1 4
	7 6 10 1 2 5 10 9
	1 9

	Output sample:
	Case 1: 4 10 6
	Case 2: 1 9 8
	Case 3: 1 10 9
	Case 4: 9 9 0
	int the format: min max range

	min(X): the smallest value in X
	max(X): the largest value in X
	range(X): max(X) - min(X)
*/