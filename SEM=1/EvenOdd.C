#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	printf("\n Enter number:");
	scanf("%d",&x);
	if (x>0)
	{
		printf("\n Number is positive.");
		if(x%2==0)
		printf("\n Number is even.");
		else
		printf("\n Number is odd.");
	}
	else
	printf("Number is negative.");
	getch();

}
