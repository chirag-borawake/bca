/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Consider a C++ class 
	Class Matrix
	{
			int a[3][3];
		Public:
			//member functions.
	}; 
Write a necessary member function to accept & display matrix. Let m1 and m2 are two matrices. Find out m3=m1*m2(use operator overloading). 			
*/
#include<conio.h>
#include<iostream.h>
class Matrix
{
	int a[3][3];
	public:
	void getMatrix();
	void putMatrix();
	Matrix operator*(Matrix);
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
Matrix Matrix :: operator*(Matrix m1)
{
	Matrix temp;
	int sum = 0;
	for ( int i = 0 ; i < 3 ; i++ )
	{
		for ( int j = 0 ; j < 3 ; j++ )
		{ 
			for ( int k = 0 ; k < 3 ; k++ )
			{
				sum += m1.a[i][k] * a[k][j];
			}
			temp.a[i][j] = sum;
			sum = 0;
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
	m3=m1 * m2;
	cout<<"\n Matrix A\n\n";
	m1.putMatrix();
	cout<<"\n Matrix B\n\n";
	m2.putMatrix();
	cout<<"\n Multiplication of matrix A & B\n\n";
	m3.putMatrix();
	getch();
	return 0;
}
/*
 Enter matrix B
 
 Enter value at Matrix(11)location:1

 Enter value at Matrix(12)location:2

 Enter value at Matrix(13)location:3
 
 Enter value at Matrix(21)location:4

 Enter value at Matrix(22)location:3

 Enter value at Matrix(23)location:4

 Enter value at Matrix(31)location:2

 Enter value at Matrix(32)location:5

 Enter value at Matrix(33)location:6

 Enter matrix B

 Enter value at Matrix(11)location:3

 Enter value at Matrix(12)location:5

 Enter value at Matrix(13)location:2

 Enter value at Matrix(21)location:5

 Enter value at Matrix(22)location:3

 Enter value at Matrix(23)location:5

 Enter value at Matrix(31)location:2

 Enter value at Matrix(32)location:4

 Enter value at Matrix(33)location:5

 Matrix A

 1 2 3
 4 3 4
 2 5 6

 Matrix B

 3 5 2
 5 3 5
 2 4 5

 Multiplication of matrix A & B

 19 23 27
 35 45 43
 43 49 59
 */
