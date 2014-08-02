 /*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q.Write a C++ program using class to calculate square and cube of given number using Inline function.
*/
#include<conio.h>
#include<iostream.h>
class CLASS
{
	int sq,cube;
	public :
	int inline getSquare(int num)
	{
		return sq=(num*num);
	}
	int getCube(int num)
	{
		return cube = (num*num*num);
	}
};
main()
{
	int num;
	CLASS c;
	clrscr();
	cout<<"\n Enter number to calculate its square and cube:";
	cin>>num;
	cout<<"\n Squrae ="<<c.getSquare(num);
	cout<<"\n Cube ="<<c.getCube(num);
	getch();
	return 0;
}
/*
  Out Put:-

 Enter number to calculate its square and cube:3

 Squrae =9
 Cube =27
*/
