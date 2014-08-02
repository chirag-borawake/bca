#include<stdio.h>
#include<conio.h>

void main()
{
	int number,i,isPrime=1;
	clrscr();
	printf("\n Enter number:");
	scanf("%d",&number);
	for(i=2; i<number;i++)
	{
		if(number%i==0)
		{
			isPrime=0;
			break;
		}
	}
	if(isPrime)
	{
		printf("\n %d is prime number.",number);
	}
	else
	{
		printf("\n %d is not prime number.",number);
	}
	getch();
}
