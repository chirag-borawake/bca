#include<stdio.h>
#include<conio.h>
void main()
{
	int i, number,factorial;
	printf("\n Enter number:");
	scanf("%d",&number);
	for(i=1,factorial=1;i<=number;i++)
	{
		factorial=factorial*i;
	}
	printf("\n Factorial of %d is %d",number,factorial);
	getch();
}