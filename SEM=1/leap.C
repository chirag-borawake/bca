#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	printf("\n To find year is leap year or not.");
	printf("\n Enter year:");
	scanf("%d",&year);
	if(year%100==0)
	{
		if (year%400==0)
		printf("\n It is leap year.");
		else
		printf("\n It is not a leap year.");
	}
	else
	{
		if(year%4==0)
		printf("\n If is leap year.");
		else
		printf("\n It is not a leap year.");
	}
	getch();
}

