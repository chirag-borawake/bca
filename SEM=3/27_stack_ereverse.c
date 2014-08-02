/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 27) Write a ‘C’ program which accept the string and reverse each word of the string using Static Implementation of stack.
 
*/
#include<conio.h>
#include<stdio.h>
#define MAX 20
int top = -1;
char stack[MAX];
void push(char);
void pop();
void display();
void main()
{
	int count=0;
	char str[20];
	printf("\n Enter string:");
	gets(str);
	while(str[count]!='\0')
	{
		push(str[count++]);
	}
	count--;
	printf("\n Reverse string is:");
	while(count >= 0)
	{
		pop();
		count--;
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
		printf("%c",item);
	}
}
/*

 Enter string:Chirag

 Reverse string is:garihC
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
