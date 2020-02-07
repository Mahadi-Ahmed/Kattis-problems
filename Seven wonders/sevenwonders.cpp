/*
	Open kattis Statistics: https://open.kattis.com/problems/statistics
	Mahadi 10-12-17
*/

#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int main() {
	map<string,int> dict;
	string card_key = " ";
	string card = " ";
	return 0;
}

/*
	There are three types of scientific structure cards: Tablet (‘T’), Compass (‘C’), and Gear (‘G’).
	For each type of cards, a player earns a number of points that is equal to the squared number of 
	that type of cards played. Additionally, for each set of three different scientific cards, 
	a player scores 7 points.
	For example, if a player plays 3 Tablet cards, 2 Compass cards and 1 Gear card,
	she gets 3^2+2^2+1^2+7=21

	Example 1:
	TCGTTC
	3^2 + 2^2 + 1^2 + 7 = 21

	Example 2:
	CCC 
	2^3 -> 9

	Example 3: 
	TTCCGG
	2^2 + 2^2 + 2^2 + 7^2-> 26
	Since we add 7 every time we find a set TCG, we found two sets of TCG so 7^2 
*/