#include <iostream>
#include <string>
#include "Write.h"
#include "EndGame.h"
#include "Turn.h"
#include "Restart.h"

using namespace std;

string field[6][6] = {
    {" ", "1", " ", "2", " ", "3"},
    {"A", " ", "-", " ", "-", " "},
    {" ", "-", "-", "-", "-", "-"},
    {"B", " ", "-", " ", "-", " "},
    {" ", "-", "-", "-", "-", "-"},
    {"C", " ", "-", " ", "-", " "}
};

int main() {
    cout << "In your turn, you should write C1, B3. If you understand, write OK: ";

    string userInput;
    cin >> userInput;

    if (userInput == "OK" || userInput == "Ok" || userInput == "ok") {
        Write::write(field);
    }

    int total_count = 0;

    while (true) {
        Turn::takeTurn(field, total_count);
        Restart::restart_game(field, total_count);
    }

    return 0;
}


