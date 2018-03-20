#include <iostream>
#include "IntCell.h"

using namespace std;

int main() {
    IntCell a;
    a.write(2);
    cout<<a.read()<<endl;
    return 0;

}