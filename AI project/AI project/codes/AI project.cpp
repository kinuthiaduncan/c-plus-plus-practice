// AI project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "coding.h"
#include <string>
using namespace std;

int main()
{
	Instructions instruction;
	Intro start;
	Structured_Development struc;
	Program_Control control;
	Functions functions;
	Arrays arraylearn;
	 Files filelearn;


	string myname;
	int mychoice;
	cout<<"Welcome to the Code Robot!!\n\n";
	cout<<"What is Your Name?\n";
	getline(cin,myname);
	cout<<"Hello\t"<<myname<<"\tWhat topic Do you want to learn today?\n\n";
	instruction.instructions();
	cin>>mychoice;
	switch (mychoice)
	{
	case 1:
		start.hello_world();
			break;
	case 2:
		start.simple_calc();
			break;
	case 3:
		start.memory_concepts();
		break;
	case 4:
		start.arithmetic_concepts();
		break;
	case 5:
		start.decision_making();
		break;
	case 6:
		struc.algorithms();
		break;
	case 7:
		struc.pseudocode();
		break;
	case 8:
		struc.control_structures();
		break;
	case 9:
		struc.if_statement();
		break;
	case 10:
		struc.if_else_statement();
		break;
	case 11:
		struc.while_repetition();
		break;
	case 12:
		struc.stepwise_refinement();
		break;
	case 13: 
		struc.assignment_operators();
		break;
	case 14:
		struc.increment_decrement();
		
	case 15:
		control.repetition_essentials();
		break;
	case 16: 
		control.while_loop();
		break;
	case 17: 
		control.for_loop();
		break;
	case 18:
		control.switch_statement();
		break;
	case 19:
		control.do_while();
		break;
	case 20:
		control.break_continue();
		break;
	case 21:
		control.logical_operators();
		break;
	case 22:
		control.point_to_note();
		break;
	case 23:
		functions.modules();
		break;
	case 24:
		functions.function_definition();
		break;
	case 25:
		functions.funtion_prototypes();
		break;
	case 26:
		functions.call_by_value();
		break;
	case 27:
		functions.random();
		break;
	case 28:
		arraylearn.definition();
		break;
	case 29:
		filelearn.creating_sequential_files();
		break;
	case 30:
		filelearn.reading_sequential_files();
		break;
			default:cout<<"\nWrong Choice Entered\n\n";
	}
	system("pause");
	return 0;
}

