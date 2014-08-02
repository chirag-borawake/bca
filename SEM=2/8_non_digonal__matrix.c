/* Program to calculate sum of non-diagonal elements of an nXn matrix.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sum=0,matrix[9][9],m,n;
	clrscr();
	printf("\n Enter matrix for finding addition of non diagonal element.");
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
	printf("\n Non diagonal elements are :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i!=j && (i+j)!=m-1)
			{
			      printf(" %5d",matrix[i][j]);
			}
			else
			{
				printf("      ");
			}
		}
		printf("\n\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{

			if(i!=j && (i+j)!=m-1)
			{
			       sum+=matrix[i][j];
			}
		}
	}
	printf("\n Addition of non-diagonal element is %d.",sum);
	getch();
}
/*
Out put:-

 Enter matrix for finding addition of non diagonal element.                     
 Enter value for m:3                                                            
                                                                                
 Enter value for n:3                                                            
                                                                                
 Enter value at R(11) location:1                                                
                                                                                
 Enter value at R(12) location:2                                                
                                                                                
 Enter value at R(13) location:3                                                
                                                                                
 Enter value at R(21) location:7                                                
                                                                                
 Enter value at R(22) location:5                                                
                                                                                
 Enter value at R(23) location:8
                                                                                
 Enter value at R(31) location:9                                                
                                                                                
 Enter value at R(32) location:4                                                
                                                                                
 Enter value at R(33) location:6                                                
                                                                                
 Given matrix is:                                                               
                                                                                
    1    2    3                                                                 
                                                                                
    7    5    8                                                                 
                                                                                
    9    4    6                                                                 
                                                                                
                                                                                
 Non diagonal elements are :                                                    
           2                                                                    
                                                                                
     7           8                                                              
                                                                                
           4                                                                    
                                                                                
                                                                                
 Addition of non-diagonal element is 21.                                        
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


*/