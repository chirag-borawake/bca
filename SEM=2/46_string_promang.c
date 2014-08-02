#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char *s,*S1,*S2;
	int select,length=0;
	clrscr();
	printf("\n 1:Calculating length of a given string and display the length");
	printf("\n 2:Copy one string into another string and display both the strings");
	printf("\n 3:Compare two strings and display the result");
	printf("\n 4:Concatenate two strings and display the resultant string");
	printf("\n Enter your selection:");
	scanf("%d",&select);
	switch(select)
	{
		case 1:
			printf("\n Enter string:");
			scanf("%s",s);
			length=strlen(s);
			printf("\n Length=%d",length);
			break;
		case 2:
			printf("\n Enter string 1:");
			scanf("%s",S1);
			strcpy(S2,S1);
			printf("\n Copied string is %s",S2);
			break;
		case 3:
			printf("\n Enter string 1:");
			scanf("%s",S1);
			printf("\n Enter string 2:");
			scanf("%s",S2);
			if(strcmp(S1,S2)==0)
			{
				printf("\n Equal");
			}
			else if(strcmp(S1,S2)<0)
			{
				printf("\n String 1 : %s is less than String 2:%s",S1,S2);
			}
			else
			{
				printf("\n String 1:%s is greater than String 2:%s",S1,S2);
			}
			break;
		case 4:
			printf("\n Enter string 1:");
			scanf("%s",S1);
			printf("\n Enter string 2:");
			scanf("%s",S2);
			strcat(S1,S2);
			printf("\n Concatenated string is:%s",S1);
			break;
		default:
		printf("\n We exit here.");
	}
	getch();
}
/* out put :-

 1:Calculating length of a given string and display the length
 2:Copy one string into another string and display both the strings
 3:Compare two strings and display the result
 4:Concatenate two strings and display the resultant string
 Enter your selection:1

 Enter string:chirag

 Length=6

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
