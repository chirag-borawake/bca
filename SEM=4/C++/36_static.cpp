/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Design a C++ class which contain static data member and member function show() which displays number of times display operation is performed irrespective of the object responsible for display using static data member.		  					 
*/ 
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class demo
{
	int n;
	static int cnt;
	public:
	demo(int p)
	{
		n=p;
	}
	void display()
	{
		cout<<"\n"<<n;
		cnt++;
	}
	void show()
	{
		cout<<"\n\nDisplay operation is performed "<<cnt<<" times";
	}
};
int demo::cnt;
void main()
{
	demo a(10),b(20),c(30);
	clrscr();
	a.display();
	b.show();
	b.display();
	b.show();
	c.display();
	c.show();
	getch();
}

/*Out put:-

10

Display operation is performed 1 times
20

Display operation is performed 2 times
30

Display operation is performed 3 times

*/
