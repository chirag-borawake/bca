/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012
*/
/*Q. 45) Write a menu driven program in ‘C’ for-
	 -	Addition of two polynomials.
	 -	Evaluation of an accepted polynomial.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int evaluate(int a[][2],int n,int x)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i][0]*pow(x,a[i][1]);
	}
	return sum;
}

void disp(int a[][2],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%dx^%d",a[i][0],a[i][1]);
		if(i<n-1)
			printf(" + ");
	}
	printf("\n");

}

void add(int a[][2],int n,int b[][2],int m,int c[][2],int *k)
{
	int i,j;
	i=j=*k=0;
	for(;i<n && j<m;)
	{
		if(a[i][1]==b[j][1])
		{
			c[*k][1]=a[i][1];
			c[*k][0]=a[i][0]+b[j][0];
			*k=*k+1;
			i++;
			j++;
		}
		else if(a[i][1]>b[j][1])
		{
			c[*k][1]=a[i][1];
			c[*k][0]=a[i][0];
			*k=*k+1;
			i++;
		}
		else
		{
			c[*k][1]=b[j][1];
			c[*k][0]=b[j][0];
			*k=*k+1;
			j++;
		}
	}
	while(i<n)
	{
		c[*k][1]=a[i][1];
		c[*k][0]=a[i][0];
		*k=*k+1;
		i++;
	}
	while(j<m)
	{
		c[*k][1]=b[j][1];
		c[*k][0]=b[j][0];
		*k=*k+1;
		j++;
	}

}

void main()
{
int n,a[20][2],b[20][2],c[40][2],m,i,x,k,ch;
clrscr();
while(1)
{
	printf("\nEnter Choice\n1 - Addition of two polynomials");
	printf("\n2 - Evaluation of an accepted polynomial\n3 - EXIT\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("How many terms in the 1st polynomial\t");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				printf("\nTerm %d\n",i+1);
				printf("Coefficient: ");
				scanf("%d",&a[i][0]);
				printf("Exponent: ");
				scanf("%d",&a[i][1]);
			}
			printf("\nHow many terms in the 2nd polynomial\t");
			scanf("%d",&m);
			for(i=0;i<m;i++)
			{
				printf("\nTerm %d\n",i+1);
				printf("Coefficient: ");
				scanf("%d",&b[i][0]);
				printf("Exponent: ");
				scanf("%d",&b[i][1]);
			}
			printf("\nThe 1st polynomial is\t");
			disp(a,n);
			printf("\n\nThe 2nd polynomial is\t");
			disp(b,m);
			add(a,n,b,m,c,&k);
			printf("\n\nThe addition of the 2 polynomials is \n");
			disp(c,k);
			break;
		case 2: printf("How many terms in the polynomial\t");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				printf("\nTerm %d\n",i+1);
				printf("Coefficient: ");
				scanf("%d",&a[i][0]);
				printf("Exponent: ");
				scanf("%d",&a[i][1]);
			}
			printf("\nThe polynomial is\t");
			disp(a,n);
			printf("\nEnter the value of x\n");
			scanf("%d",&x);
			printf("\nThe evaluation is %d\n",evaluate(a,n,x));
			break;
		case 3: printf("\nProgram ending...\n");
			getch();
			return;
		default:printf("\nWrong choice..\n");
			getch();
			clrscr();
	}
}
}

/*Out put:-

How many terms in the 1st polynomial    2

Term 1
Coefficient: 4
Exponent: 3

Term 2
Coefficient: 3
Exponent: 2

How many terms in the 2nd polynomial    2

Term 1
Coefficient: 5
Exponent: 3

Term 2
Coefficient: 60
Exponent: 0

The 1st polynomial is   4x^3 + 3x^2

The 2nd polynomial is   5x^3 + 60x^0

The addition of the 2 polynomials is
9x^3 + 3x^2 + 60x^0

Enter Choice
1 - Addition of two polynomials
2 - Evaluation of an accepted polynomial
3 - EXIT
2

How many terms in the polynomial	4

Term 1
Coefficient: 4
Exponent: 6

Term 2
Coefficient: 5
Exponent: 3

Term 3
Coefficient: 5
Exponent: 2

Term 4
Coefficient: 90
Exponent: 0

The polynomial is       4x^6 + 5x^3 + 5x^2 + 90x^0

Enter the value of x
2

The evaluation is 406

*/