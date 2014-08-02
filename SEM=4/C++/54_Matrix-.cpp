/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q Consider a C++ class
	Class Matrix
	{
			int a[3][3];
		Public:
			//member functions;
	}; 
Write a necessary member function to accept & display matrix. Overload the – (Unary) operator to negate the numbers stored in the object.					  [15 Marks].		
*/
#include<conio.h>
#include<iostream.h>
class Matrix
{
	int a[3][3];
	public:
	void getMatrix();
	void putMatrix();
	void operator-();
}; 
void Matrix :: getMatrix()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"\n Enter value at Matrix(" <<i+1<< j+1<<")location:";
			cin>>a[i][j];
		}
	}
}
void Matrix :: putMatrix()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<"\n";
	}
}
void Matrix :: operator-()
{
	for( int  i = 0; i < 3 ;i ++)
	{
		for(int j = 0;j < 3;j ++)
		{
			a[i][j]=-a[i][j];
		}
	}
}
main()
{
	Matrix m1;
	clrscr();
	cout<<"\n Enter matrix A\n";
	m1.getMatrix();
	cout<<"\n Given matrix.\n\n";
	m1.putMatrix();
	-m1;
	cout<<"\n After negated matrix A.\n\n";
	m1.putMatrix();
	getch();
	return 0;
}
/*
Out Put:-
 Enter matrix A

 Enter value at Matrix(11)location:2

 Enter value at Matrix(12)location:3

 Enter value at Matrix(13)location:5

 Enter value at Matrix(21)location:3

 Enter value at Matrix(22)location:5

 Enter value at Matrix(23)location:6

 Enter value at Matrix(31)location:4

 Enter value at Matrix(32)location:5

 Enter value at Matrix(33)location:6

 Given matrix.

 2 3 5
 3 5 6
 4 5 6

 After negated matrix A.

 -2 -3 -5
 -3 -5 -6
 -4 -5 -6


*/