/*Ex2 - Devoir 3 CSI2772A*/

#include <iostream>
//#include <process.h>
using namespace std;
const int capacity = 20;	// size string
int incrementation  =  0 ; // track the max of the LinkedList

struct 	Evaluation
{
	char student[capacity];
	int grade;
	Evaluation* next;
};

Evaluation* add(Evaluation*, int&);   // &T
Evaluation* remove(Evaluation*, int&);
void display(Evaluation*);
int average(Evaluation*, int const&);
Evaluation* head = NULL; //	the head of linkedList



