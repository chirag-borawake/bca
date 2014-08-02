/* Program for addition of two matrices */
#include<conio.h>
#include<stdio.h>
void main()
{
	int matrix_a[9][9],matrix_b[9][9],sum_matrix[9][9],i,j,m,n;
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
			sum_matrix[i][j]=matrix_a[i][j]+matrix_b[i][j];
		}
	}
	printf("\n Addition of martrix A & B is:\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",sum_matrix[i][j]);
		}
		printf("\n\n");
	}
	getch();
}
/*
out put:-

 Enter matrix A
 Enter value for m:2

 Enter value for n:2

 Enter value at R(11) location:3

 Enter value at R(12) location:2

 Enter value at R(21) location:3

 Enter value at R(22) location:4

 Enter matrix B
 Enter value for m:2

 Enter value for n:2

 Enter value at R(11) location:3

 Enter value at R(12) location:4

 Enter value at R(21) location:2

 Enter value at R(22) location:4

 Matrix A is

    3    2

    3    4


 Matrix B is

    3    4

    2    4


 Addition of martrix A & B is:

    6    6

    5    8

*/


