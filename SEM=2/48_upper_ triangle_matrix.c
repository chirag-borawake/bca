/* Program to calculate sum of elements of upper triangle of a nXn matrix.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sum=0,matrix[9][9],m,n;
	clrscr();
	printf("\n Enter matrix for calculate sum of elements of upper triangle.");
	printf("\n Enter value for m:");
	scanf("%d",&m);
	printf("\n Enter value for n:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n Enter value at R(%d%d) location:",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\n Given matrix is:\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",matrix[i][j]);
		}
		printf("\n\n");
	}
	printf("\n Upper triangular elements are:\n\n");
	for(i=0;i<m;i++)
	{
		for(j=1;j<m;j++)
		{
			printf("%5d",matrix[i][j]);
		}
		printf("\n\n");
	}
	
	for(i=0;i<m;i++)
	{
		for(j=i;j<m;j++)
		{
			sum+=matrix[i][j];
		}
	}
	printf("\n Addition=%d",sum);
	getch();
}
/*
 Enter matrix for calculate sum of elements of upper triangle.
 Enter value for m:3

 Enter value for n:3

 Enter value at R(11) location:2

 Enter value at R(12) location:3

 Enter value at R(13) location:4

 Enter value at R(21) location:5

 Enter value at R(22) location:1

 Enter value at R(23) location:6

 Enter value at R(31) location:7

 Enter value at R(32) location:8

 Enter value at R(33) location:6

 Given matrix is:

    2    3    4

    5    1    6

    7    8    6


 Upper triangular elements are:

    3    4

    1    6

    8    6


 Addition=22

*/





