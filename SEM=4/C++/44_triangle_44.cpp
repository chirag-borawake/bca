/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Write a C++ program to find area of triangle, circle, and rectangle using function overloading.
*/
#include<conio.h>
#include<iostream.h>
int getArea(int b,int h)
{
	return (0.5*b*h);
}
int getArea(int r)
{
	return ( 2*3.14*r*r);
}
int getArea(int l,int b,int h)
{
	return (l*b*h);
}
main()
{
	int t_b,t_h,r_t,r_l,r_b,r_h,r;
	clrscr();
	cout<<"\n Enter base and height of triangle:";
	cout<<"\n Enter base:";
	cin>>t_b;
	cout<<"\n Enter height:";
	cin>>t_h;
	cout<<"\n Area of triangle:"<<getArea(t_b,t_h);
	
	cout<<"\n Enter length, breath and height of rectangle:";
	cout<<"\n Enter length:";
	cin>>r_l;
	cout<<"\n Enter base:";
	cin>>r_b;
	cout<<"\n Enter height:";
	cin>>r_h;
	cout<<"\n Area of triangle:"<<getArea(r_l,r_b,r_h);

	cout<<"\n Enter redius of circle:";
	cin>>r;
	cout<<"\n Area of triangle:"<<getArea(r);
	getch();
	return 0;
}
/*Out put:-

 Enter base and height of triangle:
 Enter base:3

 Enter height:4

 Area of triangle:6
 Enter length, breath and height of rectangle:
 Enter length:3

 Enter breath :4

 Enter height:5

 Area of triangle:60
 Enter redius of circle:23

 Area of triangle:3322

*/
