#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,temp;
	clrscr();
	printf("\n Enter value for x:");
	scanf("%d",&x);
	printf("\n Enter value for Y:");
	scanf("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\n Value of x is %d",x);
	printf("\n Value of y is %d",y);
	getch();
}