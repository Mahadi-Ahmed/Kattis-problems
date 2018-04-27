/*
    Open kattis problem Bijele: https://open.kattis.com/problems/bijele
    Mahadi 01-12-17
*/

#include <iostream>
#include <array>
#include <string>


int main(){
    
    int i = 0;
    int setPiece = 0;
    //int boardSet [5];
    std::array<int,6> boardSet;
    std::array<int,6> pieces = {1,1,2,2,2,8};
    std::string rBoard = "";
    int temp = 0;

    while(std::cin >> setPiece) {
        boardSet[i] = setPiece;
        i++;
    }

    for (int i = 0; i < 6; ++i) {
        temp = pieces[i] - boardSet[i];
        rBoard += std::to_string(temp);
        rBoard += " ";
     }
    std::cout << rBoard;
    return 0;
}



/*
    Each set should contain:    
    One king
    One queen
    Two rooks
    Two bishops
    Two knights
    Eight pawns =>

    1 1 2 2 2 7

    Example of input:
    0 1 2 2 2 7
    in the order:
    king queen rook bishop knight pawn
*/
