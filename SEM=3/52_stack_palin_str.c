/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 52) Write a ‘C’ program to read a string and check whether string is palindrome or not. (using static implementation of stack)
*/
#include<conio.h>
#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define MAX 20
int top = -1,countstr=0;
char stack[MAX];
char reserseStr[MAX];
void push(char);
void pop();
void display();
void main()
{
	int count=0,isPalindrom=TRUE;
	char str[20];
	printf("\n Enter string:");
	gets(str);
	while(str[count]!='\0')
	{
		push(str[count++]);
	}
	count--;
	while(count >= 0)
	{
		pop();
		count--;
	}
	count=0;
	while(stack[count]!='\0')
	{
		if(stack[count] != reserseStr[count])
		{
			isPalindrom=FALSE;
			break;
		}
		count++;
	}
	if(isPalindrom==TRUE)
	{
		printf("\n String is palindrom.");
	}
	else
	{
		printf("\n String is not palindrom.");
	}
	getch();
}
void push(char item)
{
	if(top == MAX-1)
	{
		printf("\n Stack is full.");
	}
	else
	{
		top += 1;
		stack[top]=item;
	}
}
void pop()
{
	int item;
	if(top == -1)
	{
		printf("\n Stack is empty.");
	}
	else
	{
		item=stack[top];
		top -=1;
		reserseStr[countstr++]=item;
	}
}
/* Out put 1:-

 Enter string:Chirag

 String is not palindrom.

Out put 2:-


 Enter string:asddsa

 String is palindrom.


*/










                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
