
 /*Write a ‘C’ Program to accept the line from user, delete all the occurrences of word ‘the’ from the line and display the result.*/						
#include<stdio.h>
#include<conio.h>
#define n 100
void del_char(char str1[n],char str2[])
{
	char str[n],*p1,*q,i,j;
	p1=str1;
	q=str;
	*q=*p1;
	i=0;	
	while(*p1!='\0')
	{
		if(*p1==str2[i])
		{
			p1++;
			i++;
			if(*p1==str2[i])
			{
				p1++;
				i++;
				if(*p1==str2[i])
				{
					p1++;
					i++;
				}
				else
				{
					q++;
				}
			}
			else
			{
				q++;
			}
		}
		else
		{
			p1++;
			q++;
		}
			*q=*p1;
	}
	i=0;
printf("%s\n",str);
}
main()
{
	char str1[n],str2[]={"to "};
	clrscr();
	printf("please enter a text and includ 'to':\n");
	gets(str1);
	printf("remove 'to',remaining :\n");
	del_char(str1,str2);
	getch();
	return 0;
}