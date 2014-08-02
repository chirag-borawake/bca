#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
	int x,y,sum=0;
	printf("\n Enter two number:");
	scanf("%d %d",&x,&y);
	sum=add(x,y);
	printf("\n Addition of two number is %d.",sum);
	getch();
}
int add(int x,int y)
{
	int add=0;
	add=x+y;
	return(add);
}
