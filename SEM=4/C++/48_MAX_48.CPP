/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Write a C++ program which will find the maximum of 3 integer numbers and maximum of 3 float numbers using function overloading.	
*/
#include<conio.h>
#include<iostream.h>
int getMax (int a,int b,int c);
float getMax(float a,float b,float c);
main()
{
	int i_a,i_b,i_c;
	float f_a,f_b,f_c;
	clrscr();
	cout<<"\n Enter three integer numbers to find max.";
	cout<<"\n Enter first number:";
	cin>>i_a;
	cout<<"\n Enter second number:";
	cin>>i_b;
	cout<<"\n Enter third number:";
	cin>>i_c;
	cout<<"\n Max integer number is:"<<getMax(i_a,i_b,i_c);
	cout<<"\n\n Enter three float numbers to find max.";
	cout<<"\n Enter first number:";
	cin>>f_a;
	cout<<"\n Enter second number:";
	cin>>f_b;
	cout<<"\n Enter third number:";
	cin>>f_c;
	cout<<"\n Max integer number is:"<<getMax(f_a,f_b,f_c);
	getch();
	return 0;
}
int getMax(int a,int b,int c)
{
	if(a > b && a > c)
	{
		return a;
	}
	else if(b>c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
float getMax(float a,float b,float c)
{
	if(a>b && a>c)
	{
		return a;
	}
	else if(b > c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
/*
 Enter three integer numbers to find max.
 Enter first number:3

 Enter second number:4

 Enter third number:2

 Max integer number is:4

 Enter three float numbers to find max.
 Enter first number:5.454

 Enter second number:7.534

 Enter third number:2.4543

 Max integer number is:7.534

*/