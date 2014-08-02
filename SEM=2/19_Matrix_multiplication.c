#include<stdio.h>
#include<conio.h>
void main()
{
	int m, n, p, q, i, j, k, sum = 0;
	int matrix_A[10][10], matrix_B[10][10], multiply[10][10];
	printf("\n Enter the number of rows and columns of first matrix A:\n");
	printf("\n Enter value for m:");
	scanf("%d",&m);
	printf("\n Enter value for n:");
	scanf("%d",&n);
	printf("\n Enter the elements of first matrix A:\n");
	for (  i = 0 ; i < m ; i++ )
	{
		for ( j = 0 ; j < n ; j++ )
		{
			printf("\n Enter element at R(%d%d):",i+1,j+1);
			scanf("%d",&matrix_A[i][j]);
		}
	}
	printf("\n Enter the number of rows and columns of second matrix B:\n");
	printf("\n Enter value for m:");
	scanf("%d",&p);
	printf("\n Enter value for n:");
	scanf("%d",&q);
	if ( n != p )
	{
		printf("\n Matrices with entered orders can't be multiplied with each other.\n");
	}	
	else
	{
		printf("\n Enter the elements of second matrix B:\n");
		for ( i = 0 ; i < p ; i++ )
		{
			for ( j = 0 ; j < q ; j++ )
			{
				printf("\n Enter element at R(%d%d):",i+1,j+1);
				scanf("%d", &matrix_B[i][j]);
			}	
		}	
		for ( i = 0 ; i < m ; i++ )
		{
			for ( j = 0 ; j < n ; j++ )
			{
				for ( k = 0 ; k < p ; k++ )
				{
					sum += matrix_A[i][k]*matrix_B[k][j];
				}
				multiply[i][j] = sum;
				sum = 0;
			}
		}	
		printf("\n Matrix A is\n\n");
		for ( i = 0 ; i < m ; i++ )
		{
			for ( j = 0 ; j < n ; j++ )
			{
				printf("%5d", matrix_A[i][j]);
			}
			printf("\n\n");
		}
		printf("\n Matrix B is\n\n");
		for ( i = 0 ; i < p ; i++ )
		{
			for ( j = 0 ; j < q ; j++ )
			{
				printf("%5d", matrix_B[i][j]);
			}
			printf("\n\n");
		}		
		printf("\n Product of entered matrices:-\n\n");
		for ( i = 0 ; i < m ; i++ )
		{
			for ( j = 0 ; j < q ; j++ )
			{
				printf("%5d", multiply[i][j]);
			}
			printf("\n\n");
		}
	}
	getch();
}
/*Out put:-

 Enter value for n:2

 Enter the elements of first matrix A:

 Enter element at R(11):2

 Enter element at R(12):3

 Enter element at R(21):2

 Enter element at R(22):3

 Enter the number of rows and columns of second matrix B:

 Enter value for m:2

 Enter value for n:2

 Enter the elements of second matrix B:

 Enter element at R(11):3

 Enter element at R(12):3

 Enter element at R(21):4

 Enter element at R(22):3

 Matrix A is

    2    3

    2    3


 Matrix B is

    3    3

    4    3


 Product of entered matrices:-

   18   15

   18   15


*/