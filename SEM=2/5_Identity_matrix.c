#include<stdio.h>
#include<conio.h>
#define FALSE 0
#define TRUE 1
void main()
{
	int matrix[9][9],m,n,i,j,isIdentity=1;
	clrscr();
	printf("\n Enter matrix:\n Enter value for m:");
	scanf("%d",&m);
	printf("\n Enter value for n:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n Enter value at A(%d%d) location:",i,j);
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
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i==j) && (matrix[i][j]!=1))
			{
				isIdentity = FALSE;
				break;
			}
			else if((i!=j) && ( matrix[i][j]!=0))
			{
				isIdentity = FALSE;
				break;
			}
		}	
	}	
	if(isIdentity)
	{
		printf("\n Enter matrix is identity matrix.");
	}
	else
	{
		printf("\n Enter matrix is not identity matrix.");
	}
	getch();
}		