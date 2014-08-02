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
	printf("\n lower triangular elements are:\n\n");
	for(i=m-1;i>=0;i--)
	{
		for(j=i;j>=0;j--)
		{
			printf("%5d",matrix[i][j]);
		}
		printf("\n\n");
	}
	
	for(i=m-1;i>=0;i--)
	{
		for(j=i;j>=0;j--)
		{
			sum+=matrix[i][j];
		}
	}
	printf("\n Addition=%d",sum);
	getch();
}
/*
out put :-

 Enter matrix for calculate sum of elements of upper triangle.                  
 Enter value for m:3                                                            
                                                                                
 Enter value for n:3                                                            
                                                                                
 Enter value at R(11) location:4                                                
                                                                                
 Enter value at R(12) location:5                                                
                                                                                
 Enter value at R(13) location:6

 Enter value at R(21) location:7

 Enter value at R(22) location:8

 Enter value at R(23) location:9

 Enter value at R(31) location:1

 Enter value at R(32) location:2

 Enter value at R(33) location:4

 Given matrix is:

    4    5    6

    7    8    9

    1    2    4


 lower triangular elements are:

    4    2    1

    8    7

    4


 Addition=26

  */





