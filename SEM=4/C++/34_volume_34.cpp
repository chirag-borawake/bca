/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
34. Write a C++ program to find volume of cube, cylinder and rectangle using function overloading
*/
#include<conio.h>
#include<iostream.h>
const PI = 3.14;
int getVolume(int l)
{
	return (l*l*l);
}
int getVolume(int r,int l)
{
	return ( 2*PI*r*r*l);
}
int getVolume(int l,int b, int h)
{
	return (l*b*h);
}
main()
{
	int cube_l,r_l,r_b,r_h,c_r,c_l;
	clrscr();
	cout<<"\n Enter length of cube to find out volume:";
	cin>>cube_l;
	cout<<"\n Volume of cube:"<<getVolume(cube_l);
	cout<<"\n Enter length and redius of cylinder to find out volume.\n Enter length: ";
	cin>>c_r;
	cout<<"\n Enter redius:";
	cin>>c_l;
	cout<<"\n Volume of cylinder:"<<getVolume(c_r,c_l);
	cout<<"\n Enter length,breath and height of rectangle to find out valume:";
	cout<<"\n Enter length:";
	cin>>r_l;
	cout<<"\n Enter breath:";
	cin>>r_b;
	cout<<"\n Enter heigth:";
	cin>>r_h;
	cout<<"\n Volume of rectangle:"<<getVolume(r_l,r_b,r_h);
	getch();
	return 0;
}
/*

 Enter length of cube to find out volume:3

 Volume of cube:27
 Enter length and redius of cylinder to find out volume.
 Enter length: 3

 Enter redius:4

 Volume of cylinder:216
 Enter length,breath and height of rectangle to find out valume:
 Enter length:3

 Enter breath:4

 Enter heigth:5

 Volume of rectangle:60

*/