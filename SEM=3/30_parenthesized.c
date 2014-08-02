/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012
*/

/*Q. 28) Write a ‘C’ program to read a parenthesized infix expression from user and check,
	 whether it is well parenthesized or not using static implementation of stack.*/

#include<stdio.h>
#include<conio.h>
struct stack
{
	int top,item[30];
};
void init(struct stack *s)
{
	s->top=-1;
}
void push(struct stack *s,int num)
{
	s->item[++s->top]=num;
}
int pop(struct stack *s)
{
	return (s->item[s->top--]);
}
int isempty(struct stack *s)
{
	return(s->top==-1);
}
isfull(struct stack *s)
{
	return(s->top==29);
}
void main()
{
	struct stack s;
	int i;
	char str[40];
	clrscr();
	init(&s);
	printf("\nEnter a parenthesized\n");
	flushall();
	gets(str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]=='(')
			push(&s,str[i]);
		if(str[i]==')')
			pop(&s);
	}
	if(isempty(&s))
		printf("\nExpression is FULLY parnthesized\n");
	else
		printf("\nExpression NOT FULLY parenthesized\n");
	getch();
}

/*Out put 1


Enter a parenthesized
(((a-d)+b(f*h))

Expression NOT FULLY parenthesized*/

/* Out put 2


Enter a parenthesized
((a+i)*(c-k))

Expression is FULLY parnthesized

*/

