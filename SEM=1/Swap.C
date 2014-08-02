#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,temp;
	printf("\n Enter value for x:");
	scanf("%d",&x);
	printf("\n Enter value for y:");
	scanf("%d",&y);
	temp=x;
	x=y;
	y=temp;
	printf("\n Value of x is %d.",x);
	printf("\n Value of y is %d.",y);
	getch();
}