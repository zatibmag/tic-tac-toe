#include <iostream>
#include <string>
#include "Turn.h"
#include "Write.h"
#include "EndGame.h"

using namespace std;


void Turn::takeTurn(string field[][6], int& total_count) {          //check turn
        string userInput;
        while (true) {
            cin >> userInput;
            total_count += 1;

            if (userInput == "A1") {
                if (total_count % 2 != 0) {
                    field[1][1] = "X";
                }
                else {
                    field[1][1] = "O";
                }
                Write::write(field);
            }
            else if (userInput == "A2") {
                if (total_count % 2 != 0) {
                    field[1][3] = "X";
                }
                else {
                    field[1][3] = "O";
                }
                Write::write(field);
            }
            else if (userInput == "A3") {
                if (total_count % 2 != 0) {
                    field[1][5] = "X";
                }
                else {
                    field[1][5] = "O";
                }
                Write::write(field);
            }
            else if (userInput == "B1") {
                if (total_count % 2 != 0) {
                    field[3][1] = "X";
                }
                else {
                    field[3][1] = "O";
                }
                Write::write(field);
            }
            else if (userInput == "B2") {
                if (total_count % 2 != 0) {
                    field[3][3] = "X";
                }
                else {
                    field[3][3] = "O";
                }
                Write::write(field);
            }
            else if (userInput == "B3") {
                if (total_count % 2 != 0) {
                    field[3][5] = "X";
                }
                else {
                    field[3][5] = "O";
                }
                Write::write(field);
            }
            else if (userInput == "C1") {
                if (total_count % 2 != 0) {
                    field[5][1] = "X";
                }
                else {
                    field[5][1] = "O";
                }
                Write::write(field);
            }
            else if (userInput == "C2") {
                if (total_count % 2 != 0) {
                    field[5][3] = "X";
                }
                else {
                    field[5][3] = "O";
                }
                Write::write(field);
            }
            else if (userInput == "C3") {
                if (total_count % 2 != 0) {
                    field[5][5] = "X";
                }
                else {
                    field[5][5] = "O";
                }
                Write::write(field);
            }
            else {
                cout << "Invalid input. Please try again." << endl;
            }
            if (EndGame::CheckEnd(field, total_count)) {
                break;
            }
        }
}