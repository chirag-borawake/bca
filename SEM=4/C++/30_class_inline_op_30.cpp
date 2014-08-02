/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Write a menu driven C++ program using class to perform all arithmetic operation (+,-,*,/)  (use inline function).
*/
#include<conio.h>
#include<iostream.h>
class CLASS
{
	int a,b;
	public:
	void inline getData(void)
	{
		cout<<"\n Enter first number:";
		cin>>a;
		cout<<"\n Enter second number:";
		cin>>b;
	}
	void switchCase(void);
	int inline add(int x,int y){return x+y;}
	int inline sub(int x,int y){return x-y;}
	int inline mul(int x,int y){return x*y;}
	int inline div(int x,int y){return x/y;}
}c;
main()
{
	c.switchCase();
	return 0;
}
void CLASS :: switchCase()
{
	int choice;
	do
	{
		cout<<"\n 1:Addtion.";
		cout<<"\n 2:Subtraction.";
		cout<<"\n 3:Multiplication.";
		cout<<"\n 4:Division.";
		cout<<"\n 5:Exit.";
		cout<<"\n Enter your choice.";
		cin>>choice;
		switch(choice)
		{	
			case 1:
				c.getData();
				cout<<"\n Addition of numbers:"<<c.add(a,b);
				break;
			case 2:
				c.getData();
				cout<<"\n Subtraction of numbers:"<<c.sub(a,b);
				break;
			case 3:
				c.getData();
				cout<<"\n Multiplication of numbers:"<<c.mul(a,b);
				break;
			case 4:
				c.getData();
				cout<<"\n Division of numbers:"<<c.div(a,b);
				break;	
		}
		getch();
	}while(choice !=5);
}
/*
Out put:-
 Enter your choice.1
                                                                                
 Enter first number:2                                                           
                                                                                
 Enter second number:4                                                          
                                                                                
 Addition of numbers:6                                                          
 1:Addtion.                                                                     
 2:Subtraction.                                                                 
 3:Multiplication.                                                              
 4:Division.
 5:Exit.
 Enter your choice.1

 Enter first number:4

 Enter second number:6

 Addition of numbers:10
 1:Addtion.
 2:Subtraction.
 3:Multiplication.
 4:Division.
 5:Exit.
 Enter your choice.3

 Enter first number:5

 Enter second number:4

 Multiplication of numbers:20
 1:Addtion.
 2:Subtraction.
 3:Multiplication.
 4:Division.
 5:Exit.
 Enter your choice.4

 Enter first number:6

 Enter second number:2

 Division of numbers:3
 1:Addtion.
 2:Subtraction.
 3:Multiplication.
 4:Division.
 5:Exit.
 Enter your choice.5

*/

