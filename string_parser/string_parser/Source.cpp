/**
---*Recursive Descent parser program for the CFG below*---
*
* T->kR
* R->kR
* R->jP
* P->mP
* P->nP
* P->e
*
string is kjnmnmnmn
*/

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

void parseT(void);
void parseR(void);
void parseP(void);
void error(void);
void match(char receivedChar);
char token;


int main(int argc, char** argv)
{
	while (true)
	{
		cout << "Enter your String: ";
		token = getchar();
		parseT();
		if (token == '\n')
		{
			cout << "String accepted" << endl;
		}
	}
	return 0;
}

void parseT(void)
{
	if (token == 'k')
	{
		match('k');
		parseR();
	}
	else
	{
		error();
	}
}

void parseR(void)
{
	if (token == 'k')
	{
		match('k');
		parseR();
	}
	else if (token == 'j')
	{
		match('j');
		parseP();
	}
	else
	{
		error();
	}
}

void parseP(void)
{
	if (token == 'm')
	{
		match('m');
		parseP();
	}
	else if (token == 'n')
	{
		match('n');
		parseP();
	}
	else if (token == '\n')
	{

	}

	else
	{
		error();
	}
}

void match(char receivedChar)
{
	if (token == receivedChar)
	{
		token = getchar();
	}
	else
	{
		error();
	}
}

void error(void)
{
	cerr << "Error on your input string" << endl;
	exit(1);
}

