#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	clrscr();
	printf("\n Enter character:");
	scanf("%c",&x);
	printf("\n ASCII value is %d.",x);
	printf("\n Next character is %c.",x+1);
	printf("\n Privious character is %c.",x-1);
	getch();
}