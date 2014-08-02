#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	void swap(int*,int*);
	printf("\n Enter value for x:");
	scanf("%d",&x);
	printf("\n Enter value for y:");
	scanf("%d",&y);
	swap(&x,&y);
	printf("\n Value of x is %d.",x);
	printf("\n\n Value of y is %d.",y);
	getch();
}
void swap(int*p,int*q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}