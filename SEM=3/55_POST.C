/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012
*/


/*Q. 50) Write a ‘C’ program to read a postfix expression, evaluate it and display the result.*/

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
			}//switch
			push(&s,res);
		}//else
	}//for
	return pop(&s);
}//evaluate
void main()
{
char post[50];
clrscr();
printf("Enter a postfix expression to evaluate\n");
gets(post);
printf("\nThe result is %d\n",evaluate(post));
getch();
}

/*OUTPUT

Enter a postfix expression to evaluate
xy+z*

Enter value of a:10

Enter value of b:20

Enter value of c:10

The result is 300

*/