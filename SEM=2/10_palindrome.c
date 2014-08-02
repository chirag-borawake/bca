/*Program to check whether given string is palindrome or not.*/
#include<conio.h>
#include<stdio.h>
#define TRUE 1
#define FALSE 0
void main()
{
	char string[10],reverseString[10];
	int i,j=0,length=0, isPalindrome = TRUE;
	clrscr();
	printf("\n Enter string to check whether string is palindrome or not:");
	gets(string);
	while(string[length]!='\0')
	{
		length++;
	}
	for(i=length-1;i>=0;i--)
	{
		reverseString[j]=string[i];
		j++;
	}
	reverseString[j]='\0';
	for(i=0;i<length;i++)
	{
		if(string[i]!=reverseString[i])
		{
			isPalindrome = FALSE;
			break;
		}
	}
	if(isPalindrome)
	{
		printf("\n Entered string is palindrome.");
	}
	else
	{
		printf("\n Entered string is not palindrome.");
	}
	getch();
}
/*
Out put:-

 Enter string to check whether string is palindrome or not:assa                 
                                                                                
 Entered string is palindrome.                                                  
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/