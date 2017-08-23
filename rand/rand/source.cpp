#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(){
	unsigned seed;
	cout<<"Enter the seed\t";
	cin>>seed;
	srand(seed);
	for(int i=0; i<=20; i++){
	cout<<(1+rand()%6)<<endl;
	}

	return 0;

}