/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q.Write a C++ program using class to check maximum of two integer numbers using Inline function and conditional operator.
*/
#include<conio.h>
#include<iostream.h>
class CLASS
{
	public :
	int inline findMax(int x,int y)
	{
		return (x > y ? x : y);
	}
};
main()
{
	int num1,num2;
	CLASS c;
	clrscr();
	cout<<"\n Entre first number:";
	cin>>num1;
	cout<<"\n Entre second number:";
	cin>>num2;
	cout<<"\n Max number is:"<<c.findMax(num1,num2);
	getch();
	return 0;
}

/* Out Put:-

 Entre first number:5                                                           
 
 Entre second number:8                                                          
 Max number is:8                                                                
 */
