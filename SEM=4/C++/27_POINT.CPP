/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
 Q.27. Define a C++ class for a 3 dimensional points. Write necessary member functions for accepting & displaying the point object. Overload the following operators:

	Operator		Example		Purpose
     + (Binary)		p3=p1+p2    adds coordinates of point p1 to p2.
- 	(Unary)		    -p1			Negates coordinates of point p1.
*/
#include<conio.h>
#include<string.h>
#include<iostream.h>
class Point
{
	int x,y,z;
	public:
	Point(){;}
	Point(int, int, int);
	Point operator + (Point);
	void operator -();
	void display();
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
Point Point::operator + (Point p)
{
	Point q;
	q.x=x+p.x;
	q.y=y+p.y;
	q.z=z+p.z;
	return q;
}
void Point::operator -()
{
	x=-x;
	y=-y;
	z=-z;
}
main()
{
	clrscr();
	Point p1(23,45,4),p2(6,8,2),p3;
	cout<<"\n First object is:";
	p1.display();
	cout<<"\n Second object is:";
	p2.display();
	cout<<"\n Addition of first and second:";
	p3=p1+p2;
	p3.display();
	cout<<"\n Negation of first object:";
	-p1;
	p1.display();
	getch();
	return 0;
}
/*out put:-

 First object is:(23,45,4)
 Second object is:(6,8,2)
 Addition of first and second:(29,53,6)
 Negation of first object:(-23,-45,-4)
*/





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
