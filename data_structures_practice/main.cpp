#include <iostream>
#include "IntCell.h"

using namespace std;

int main() {
    IntCell *intCell;
    intCell = new IntCell{ };

    intCell->write(30);
    int answer = intCell->read();

    cout << answer<< endl;

    delete intCell;
    return 0;
}