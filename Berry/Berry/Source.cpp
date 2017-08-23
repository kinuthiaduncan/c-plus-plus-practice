#include <iostream>
#include <thread>
#include <string>
#include <mutex>

using namespace std;

mutex m;
void firstcaller()
{
	string converses[] = { "Hello", "I was calling to say thanks", "Also mom wants you to call", "She say she misss you" };
	int i;
	int sizec = sizeof(converses);
	for (i = 0; i<sizec; i++)
	{
		std::cout << converses[i] << std::endl;

	}

}
void secondcaller()
{
	string returns[] = { "Hello", "That is ok, it was great having you around", "I will definitely call her after this", "I miss her too" };
	int j;
	int sizer = sizeof(returns);
	for (j = 0; j<sizer; j++)
	{
		std::cout << returns[j] << std::endl;

	}



}
int main() {
	thread first(firstcaller);
	thread second(secondcaller);
	std::cout << "Conversation now underwway" << std::endl;
	m.lock();
	first.join();
	second.join();
	m.unlock();
	std::cout << "Conversation now complete" << std::endl;
	return 0;
}
