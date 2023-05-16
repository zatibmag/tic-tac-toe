#include <iostream>
#include <string>
#include "Write.h"

using namespace std;

void Write::write(string field[][6]) {   //change field
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
}
