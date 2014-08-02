/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012

 Q. Imagine a tollbooth at a bridge. A Car passing by the booth is expected to pay a toll. The tollbooth keeps the track of the number of cars that gone by and the total amount of cash collected.
Create a C++ class tollbooth with the data members as:-
    		-total number of cars passed.
   		-total toll collected. 
Write necessary member functions: 
	1. a constructor that initializes both data members to zero.
  	2. paying car(): when any car passes through  the tollbooth, that much toll gets added into  total toll 
		collected and total number of cars passed is incremented by one.	       
 	3. nonpaying car(): increments the car total but adds nothing to cash total.
	4. display (): displays total no. of cars passed and the total amount collected.
*/
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class Tollbooth
{
	int totalCars;
	int totalToll;
	public:
	Tollbooth()
	{
		totalCars = 0;
		totalToll = 0;
	}
	void payingCar();
	void nonPayingCar();
	void display();
};
void Tollbooth :: payingCar()
{
	totalToll = totalToll + 50;
	totalCars ++;
}
void Tollbooth :: nonPayingCar()
{
	totalCars ++;
}
void Tollbooth :: display()
{
	cout<<"\n Total no of cars passed:"<<totalCars;
	cout<<"\n Total amount collected:"<<totalToll;
}
int menu()
{
	int choice;
	cout<<"\n 1:Car passed.";
	cout<<"\n 2:Display.";
	cout<<"\n 3:Exit.";
	cout<<"\n Enter your choice:";
	cin>>choice;
	return choice;
}
main()
{
	Tollbooth tollbooth;
	clrscr();
	char carType;
	int choice;
	do
	{
		choice=menu();
		switch(choice)
		{
			case 1:
			cout<<"\n Enter car type(paying,non-paying)[P/N]:";
			cin >> carType;
			if(carType == 'P')
			{
				tollbooth.payingCar();
			}
			else if(carType == 'N')
			{
				tollbooth.nonPayingCar();
			}
			else
			{
				cout<<"\n Wroung input.";
			}
			break;
			case 2:
			tollbooth.display();
			break;
		}
	}while(choice!=3);
	getch();
	return 0;
}
/* out put:-

 1:Car passed.
 2:Display.
 3:Exit.
 Enter your choice:1

 Enter car type(paying,non-paying)[P/N]:3

 Wroung input.
 1:Car passed.
 2:Display.
 3:Exit.
 Enter your choice:1

 Enter car type(paying,non-paying)[P/N]:P

 1:Car passed.
 2:Display.
 3:Exit.
 Enter your choice:1

 Enter car type(paying,non-paying)[P/N]:P

 1:Car passed.
 2:Display.
 3:Exit.
 Enter your choice:1

 Enter car type(paying,non-paying)[P/N]:N

 1:Car passed.
 2:Display.
 3:Exit.
 Enter your choice:2

 Total no of cars passed:3
 Total amount collected:100
 1:Car passed.
 2:Display.
 3:Exit.
 Enter your choice:3






                                                                                
                                                                                
                                                                                



