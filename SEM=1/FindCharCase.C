#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	printf("\n Enter a character:");
	scanf("%c",&x);
	if((x>=65)&&(x<=90))
	{
		x+=32;
	printf("\n Small case is %c %d",x,x);
	}
	else if ((x>=91)&&(x<=122))

	{
		x-=32;
		printf("\n Upper case is %c",x);
	}
	else
	printf("\n Not an alphabet.");
	getch();

}