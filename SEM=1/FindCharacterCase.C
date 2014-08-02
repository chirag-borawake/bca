#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	printf("\n Enter any character:");
	scanf("%c",&c);
	if((c>='a')&&(c<='z'))
	printf("\n Character is an alphabet.");
	else if
	((c>='A')&&(c<='Z'))
	printf("\n Character is an alphabet.");
	else if
	((c>='0')&&(c<='9'))
	printf("\n Character is digit.");
	else
	printf("\n Character is symbol.");
	getch();
}