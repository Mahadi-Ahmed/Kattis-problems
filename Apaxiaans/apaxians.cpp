/*
	Open kattis problem Autori: https://open.kattis.com/problems/autori
	Mahadi 02-12-17
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	string name = " ";
	string rName = "";
	int j = 1;
	cin >> name;
	for (int i = 0; i < name.length(); ++i) {
		if(name[i] != name[j]) {
			rName += name[i];
		}
		j++;
	}
	cout << rName;
	return 0;
}

/*
	remove any characters that appears two or more times:
	boooooobapalaxxxxios -> bobapalaxios
	booob -> bob
*/
