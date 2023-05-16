#include <iostream>
#include <string>
#include "EndGame.h"


using namespace std;

bool EndGame::CheckEnd(string field[][6], int total_count) {
    if ((field[1][1] == field[1][3] && field[1][1] == field[1][5] && total_count > 3 && field[1][1] != " ") ||  //Check it's win or draw
        (field[3][1] == field[3][3] && field[3][1] == field[3][5] && total_count > 3 && field[3][1] != " ") || 
        (field[5][1] == field[5][3] && field[5][1] == field[5][5] && total_count > 3 && field[5][1] != " ") ||
        (field[1][1] == field[3][1] && field[1][1] == field[5][1] && total_count > 3 && field[1][1] != " ") ||
        (field[1][3] == field[3][3] && field[1][3] == field[5][3] && total_count > 3 && field[1][3] != " ") ||
        (field[1][5] == field[3][5] && field[1][5] == field[5][5] && total_count > 3 && field[1][5] != " ") ||
        (field[1][1] == field[3][3] && field[1][1] == field[5][5] && total_count > 3 && field[1][1] != " ") ||
        (field[1][5] == field[3][3] && field[1][5] == field[5][1] && total_count > 3 && field[1][5] != " ")) {
        cout << "Congratulations! You WIN." << endl;
        return true;
    }
    else if (total_count == 9) {
        cout << "It's a draw." << endl;
        return true;
    }
    return false;
}
