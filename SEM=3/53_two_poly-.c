/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012
*/
/*Q. 48) Write a ‘C’ program to read two polynomials, add them and display the result using array.*/

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
int n,a[20][2],b[20][2],c[40][2],m,i,x,k;
clrscr();
printf("How many terms in the 1st polynomial\t");
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
printf("\nEnter the value of x\n");
scanf("%d",&x);
printf("\nThe evaluation is %d\n",evaluate(c,k,x));
getch();
}

/*

How many terms in the 1st polynomial    2

Term 1
Coefficient: 2
Exponent: 4

Term 2
Coefficient: 3
Exponent: 4

How many terms in the 2nd polynomial    3

Term 1
Coefficient: 5
Exponent: 3

Term 2
Coefficient: 5
Exponent: 6

Term 3
Coefficient: 7
Exponent: 4

The 1st polynomial is   2x^4 + 3x^4

The 2nd polynomial is   5x^3 + 5x^6 + 7x^4

The addition of the 2 polynomials is
2x^4 + 3x^4 + 5x^3 + 5x^6 + 7x^4
Enter the value of x
4

The evaluation is 23872


*/