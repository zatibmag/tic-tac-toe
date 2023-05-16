#ifndef TURN_H
#define TURN_H

#include <string>

using namespace std;


class Turn {
public:
    static void takeTurn(string field[][6], int& total_count);
};

#endif