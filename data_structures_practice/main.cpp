#include <iostream>
#include "IntCell.cpp";

using namespace std;

int main() {
    IntCell intCell;
   // intCell.write(30);
    int answer = intCell.read();
    cout << answer<< endl;
    return 0;
}