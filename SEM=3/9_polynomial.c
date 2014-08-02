/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012
*/

/* Q.8)Write a ‘C’ program to evaluate a given polynomial using function. (Use array).*/

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
	printf("\nThe Polynomial is\n\n");
	for(i=0;i<n;i++)
	{
		printf("%dx^%d",a[i][0],a[i][1]);
		if(i<n-1)
			printf(" + ");
	}

}

void main()
{
int n,a[20][2],i,x;
clrscr();
printf("How many terms in the polynomial\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\nTerm %d\n",i+1);
	printf("\nCoefficient: ");
	scanf("%d",&a[i][0]);
	printf("\nExponent: ");
	scanf("%d",&a[i][1]);
}
disp(a,n);
printf("\nEnter the value of x\n");
scanf("%d",&x);
printf("\nThe evaluation is %d\n",evaluate(a,n,x));
getch();
}

/*
  How many terms in the polynomial
2                                                                               
 
Term 1                                                                          
 
Coefficient: 2                                                                  
 
Exponent: 3                                                                     
 
Term 2                                                                          
 
Coefficient: 4                                                                  
 
Exponent: 5                                                                     
 
The Polynomial is                                                               

2x^3 + 4x^5                                                                     
Enter the value of x                                                            
3                                                                               

The evaluation is 1026                                                          

*/
