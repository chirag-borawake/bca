/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
 Q.Create a C++ class vector that contains series of n numbers. Perform the Pre-Increment and Post- Decrement operations on a vector object using operator overloading.
(Use friend Function).								     	  
*/
#include<conio.h>
#include<string.h>
#include<iostream.h>
class Vector
{
	int n[10];
	int size;
	public:
	Vector(int s);
	void display();
	friend void operator++(Vector &);
	friend void operator--(Vector &);
};
Vector::Vector(int s)
{
	size=s;
	for(int i=0;i<size;i++)
	{
		cout<<"\n Enter vector element "<<i+1<<":";
		cin>>n[i];
	}
}
void Vector::display()
{
	cout<<"(";
	for(int i=0;i<size-1;i++)
	{
		cout<<n[i]<<",";
	}
	cout<<n[size-1];
	cout<<")";
}
void  operator ++(Vector &v)
{
	for(int i=0;i<v.size;i++)
	{
		++v.n[i];
	}
}
void operator --(Vector &v)
{
	for(int i=0;i<v.size;i++)
	{
		v.n[i]--;
	}
}
void main()
{
	int s;
	clrscr();
	cout<<"\n Enter size of vector:";
	cin>>s;
	Vector m(s);
	cout<<"\n\nVector is :";
	m.display();
	cout<<"\n\n Vector after pre-increment is:";
	++m;
	m.display();
	cout<<"\n\nVector after post-decrement is:";
	m--;
	m.display();
	getch();
}

/*out put:-

 Enter size of vector:3

 Enter vector element 1:2

 Enter vector element 2:3

 Enter vector element 3:5


Vector is :(2,3,5)

 Vector after pre-increment is:(3,4,6)

Vector after post-decrement is:(2,3,5)

 */


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
