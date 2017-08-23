#include<stdexcept>
using namespace std;

class DivideByZeroException: public runtime_error
{
public:
	DivideByZeroException()
		:runtime_error("Attempted to Divide by Zero")
	{
	}
};
