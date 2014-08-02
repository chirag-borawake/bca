/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Write a menu driven C++ program using class to calculate Area and Volume of rectangle using inline function.
*/
#include<conio.h>
#include<iostream.h>
class CLASS
{
	int area,volume;
	public :
	int inline getArea(int l,int b)
	{
		return area =(l*b);
	}
	int inline getVolume(int l,int b,int h)
	{
		return volume =(l*b*h);
	}
};
main()
{
	CLASS c;
	clrscr();
	int a_l,a_b,v_l,v_b,h;
	cout<<"\n Enter length and breath to find out area of rectangle:";
	cout<<"\n Enter length:";
	cin>>a_l;
	cout<<"\n Enter breath:";
	cin>>a_b;
	cout<<"\n Area of rectangle:"<<c.getArea(a_l,a_b);
	cout<<"\n Enter length,breath and heigth to find out volume of rectangle:";
	cout<<"\n Enter length:";
	cin>>v_l;
	cout<<"\n Enter breath:";
	cin>>v_b;
	cout<<"\n Enter height:";
	cin>>h;
	cout<<"\n Volume of rectangle:"<<c.getVolume(v_l,v_b,h);
	getch();
	return 0;
}
/*
Out put:-

 Enter length and breath to find out area of rectangle:
 Enter length:
4

 Enter breath:3

 Area of rectangle:12
 Enter length,breath and heigth to find out volume of rectangle:
 Enter length:4

 Enter breath:2

 Enter height:5

 Volume of rectangle:40


*/ 