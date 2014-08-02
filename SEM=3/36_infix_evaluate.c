/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012
*/

/*Q. 33) Write a ‘C’ program to accept an infix expression,convert it into
	 its equivalent postfix expression, evaluate it and display the result.*/

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
char stacktop(struct stack *s)
{
	return(s->item[s->top]);
}
int priority(char ch)
{
	switch(ch)
	{
		case '+':
		case '-':return 1;
		case '/':
		case '*':
		case '%':return 2;
		case '(':return 0;
		default:return 0;
	}
}
void convert(char in[],char  post[])
{
	int i,j=0;
	char ch;
	struct stack s;
	init(&s);
	for(i=0;in[i]!=NULL;i++)
	{
		switch(in[i])
		{
			case '+':
			case '-':
			case '*':
			case '/':
			case '%':if(isempty(&s))
				 {
					push(&s,in[i]);
				 }
				 else
				 {
					ch=stacktop(&s);
					while(priority(ch)>=priority(in[i]))
					{
						post[j++]=pop(&s);
						ch=stacktop(&s);
					}
					push(&s,in[i]);
				 }
				 break;
			case '(':push(&s,in[i]);
				 break;
			case ')':ch=pop(&s);
				 while(ch!='(')
				 {
					post[j++]=ch;
					ch=pop(&s);
				 }
				 break;
			default: post[j++]=in[i];
		}
	}
	while(!isempty(&s))
	{
		post[j++]=pop(&s);

	}
	post[j]=NULL;
}
int alpha(char ch)
{
	if(ch>='a' && ch<='z')
		return 1;
	if(ch>='A' && ch<='Z')
		return 1;
	return 0;
}

int evaluate(char *post)
{
	int i,value,op1,op2,res;
	struct stack s;
	for(i=0;post[i]!=NULL;i++)
	{
		if(alpha(post[i]))
		{
			printf("\nEnter value of %c\n",post[i]);
			scanf("%d",&value);
			push(&s,value);
		}
		else
		{
			op2=pop(&s);
			op1=pop(&s);
			switch(post[i])
			{
				case '+':res=op1+op2;
					 break;
				case '-':res=op1-op2;
					 break;
				case '*':res=op1*op2;
					 break;
				case '/':res=op1/op2;
					 break;
				case '%':res=op1%op2;
					 break;
			}
			push(&s,res);
		}
	}
	return pop(&s);
}
void main()
{
	char in[20],post[20];
	clrscr();
	printf("Enter expression\n");
	gets(in);
	convert(in,post);
	printf("\n\nthe exp is %s",post);
	printf("\nNow converting\n");
	printf("\nThe result is %d\n",evaluate(post));
	getch();
	return;
}

/*Out put

Enter expression
a+b*(c-d)


the exp is abcd-*+
Now converting

Enter value of a
10

Enter value of b
20

Enter value of c
40

Enter value of d
30

The result is 210*/