/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q `Consider a C++ class 
Class Matrix
{
		int a[3][3];
	Public:
		//member functions;
}; 
Write a necessary member function to accept & display matrix. Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading).		
*/
#include<conio.h>
#include<iostream.h>
class Matrix
{
	int a[3][3];
	public:
	void getMatrix();
	void putMatrix();
	Matrix operator+(Matrix);
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
Matrix Matrix :: operator+(Matrix m1)
{
	Matrix temp;
	for( int  i = 0; i < 3 ;i ++)
	{
		for(int j = 0;j < 3;j ++)
		{
			temp.a[i][j]=a[i][j] + m1.a[i][j];
		}
	}
	return temp;
}
main()
{
	Matrix m1,m2,m3;
	clrscr();
	cout<<"\n Enter matrix A\n";
	m1.getMatrix();
	cout<<"\n Enter matrix B\n";
	m2.getMatrix();
	m3=m1+m2;
	cout<<"\n Matrix A\n\n";
	m1.putMatrix();
	cout<<"\n Matrix B\n\n";
	m2.putMatrix();
	cout<<"\n Addition of matrix A & B\n\n";
	m3.putMatrix();
	getch();
	return 0;
}
/*
Out Put:-
 Enter matrix A
 Enter value at Matrix(11)location:3

 Enter value at Matrix(12)location:4

 Enter value at Matrix(13)location:3
 
 Enter value at Matrix(21)location:4

 Enter value at Matrix(22)location:2

 Enter value at Matrix(23)location:3

 Enter value at Matrix(31)location:4

 Enter value at Matrix(32)location:2

 Enter value at Matrix(33)location:3

 Enter matrix B

 Enter value at Matrix(11)location:4

 Enter value at Matrix(12)location:5

 Enter value at Matrix(13)location:4

 Enter value at Matrix(21)location:3

 Enter value at Matrix(22)location:4

 Enter value at Matrix(23)location:5

 Enter value at Matrix(31)location:4

 Enter value at Matrix(32)location:3

 Enter value at Matrix(33)location:4

 Matrix A

 3 4 3
 4 2 3
 4 2 3

 Matrix B

 4 5 4
 3 4 5
 4 3 4

 Addition of matrix A & B

 7 9 7
 7 6 8
 8 5 7
*/
