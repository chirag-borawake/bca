/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Consider a C++ class 
	Class matrix
	{
			int **p;		
			int r,c;
		Public: 
			//member functions
	}
Write a necessary member functions to accept & display matrix element. Use constructor to construct two dimensional arrays using new operator. 
*/
#include<conio.h>
#include<iostream.h>
class Matrix
{
	int **p;
	int r,c;
	public:
	Matrix(int,int);
	void getMatrix();
	void displayMatrix();
};
void Matrix :: getMatrix()
{
	for(int i = 0;i < r;i ++)
	{
		for(int j = 0;j < c;j ++)
		{
			cout<<"\n Enter value at Matrix(" <<i+1<< j+1<<")location:";
			cin>>p[i][j];
		}
	}
}
void Matrix :: displayMatrix()
{
	for(int i = 0;i < r;i ++)
	{
		for(int j = 0;j <c ;j ++)
		{
			cout<<"  "<<p[i][j];
		}
		cout<<"\n";
	}
}
Matrix :: Matrix(int x,int y)
{
	r = x;
	c = y;
	p = new int *[c];
	for(int i = 0;i < c; i++)
	{
		p[i] = new int [r];
	}
}
main()
{
	int r,c;
	clrscr();
	cout<<"\n Enter matrix \n Enter how many rows:";
	cin>>r;
	cout<<"\n Enter value for columns:";
	cin>>c;
	Matrix A(r,c);
	A.getMatrix();
	cout<<"\n Given matrix is.\n\n";
	A.displayMatrix();
	getch();
	return 0;
}

/* Out Put:-

 Enter matrix
 Enter how many rows:3                                                                               
 Enter value for columns:4                                                                                      
 Enter value at Matrix(11)location:3                                                                     
 Enter value at Matrix(12)location:4                                                                                  
 Enter value at Matrix(13)location:5                                            
 Enter value at Matrix(14)location:3                                            
 Enter value at Matrix(21)location:4                                            
 Enter value at Matrix(22)location:5                                            
 Enter value at Matrix(23)location:7                                            
 Enter value at Matrix(24)location:9                                            
 Enter value at Matrix(31)location:1                                            
 Enter value at Matrix(32)location:3                                            
 Enter value at Matrix(33)location:5                                            
 Enter value at Matrix(34)location:6                                            
 Given matrix is.                                                               
                                                                                
  3  4  5  3                                                                    
  4  5  7  9                                                                    
  1  3  5  6                                                                    
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
