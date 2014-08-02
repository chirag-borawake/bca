/* Program for the transpose of matrix.*/
#include<conio.h>
#include<stdio.h>
void main()
{
	int matrix[9][9],i,j,m,n;
	clrscr();
	printf("\n Enter order of matrix for finding transpose.\n Enter value for m:");
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
			printf(" %d",matrix[i][j]);
		}
		printf("\n\n");
	}
	printf("\n Transpose of matrix is:\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d",matrix[j][i]);
		}
		printf("\n\n");
	}
	getch();
}
/*

 Enter order of matrix for finding transpose.
 Enter value for m:3

 Enter value for n:3

 Enter value at R(11) location:3

 Enter value at R(12) location:4

 Enter value at R(13) location:5

 Enter value at R(21) location:3

 Enter value at R(22) location:2

 Enter value at R(23) location:3                                                
                                                                                
 Enter value at R(31) location:4                                                
                                                                                
 Enter value at R(32) location:5                                                
                                                                                
 Enter value at R(33) location:3                                                
                                                                                
 Given matrix is:                                                               
                                                                                
 3 4 5                                                                          
                                                                                
 3 2 3                                                                          
                                                                                
 4 5 3                                                                          
                                                                                
                                                                                
 Transpose of matrix is:                                                        
                                                                                
 3 3 4                                                                          
                                                                                
 4 2 5                                                                          
                                                                                
 5 3 3                                                                          
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/