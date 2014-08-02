#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z,n;
	clrscr();
	printf("\n Enter value for fibonacci series:");
	scanf("%d",&n);
	printf("\n Fibonacci series is");
	printf("\n 0 1");
	for(x=0,y=1,z=0;y<n;x=z)
	{
		z=y;
		y=x+y;
		printf(" %d",y);
	}
	getch();
}