#include <algorithm>
#include <string>
#include <iostream>
using namespace std;
bool is_palindrome(string const& s)
{
	return equal(s.begin(), s.begin() + s.length() / 2, s.rbegin());

}
int main()
{
	string str,s;
	cout << "Enter the string to test if Palindrome " << endl;
	getline(cin, str);
	cout << endl;
	s=is_palindrome(str);
	cout << s << endl;
	getchar();
	return 0;
} 