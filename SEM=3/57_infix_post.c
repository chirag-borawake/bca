/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012
*/

/*Q. 51) Write a ‘C’ program to convert accepted infix expression to its equivalent postfix expression.*/

#include<stdio.h>
#include<conio.h>
struct stack
{
	int top;
	int item[20];
};
void init(struct stack *s)
{
	s->top=-1;
}
int pop(struct stack *s)
{
	return s->item[s->top--];
}
void push(struct stack *s,int num)
{
	s->item[++s->top]=num;
}
int isempty(struct stack *s)
{
	return(s->top==-1);
}
int isfull(struct stack *s)
{
	return(s->top==(20-1));
}
int convert(char * in,char * post)
{
	int i,j;
	struct stack s;
	init(&s);
	for(i=0,j=0;in[i]!=NULL;i++)
	{
		switch(in[i])
		{
			case '+':
			case '-':
			case '*':
			case '/':
			case '%':
			case '(':push(&s,in[i]);
				 break;
			case ')':post[j++]=pop(&s);
				 pop(&s);
				 break;
			default: post[j++]=in[i];
		}
	}
	if(isempty(&s))
	{
		post[j]=NULL;
		return 1;
	}
return 0;
}

void main()
{
	char in[20],post[20];
	clrscr();
	printf("Enter expression\n");
	gets(in);
	if(convert(in,post))
	{
		printf("\n\nthe exp is %s",post);
	}
	else
		printf("\n\nError");
	getch();
	return;
}

/*OUTPUT


Enter expression
((x+y)*(z-q))


the exp is xy+zq-*
*/