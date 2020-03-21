#include <iostream>
#include <array>
#include <string.h> 

int main() {
	int amountOfLines = 0;
  std::string price = "";
	std::cin >> amountOfLines;
  
	while(std::cin >> price) {
    std::cout << price.length() << "\n";
	}

	return 0;
}