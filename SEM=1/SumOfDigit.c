#include<stdio.h>
#include<conio.h>
void main()
{
	int num,rem;
	clrscr();
	printf("\n Enter number to find sum of digit:");
	scanf("%d",&num);
	rem=0;
	while(num>0)
	{
		rem=rem+(num%10);
		num=num/10;
	}
	printf("\n Sum of digits is %d",rem);
	getch();
}
