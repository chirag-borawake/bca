#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no,table;
	printf("Enter no:");
	scanf("%d",&no);
	printf("\n Table");
	for(i=1;i<=10;i++)
	{	
		table=no*i;
		printf("\n%d",table);
	}
	getch();
}