/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Consider a class point containing x and y coordinates. Write necessary functions for the following cases:
1. to accept a point 
2. to display it 
3. to find distance between  two points using operator overloading (-)
	(Use friend function)
*/
#include<conio.h>
#include<iostream.h>
#include<math.h>
class Point
{
	int x,y;
	public:
	void getData()
	{
		cout<<"\n Enter value for x:";
		cin>>x;
		cout<<"\n Enter value for y:";
		cin>>y;
	}
	void display()
	{
		cout<<"\n Value of x:"<<x;
		cout<<"\n Value of y:"<<y;
	}
	friend float operator -(Point ,Point );
};
float operator -(Point p1,Point p2)
{
	float len;
	len=(p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y);
	len=sqrt(len);
	return len;
}
main()
{
	Point p1, p2;;
	clrscr();
	cout<<"\n Enter first record.";
	p1.getData();
	cout<<"\n Enter second record.";
	p2.getData();
	cout<<"\n First record.\n";
	p1.display();
	cout<<"\n Second record.\n";
	p2.display();
	float len;
	len=p1-p2;		 
	cout<<"\n The length between these two points is "<<len;
	getch();
	return 0;
}
/* out put:

 Enter first record.
 Enter value for x:10

 Enter value for y:32

 Enter second record.
 Enter value for x:32

 Enter value for y:45

 First record.

 Value of x:10
 Value of y:32
 Second record.

 Value of x:32
 Value of y:45
 The length between these two points is 25.553865

*/



