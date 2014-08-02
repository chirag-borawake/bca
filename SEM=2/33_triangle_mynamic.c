/* Write a ‘C’ Program to calculate sum of the elements of lower triangle of a nXn matrix by using dynamic memory allocation.*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int j,i,**ip,m,n,sum=0;
	printf("\nEnter m & n for mXn matrix :");
	scanf("%d%d",&m,&n);
	ip=(int**)malloc(m*sizeof(int));
	for(i=0;i<n;i++)
	{
		ip[i]=(int*)malloc(n*sizeof(int));
	}	
	printf("\nEnter %d elements :",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&ip[i][j]);
			if(i>j)
			{
				sum=sum+ip[i][j];
			}	
		}
	}
	printf("\nEntered matrix is :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",ip[i][j]);
			
		}
		printf("\n");
	}		
	printf("\nSum of lower triangle of matrix is :%d",sum);
	getch();
}
