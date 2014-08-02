/* WAP to calculate the sum of elements of upper triangle of a nXn matrix by using dynamic memory allocation*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int **a, row,col,i,j,sum=0;
	clrscr();
	printf("\n enter no of rows and columns:");
	scanf("%d%d",&row,&col);
	a=(int **)malloc(row*sizeof(int));
	for(i=0;i<row;i++)
	{
		a[i]=(int *)malloc(col*sizeof(int));
	}
	printf("\n Enter the matrix %d x %d\n",row,col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=i;j<col;j++)
		{
			sum=sum+a[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("Summation of upper triangular matrix elements is : %d",sum);
	getch();
}
