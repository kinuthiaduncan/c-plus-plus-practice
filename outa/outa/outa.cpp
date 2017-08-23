#include <iostream>
#include <thread>
#include <exception>
using namespace std;

pthread* arg1; // pointer to first thread t1
pthread* arg2; //pointer to second thread t2
bool stop = 1; // this boolean prevents the two functions argu1 and argu2 from ruuning

void argu2(bool a)
{
	while (stop) {;} //waits for changing stop to false
	::arg1->join(); //attempts to cause a deadlock
}

void argu1(bool a)
{
	while(stop) {;} //waits for changing stop to false
	::arg2->joi(); //attempts to cause a deadlock
}


int main()
{
	//making threads for argu1 and argu2
	thread t1(argu1, 1);
	thread t2(argu2, 1);

	//assigning pointers values
	::arg1 = &t1;
	::arg2 = &t2;
	::stop = 0; // starting point
	t1.join();
	t2.join();
	cout<<"Thread Implementation"<<endl; //this never gets shown

	return 0;
}
