#include <iostream>
#include <vector>

using namespace std;

int addition(int & x, int & y)
{
    return x+y;
}

int main() {
    int a = 2;
    int b = 3;
    cout<<addition(a,b)<<endl;
    return 0;
}