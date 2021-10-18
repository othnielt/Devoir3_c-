/*Ex2 - Devoir 3 CSI2772A*/

#include "myLinkedList.h"

int main()
{
	Evaluation* first = NULL;	//Pointer on the first element of the list
						//the list is empty, so initialization to NULL
	int number = 0;	  //number of elements in the linked  list 
	 	
	int choice;			//choice for the menu

	do
	{
		cout << endl << endl << "1) Display  of the complete linked list.\n";
		cout << "2) Insert an element\n";
		cout << "3) Remove an element.\n";
		cout << "4) Calculation of the class average.\n";
		cout << "5) Exit the program.\n" << endl << endl;
		cout << "Your choice ??:";
		cin >> choice;

		switch (choice)
		{
		case 1: display(first);
			break;
		case 2: 
		first = add(first, number);
			break;
		case 3: first = remove(first, number);
			break;
		case 4: average(first, number);
			break;
		case 5: exit(0);
		default:
			break;
		}
	} while (1);
	return 0;
}



/*
*add() Function*

char student[capacity];
	int grade;
	Evaluation* next;
**/
Evaluation* add(Evaluation*  p, int& number)
{


int compte = 1; 
int studentGrade = 0;
char studentName[20]; 
Evaluation* loup;
Evaluation* x ; 
Evaluation* temps;
Evaluation* suivant  = new Evaluation;
loup = x = temps= p;



// student name
cout << "  student name : " ;

 cin>>studentName;

 suivant->student[20] = studentName[20];

//note
cout << "sudent grade : " ;
cin >> studentGrade;

suivant->grade = studentGrade;


// verifie les elemntes 
if ( p  == NULL && number!= 1 || p != NULL && number == 1) {
cout << "Invalide number of existing elements." ;
return p;
}
else if (p != NULL) {
while (loup != NULL) {

temps = loup;
loup = loup->next;
compte++;
}
if (compte == number) {

x = temps;
}
else if (compte-1 != number) {
cout << "erreur ." ;
return p;
}
}


if (number == 1) {

suivant->next = NULL;
p  = suivant ;

}

else if (x ->next == NULL) {
	

x->next = suivant;
suivant->next = NULL;
}
else if (x->next != NULL) {
Evaluation* temp = x->next;
x->next = suivant;
suivant->next = temp;
cout << x->student<<endl;
}
return p;
}
/*
  
 

	   
    
	 

	
     
	 




}


/**
*remove() Function*
**/

Evaluation* remove(Evaluation* p, int& number)
{
	//VOTRE CODE VIENT ICI
 int compte = 1; 

Evaluation* loup;
Evaluation* x;
Evaluation* temps;
Evaluation* supprime;

loup = x = temps = supprime= p ;

if ( p == NULL || number ==0 ){

cout << " position invalide ";
return p ;
}

else {

	while (loup != NULL ){

		if (compte ==number){


			supprime = loup;

			x = temps;

			break ; 
		}

		temps = loup;
		loup = loup->next;
		compte++;


	}
      int var = compte -1 ; 
	if (var!= number ){


		cout << "error position"<< endl; 

		return p; 
	}

}

		if (number == 1){


			temps = p->next;
			delete p; 
			return temps ;
		}

		if (supprime->next ==NULL ){

            x->next = NULL;
			delete supprime; 

		}

		else {

			x->next = supprime->next;
		}





 return p ; 

	}











/**
*display() Function *
**/
void display(Evaluation* p)
{
	//VOTRE CODE VIENT ICI


Evaluation* value  = p ; 
	while (value != NULL ){


		cout<< "Student: "<<endl;
		cout<< value->student<<endl;
		cout<< "the grade : "<<endl;
		cout<< value->grade<<endl;

		value  = value->next;

	}
}



/**
*average() Function *
***/
int average(Evaluation* p, int const& nbre)
{
	Evaluation*  loup = p ; // permet de parcourir la list

	double total= 0  ; 
    int compte = 0 ; 

	if ( p == NULL || nbre ==0 ){

		cout<< "0"<<endl;

		return 0 ;
	}


	else {

		 while ( loup  != NULL && compte !=nbre)
		 {

			 total = total + loup->grade; 
			 loup = loup->next;
			 compte ++;
			 /* code */
		 }

		 if (nbre != compte){

			 cout<<"errro "<<endl;
		 }

		 else{

			 cout <<"The average of the class is: "<< total/compte;
			 return 1; 
		 }
		 
	}

	
}




