
 /*Write a ‘C’ Program to accept the line from user, delete all the occurrences of word ‘the’ from the line and display the result.*/							
#include<stdio.h>
#include<conio.h>

void main()
{
	char remove_the[20];
	int i=0;
	clrscr();
	printf("\n Enter string:");
	gets(remove_the);
	while(remove_the[i]!='\0')
	{
		if(remove_the[i]==116 && remove_the[i+1]==104 && remove_the[i+2]==101 && remove_the[i+3]==32)
		{
			for(;remove_the[i]!='\0';i++)
			{
				remove_the[i]=remove_the[i+4];
			}
			remove_the[i]='\0';
			i=-1;
		}
		i++;
	}
	printf("\nRemoving the: %s",remove_the);
	getch();
}
