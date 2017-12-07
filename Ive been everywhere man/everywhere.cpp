/*
	Open kattis problem I've been everywhere man: https://open.kattis.com/problems/everywhere
	Mahadi 02-12-17
*/

#include <iostream>
#include <array>
#include <string>
#include <map>

using namespace std;

int destinations (int size);

int main() {
	int cases = 0;
	int numOfDestinations = 0;
	int nextNumOfDestinations = 0;
	cin >> cases;				// first input taken care of
	cin >> numOfDestinations;	// is taken care of
	for (int i = 0; i < cases; ++i){
		int output = destinations(numOfDestinations);
		cout << output << endl;
		cin >> numOfDestinations;
	}	
	return 0;
}

// TODO: Make a function which solves one test case
int destinations (int size) {
	string rArray[size];
	map<string,int> dict;
	string key = " ";
	int distinctDestinations = 0;
	int value = 0;
	int h = 0;
	for (int i = 0; i < size; ++i){
		cin >> rArray[i];
		dict.insert(pair<string,int>(rArray[i],0));
	}

	for (int i = 0; i < size; ++i){
		if (dict.count(rArray[i]) > 1){
			value = dict.at(rArray[i]);
			value += 1;
			dict.insert(pair<string,int>(rArray[i],value));
		}
	}

	distinctDestinations = dict.size();

	return distinctDestinations;
}






/*
	First input conatins number of test cases, 
	Second line is the first line of that test case, indicating how many trips is in that case.
	followed by the trips.
	Example:
	2 -> Number of test cases
	7 -> First test case, number of cases to go through
	saskatoon
	toronto
	winnipeg
	toronto
	vancouver
	saskatoon
	toronto
	3 -> Second test case. number of cases to go through
	edmonton
	edmonton
	edmonton
*/