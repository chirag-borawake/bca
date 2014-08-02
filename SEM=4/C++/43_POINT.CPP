/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
 		
43. Define a C++ class for 3 dimensional points, Write necessary member functions for accepting and displaying the point object. Overload the following operators:

   Operator		Example		Purpose
     * (Binary)		p3=p1*p2           multiplies coordinates of point p1 with p2.
- (Binary)		p3=p2-p1	   subtracts coordinates of p1 from p2.
*/

#include<conio.h>
#include<string.h>
#include<iostream.h>
class Point
{
	int x,y,z;
	public:
	Point(int, int, int);
	void display();
	Point operator * (Point);
	Point operator -(Point);
	Point(){;}
};
Point::Point(int p, int q, int r)
{
	x=p;
	y=q;
	z=r;
}

void Point::display()
{
	cout<<"("<<x<<","<<y<<","<<z<<")";
}
Point Point::operator * (Point p)
{
	Point q;
	q.x = x * p.x;
	q.y = y * p.y;
	q.z = z * p.z;
	return q;
}
Point Point::operator -(Point p)
{
	Point q;
	q.x = x - p.x;
	q.y = y - p.y;
	q.z = z - p.z;
	return q;
}
main()
{
	clrscr();
	Point p1(23,45,4),p2(6,8,2),p3,p4;
	cout<<"\n First object is:";
	p1.display();
	cout<<"\n Second object is:";
	p2.display();
	cout<<"\n Multiplication of first and second:";
	p3 = p1 * p2;
	p3.display();
	cout<<"\n Subtraction of firstand second:";
	p4 = p1 - p2;
	p4.display();
	getch();
	return 0;
}
/* out put :-

 First object is:(23,45,4)
 Second object is:(6,8,2)
 Multiplication of first and second:(138,360,8)
 Subtraction of firstand second:(17,37,2)

 */




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
