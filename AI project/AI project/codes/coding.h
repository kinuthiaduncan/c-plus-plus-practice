#include "stdafx.h"
#include <iostream>
using namespace std;




class Instructions
{
public:
	void instructions();
	//void message();
};


//class Intro
class Intro
{
public:
	void hello_world();
	void simple_calc();
	void memory_concepts();
	void arithmetic_concepts();
	void decision_making();
}; 
void Intro::hello_world()
{
	cout<<"#include<stdio.h>\n\nint main()\n{\nprintf(\"Hello World\");\nreturn 0;\n}";
}
void Intro::simple_calc()
{
	cout<<"#include<stdio.h>\nint main()\n{\nint sum,a,b;\nprintf(\"Enter the value of a and b\");\nscanf(\"%d\", &a);\nscanf(\"%d\", &b);\nsum=a+b;\nprintf(\"%d\", sum);}\n";
}
void Intro::memory_concepts()
{
	cout<<"The & operator tells the compiler where to store the variable. For example, scanf(\"%d\", &x); tells the compiler to store an integer in variable x\n ";
}
void Intro::arithmetic_concepts()
{
	cout<<"Multiplication operator:*\nDivision:/\nSum:+\nSubtraction:-\nRemainder/mod:%\n";
}
void Intro::decision_making()
{
	cout<<"x is equal to y:x==y\nx is greater than y:x>y\nx is greater than or equal to y:x>=y\nx is less than y:x<y\nx is less than or equal to y:x<=y\n";
}

//class Structured_Development
class Structured_Development
{
public:
	void algorithms();
	void pseudocode();
	void control_structures();
	void if_statement();
	void if_else_statement();
	void while_repetition();
	void stepwise_refinement();
	void assignment_operators();
	void increment_decrement();
}; 
void Structured_Development::algorithms()
{
	cout<<"Algorithms are English statements that define the steps that will be taken by a program in solving a problem\nFor example, to calculate the sum of two numbers,\n";
	cout<<"Define variables to be used\nPrompt user to enter values\nRead input\nCalculate sum\nDisplay output\n";
}
void Structured_Development::pseudocode()
{
	cout<<"A pseudocode's purpose is to show how a program solves a programming problem by using statements that are English-like but close to programming languages\n Here's an example:\n";
	cout<<"//sum of two numbers\nStart\ndeclare a,b,sum;\nprint 'Enter a and b';\nread a and b;\nsum=a+b;\nprint sum;\nStop\n";
}
void Structured_Development::control_structures()
{
	cout<<"There are three types of control structures:\nSequential\nSelection\Iteration\n";
	cout<<"Sequential: program source code is executed in a specific order\nSelection:Execution of code depends on whether a condition has been met\nIteration: Program code is executed as long as a condition has been met\n";
}
void Structured_Development::if_statement()
{
	cout<<"Selection occurs once: For example,\nif(x>5)\n{\nprintf(\"x is greater than 5\");\n}\n";
}
void Structured_Development::if_else_statement()
{
	cout<<"Multiple selections can occur:\nFor example,\nif(marks>70)\n{\nprintf(\"A\");\n}\nelse if(marks>59&&<70)\n{\nprintf(\"B\");\n}\nelse\n{\nprintf(\"Failed\");\n}\n";
}
void Structured_Development::while_repetition()
{
	cout<<"A block of code is executed as long as a certain condition is met\nFor example,\nwhile(counter<100)\n{\n//code here\ncounter++;}";
}
void Structured_Development::stepwise_refinement()
{
	cout<<"This is a mechanism that is used to break down into simpler and independent problems that can be easily solved\nC and C++ programming languages provide tools such as funtions and classes to simplify problems\n";
}
void Structured_Development::assignment_operators()
{
	cout<<"The = sign is used for assignment purposes.\For example, for an expression like\na=3;\n The =sign assigns the value of 3 to variable a\n";
}
void Structured_Development::increment_decrement()
{
	cout<<"Incrementing can be done in various ways.\nFor example, x=x+1; can be written as x++;for post increment and ++x for preincrement\nDecrementing can be done in various ways.\nFor example, x=x-1 can be written as x-- for postdecrement and --x for predecrement\n";
}
//class Program_Control
class Program_Control
{
public:
	void repetition_essentials();
	void while_loop();
	void for_loop();
	void switch_statement();
	void do_while();
	void break_continue();
	void logical_operators();
	void point_to_note();
};
void Program_Control::repetition_essentials()
{
	cout<<"There are two types of repetition: counter-controlled and sentinel-based reptition.\Counter-controlled repetition occurs in a definite number of times while the sentinel based repetition can occur indefinitely as long as a sentinel value is not entered.\n";
}
void Program_Control::while_loop()
{
	cout<<"A while loop repeats a certain block of code as long as a certain condition remains true\nThe following shows an example of a while loop\n";
	cout<<"#include <stdio.h>\n/* function main begins program execution */\nint main()\n{\nint counter=1;\n while (counter<=10 )\n {\n /* repetition condition */\n printf ( \"%d\n\", counter ); /* display counter */\n} /* end while */\n return 0; /* indicate program ended successfully */\n } /* end function main */";
}
void Program_Control::for_loop()
{
	cout<<"A for loop repeats a block of code for a fixed number of times\n.The following is an example of such a program\n";
	cout<<"#include<stdio.h>\nint main()\n{\nint counter; /* define counter */\n/* initialization, repetition condition, and increment are all included in the for statement header. */\n{\n printf( \"%d\n\", counter );\n} /* end for */\n return 0; /* indicate program ended successfully */\n} /* end function main */";
}
void Program_Control::switch_statement()
{
	cout<<"This is a multiple selection statement that uses cases and is easier to use than the if selection statement. The following code shows an example of a switch statement\n";
	cout<<"/* Counting letter grades */\n #include <stdio.h>\n/* function main begins program execution */\nint main()\n{\nint grade; /* one grade */\nint aCount = 0; /* number of As */\nint bCount = 0; /* number of Bs */\n int cCount = 0; /* number of Cs */\nint dCount = 0; /* number of Ds */\n int fCount = 0; /* number of Fs */\nprintf( \"Enter the letter grades.\n\" );\n printf( \"Enter the EOF character to end input.\n\" );\n /* loop until user types end-of-file key sequence */\n while ( (grade=getchar()) != EOF )\n {\n /* determine which grade was input */\nswitch(grade)\n{\ncase A:/* grade was uppercase A */\ncase a:/* or lowercase a */\n ++aCount; /* increment aCount */\n break;/* necessary to exit switch */\ncase B:/* grade was uppercase B */\ncase b:/* or lowercase b */\n ++bCount; /* increment bCount */\n break;/* exit switch */\ncase C:/* grade was uppercase C */\ncase c:/* or lowercase c */\n ++cCount; /* increment cCount */\n break;/* exit switch */\ncase D:/* grade was uppercase D */\ncase d:/* or lowercase d */\n ++dCount; /* increment dCount */\n break;/* exit switch */\ncase F:/* grade was uppercase F */\ncase f:/* or lowercase f */\n ++fCount; /* increment fCount */\ndefault:\n printf( \"Incorrect letter grade entered.\" );\n printf( \" Enter a new grade.\n\" );\n break;\n } /* end switch */\n }\n /* output summary of results */\n printf( \"\nTotals for each letter grade are:\n\" );\n printf( \"A: %d\n\", aCount ); /* display number of A grades */\n printf( \"B: %d\n\", bCount ); /* display number of B grades */\n printf( \"C: %d\n\", cCount ); /* display number of C grades */\n printf( \"D: %d\n\", dCount ); /* display number of D grades */\n printf( \"F: %d\n\", fCount ); /* display number of F grades */\n return 0; /* indicate program ended successfully */\n } /* end function main *//* exit switch */";
}
void Program_Control::do_while()
{
	cout<<"This repetition construct executes code first before checking the looping condition.\nThe following is an example of such a program\n";
	cout<<"include <stdio.h>\n/* function main begins program execution */\nint main()\n{\nint counter = 1; /* initialize counter */\n do\n {\nprintf( \"%d \", counter ); /* display counter */\n}\n while ( ++counter <= 10 ); /* end do...while*/\n return 0; /* indicate program ended successfully */} /* end function main */";
}
void Program_Control::break_continue()
{
	cout<<"The break statement is used to exit from the loop\nOn the other hand, the continue statement skips the remaining part of the control statement amd executes the next loop\n";
}
void Program_Control::logical_operators()
{
	cout<<"Logical AND:&&\nLogical OR:||\nLogical NOT:!\n";
}
void Program_Control::point_to_note()
{
	cout<<"Never confuse the equality operator(==) with the assignment operator(=)\n";
}

//class Functions
class Functions
{
public:
	void modules();
	void function_definition();
	void funtion_prototypes();
	void call_by_value();
	void random();
};
void Functions::modules()
{
cout<<"Modules in C are known as funtions and programs are composed of many functions\n";
}
void Functions::function_definition()
{
	cout<<"return-value-type function-name( parameter-list )\n{\ndefinitions\nstatements\n}\n";
}
void Functions::funtion_prototypes()
{
	cout<<"#include<stdio.h>\nint square(int y)//prototype\nint main()\n{\nint x\n;for(x=1;x<=10;x++)\n{\nprintf(\n\"%d\",square(x));\n}\nprintf(\"\n\");return 0;\n}\nint square(int y)\n{\nreturn y*y;\n}";
}
void Functions::call_by_value()
{
	cout<<"The parameter values are copied and passed to the main function\nThe following code is an example of pass by value\n#include<stdio.h>\nint square(int y)//prototype\nint main()\n{\nint x\n;for(x=1;x<=10;x++)\n{\nprintf(\n\"%d\",square(x));\n}\nprintf(\"\n\");return 0;\n}\nint square(int y)\n{\nreturn y*y;\n}";
}
void Functions::random()
{
	cout<<"Function rand();outputs a random number\n";
	cout<<"#include <stdio.h>\n#include <stdlib.h>\n/* function main begins program execution */\nint main()\n{\nint i; /* counter */\for ( i = 1; i <= 20; i++ )\n{\n /* pick random number from 1 to 6 and output it */\nprintf( \"%10d\", );\n /* if counter is divisible by 5, begin new line of output */\nif ( i % 5 == 0 )\n { printf( \"\n\" );\n } /* end if */\n} /* end for */\n return 0; /* indicates successful termination */\n } /* end main */";
}


//class Arrays
class Arrays
{
public:
	void definition(){
	cout<<"To use arrays; they have to be declared as any other variable, but with a size, that is:\n \nint a[SIZE]";
	}
};

//class Files
class Files
{
public:

	void creating_sequential_files(){
	cout<<"Creating a file for writing into:\nThe following call function is used: \nfp = fopen (fname, “r”) ;";
	}
	void reading_sequential_files(){

	cout<<" Reading from a file:\n	FILE *fopen(), *fp; int c ; fp = fopen( “prog.c”, “r” ); \nc = getc( fp ) ; \nwhile (  c != EOF )\n{\nputchar( c );\nc = getc ( fp );\n}\nfclose( fp );\n}";
	}
	
};

void Instructions::instructions()
{

cout<<"1:First C program \n";
cout<<"2: Simple Calculator\n";
cout<<"3: C memory concepts\n";
cout<<"4: C arithmetic concepts\n";
cout<<"5: Decision making in C\n";
cout<<"6: Algorithms\n";
cout<<"7: Pseudocode\n";
cout<<"8: Control structures\n";
cout<<"9: If statements\n";
cout<<"10: If else statements\n";
cout<<"11: While repetition\n";
cout<<"12: Stepwise Refinement \n";
cout<<"13: Assignment operators\n";
cout<<"14: Increment and decrement Structured Development\n";
cout<<"15: repetition Essentials Introduction\n";
cout<<"16: While Loop Example\n";
cout<<"17:For Loop Example \n";
cout<<"18: Switch Statement Example\n";
cout<<"19: Do While Example\n";
cout<<"20: Break and Continue Operators Introduction\n";
cout<<"21: Logical Operators Introduction\n";
cout<<"22: Program Control Introduction\n";
cout<<"23: Function Module Introduction\n";
cout<<"24: Function Definition\n";
cout<<"25: Function Prototypes Example Codes\n";
cout<<"26: Call By Value Introduction\n";
cout<<"27: Random Number Generation\n";
cout<<"28: How to Use Arrays\n";
cout<<"29: Creating and Writing Sequential Files\n";
cout<<"30:Reading From Sequential Files \n";
}


