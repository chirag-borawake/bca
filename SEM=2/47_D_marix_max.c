#include<conio.h>
#include<stdio.h>
void main()
{
	int **matrix,i,j,m,n,small_element,large_element;
	clrscr();
	printf("\n Enter matrix: ");
	printf("\n Enter value for m:");
	scanf("%d",&m);
	printf("\n Enter value for n:");
	scanf("%d",&n);
	matrix=(int**)malloc(m*sizeof(int*));
	for(i=0;i<m;i++)
	{
		matrix[i]=(int*)malloc(n*sizeof(int));
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("\n Enter value at R(%d%d) location:",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\n Given matrix is:\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%5d",matrix[i][j]);
		}
		printf("\n\n");
	}
	small_element=matrix[0][0];
	large_element=matrix[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(small_element > matrix[i][j])
			{
				small_element=matrix[i][j];
			}
			if(large_element < matrix[i][j])
			{
				large_element=matrix[i][j];
			}
		}
	}
	printf("\n Small element = %d",small_element);
	printf("\n Large element = %d",large_element);
	getch();
}
/*
 Enter matrix:
 Enter value for m:3

 Enter value for n:3

 Enter value at R(11) location:4

 Enter value at R(12) location:5

 Enter value at R(13) location:3

 Enter value at R(21) location:7

 Enter value at R(22) location:8

 Enter value at R(23) location:0

 Enter value at R(31) location:8

 Enter value at R(32) location:5

 Enter value at R(33) location:4

 Given matrix is:

    4    5    3

    7    8    0

    8    5    4


 Small element = 0
 Large element = 8

 */













