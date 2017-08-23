#include <iostream>
using namespace std;

int main() {
	int n1, n2, max;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;

	max = (n1 > n2) ? n1 : n2; // maximum value between n1 and n2 is stored in max

	do {
		if (max%n1 == 0 && max%n2 == 0) {
			cout << "LCM = " << max<<endl;
			break;
		}
		else
			++max;
	} while (true);
	system("pause");
	return 0;
}