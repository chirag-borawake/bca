/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

. 59) Write a ‘C’ program for concatenation of two Strings using stack.

*/
#include<conio.h>
#include<stdio.h>
#define MAX 20
int top = -1;
char stack[MAX];
void push(char);
char pop();
void display();
void main()
{
	int count1=0,count2=0,count3=0,count;
	char str1[10],str2[10],str3[20];
	printf("\n Enter first string :");
	gets(str1);
	printf("\n Enter second string :");
	gets(str2);
	while(str1[count1]!='\0')
	{
		push(str1[count1++]);
	}
	while(str2[count2]!='\0')
	{
		push(str2[count2++]);
	}
	while(1)
	{
		char item;
		if(top ==-1)
		{
			break;
		}
		item=pop();
		str3[count3++]=item;
	}
	count3--;
	str3[--count3]='\0';
	printf("\n After concatenate string is: %s",str3);
	while(count3 >= 0)
	{
		count3--;
	}
	getch();
}
void push(char item)
{
	stack[top++]=item;
}
char pop()
{
	char item;
	item=stack[top--];
	return (item) ;
}

/*

 Enter first string :Chirag

 Enter second string :Borawake

 After concatenate string is:ChiragBorawake

*/













                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
