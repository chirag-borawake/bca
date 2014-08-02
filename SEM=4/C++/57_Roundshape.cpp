

/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Create a base class Roundshape(radius).
Derive three different shapes as Circle, Sphere and cylinder(height) from Roundshape.
class Roundshape
{
	protected : float radius;
	public: static float Pi;
	Roundshape(float);    //default argument
	virtual float area( )=0;
};
Write a C++ program to calculate area of Circle, Sphere and cylinder.
*/
#include<iostream.h>
#include<conio.h>
class Roundshape
{
	protected:
		float r;
	static float pi;
	public:
	Roundshape(float r1=10.5)
	{
		r=r1;
	}
	virtual float findarea()=0;
}; 
float Roundshape ::pi=3.14;
class Circle:public Roundshape
{
	float area;
	public:
	Circle(float r1):Roundshape(r1)
	{

	}
	Circle():Roundshape()
	{
	;
	}
	float findarea()
	{
		area=pi*r*r;
		return area;
	}
}; 
class Sphere:public Roundshape
{
	float A;
	public:
	Sphere(float r1):Roundshape(r1)
	{

	}
	Sphere ():Roundshape()
	{

	}
	float findarea()
	{
		A=4*pi*r*r;
		return A;
	}
}; 
class Cylinder:public Roundshape
{
	float area,h;
	public:
	Cylinder(float r1,float h1):Roundshape(r1)
	{
	       h=h1;
	}
	Cylinder ():Roundshape()
	{
	}
	float findarea()
	{
		area=pi*r*r*h;
		return area;
	}
};  
void main()
{
       clrscr();
       float r,h;
       cout<<"\nEnter radius of cirlce\n";
       cin>>r;
       Circle c(r);
       cout<<"\nEnter radius of sphere\n";
       cin>>r;
       Sphere s(r);
       cout<<"\nEnter radius of sphere:";
       cin>>r;
       cout<<"\nEnter height of sphere:";
	   cin>>h;
       Cylinder Cy(r,h);
       Roundshape *b;
       b=&c;
       cout<<"\nArea of Circle:\t"<<b->findarea();
       b=&s;
       cout<<"\nArea of Sphere:\t"<<b->findarea();
       b=&Cy;
       cout<<"\nArea of Cylinder:\t"<<b->findarea();
       getch();
} 
/*
Out put:

Enter radius of cirlce
4

Enter radius of sphere
5

Enter radius of sphere:4

Enter height of sphere:5

Area of Circle: 50.240002
Area of Sphere: 314
Area of Cylinder:       251.200012

*/