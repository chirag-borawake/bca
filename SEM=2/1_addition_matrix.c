/* Program for addition of two matrices */
#include<conio.h>
#include<stdio.h>
void main()
{
	int matrix_a[9][9],matrix_b[9][9],matrix_c[9][9],i,j,m,n,sum=0;
	clrscr();
	printf("\n Enter matrix A\n Enter value for m:");
	scanf("%d",&m);
	printf("\n Enter value for n:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n Enter value at R(%d%d) location:",i+1,j+1);
			scanf("%d",&matrix_a[i][j]);
		}
	}
	printf("\n Enter matrix B\n Enter value for m:");
	scanf("%d",&m);
	printf("\n Enter value for n:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{

		for(j=0;j<n;j++)
		{
			printf("\n Enter value at R(%d%d) location:",i+1,j+1);
			scanf("%d",&matrix_b[i][j]);
		}
	}
	printf("\n Matrix A is\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",matrix_a[i][j]);
		}
		printf("\n\n");
	}
	printf("\n Matrix B is\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",matrix_b[i][j]);
		}
		printf("\n\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			matrix_c[i][j]=matrix_a[i][j]+matrix_b[i][j];
		}
	}
	printf("\n Addition of martrix A & B is:\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",matrix_c[i][j]);
		}
		printf("\n\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum+=matrix_a[i][j];
		}
	}
	printf("\n Sum of all element in matrix A is %d.",sum);
	getch();
}
Out put:-
/*
 Enter value for m:3

 Enter value for n:3

 Enter value at R(11) location:4

 Enter value at R(12) location:5

 Enter value at R(13) location:6

 Enter value at R(21) location:3

 Enter value at R(22) location:2

 Enter value at R(23) location:3

 Enter value at R(31) location:8

 Enter value at R(32) location:9

 Enter value at R(33) location:7

 Matrix A is

    4    3    2

    3    4    5

    6    7    1


 Matrix B is

    4    5    6

    3    2    3

    8    9    7


 Addition of martrix A & B is:

    8    8    8

    6    6    8

   14   16    8


 Sum of all element in matrix A is 35.


*/