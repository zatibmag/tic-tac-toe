#include <iostream>
#include <string>
#include "Write.h"
#include "Restart.h"

void Restart::restart_game(string field[][6], int& total_count) {
    string userInput;
    cout << "Do you want to play again? (Y/N): ";
    cin >> userInput;

    if (userInput != "Y" && userInput != "y") {
        return;
    }


    total_count = 0;
    field[1][1] = " ";       // Reset the game
    field[1][3] = " ";  
    field[1][5] = " ";
    field[3][1] = " ";
    field[3][3] = " ";
    field[3][5] = " ";
    field[5][1] = " ";
    field[5][3] = " ";
    field[5][5] = " ";

    Write::write(field);
}
