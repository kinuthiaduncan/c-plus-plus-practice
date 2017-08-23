#include<vector>
using namespace std;
class BinarySearch
{
public:
	BinarySearch(int);
	int binarySearch(int) const;
	void displayElements() const;
private:
	int size;
	vector<int>data;
	void displaySubElements(int, int) const;
};