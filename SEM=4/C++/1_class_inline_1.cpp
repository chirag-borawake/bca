/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
 Q. Write a C++ program using class with data member’s int feet, float inches to represent distance and define function that takes distance as argument and returns the larger one. Include a main program that accepts two distance figures from the user compare them and displays the larger using Inline function.		  				  		
*/
#include<conio.h>
#include<iostream.h>
class Distance
{
	int feet;
	float inches;
	public :
	void getData(void);
	int  findFeetMax(Distance);
	float  findIncheMax(Distance);
};
inline int Distance :: findFeetMax(Distance d2)
{
	if(feet > d2.feet)
	{
		return feet;
	}
	else
	{
		return d2.feet;
	}
}
inline float Distance:: findIncheMax(Distance d2)
{
	if(inches > d2.inches)
	{
		return inches;
	}
	else
	{
		return d2.inches;
	}
}
void Distance :: getData()
{
	cout<<"\n Enter distance in inches:";
	cin>>inches;
	cout<<"\n Enter feet distance:";
	cin>>feet;
}

main()
{
	Distance d1,d2;
	d1.getData();
	d2.getData();
		cout<<"\n Large feet distance is:"<<d1.findFeetMax(d2);
	cout<<"\n Large inche distance is:"<<d1.findIncheMax(d2);
	getch();
	return 0;
}

/*
Out put :-

 Enter distance in inches:12

 Enter feet distance:3

 Enter distance in inches:2

 Enter feet distance:4

 Large feet distance is:4
 Large inche distance is:12 
 
*/
  