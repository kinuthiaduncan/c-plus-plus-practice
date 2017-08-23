/**
*
* EXP → [EXP1]
* EXP1 → EXP EXP2
* EXP1 → num, EXP1
* EXP1 → num
* EXP1 → 𝜀
* EXP2 → ,EXP1
* EXP2 → 𝜀
*
*/


#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <list>
#include "listOperations.h"

using namespace std;
list<int> listElems;
list<int>::iterator listItr;
char token;
int element;
int listLen = 0;
void error();
void exp(void);
void exp1(void);
void exp2(void);
void match(char receivedChar);
void printList(void);
void clearList(void);

void error()
{
	cout << "There is an error with your syntax" << endl;
	exit(1);
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

void exp()
{
	if (token == '[')
	{
		match('[');
		exp1();
		match(']');
	}
	else
	{
		error();
	}
}

void exp1()
{
	int tempVal;
	cout << token << endl;
	if (token == '[')
	{
		exp();
		exp2();
	}

	else if (isdigit(token))
	{
		ungetc(token, stdin);
		scanf("%d", &tempVal);
		listElems.push_back(tempVal);
		listLen++;
		token = getchar();
		exp1();
	}

	else if (token == ',')
	{
		match(',');
		exp1();
	}

	else if (token == ']')
	{

	}

	else
	{
		error();
	}
}

void exp2()
{
	if (token == ',')
	{
		match(',');
		exp1();
	}
	else if (token == '\t' || token == '\s')
	{

	}
	else
	{
		error();
	}
}

void printList(void)
{
	cout << "Number of elements: " << listLen << endl;
	cout << "[";
	for (listItr = listElems.begin(); listItr != listElems.end(); ++listItr)
	{
		cout << *listItr << ", ";
	}
	cout << "]" << endl;
}

void clearList(void)
{
	listElems.clear();
	listLen = 0;
}


int main()
{
	while (true)
	{
		cout << ">> ";
		token = getchar();
		exp();
		printList();
		clearList();
	}
	return 0;
}

