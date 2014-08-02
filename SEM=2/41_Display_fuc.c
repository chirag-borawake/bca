/* Program to display elements of an mXn matrix.*/
#include<stdio.h>
#include<conio.h>
void display_matrix(int,int,int*);
void main()
{
	int i,j,matrix[9][9],m,n;
	clrscr();
	printf("\n Enter matrix.");
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
	display_matrix(m,n,matrix);
	getch();
}
void display_matrix(int a,int b,int *matrix)
{
	int i,j;
	printf("\n Given matrix is:\n\n");
	for(i=0;i<a;i++)
	{         
		for(j=0;j<b;j++)
		{
			printf("%8d",*(matrix+i*9+j));
		}
		printf("\n\n");
	}
}
/*

 Enter matrix.
 Enter value for m:2

 Enter value for n:2

 Enter value at R(11) location:3

 Enter value at R(12) location:2

 Enter value at R(21) location:3

 Enter value at R(22) location:4

 Given matrix is:

       3       2

       3       4


*/














                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
