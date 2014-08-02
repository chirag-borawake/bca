/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012


Q. 46) Write a menu driven program using ‘C’ for Dynamic implementation of Stack. The menu includes 
-	Push
-	Pop
-	Display
-	Exit
*/
#include<conio.h>
#include<stdio.h>
#define MAX 5
struct stack
{
	int data;
	struct stack *next;
};
struct stack *top=NULL;
void push();
void pop();
void display();
void main()
{
	int choice;
	while(1)
	{
		clrscr();
		printf("\n 1:Push.");
		printf("\n 2:Pop.");
		printf("\n 3:Display."); 
		printf("\n 4:Exit."); 
		printf("\n Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				getch();
				break;

			case 2:
				pop();
				getch();
				break;

			case 3:
				display();
				getch();
				break;

			case 4:
				exit(0);
		}
	}
}
void push()
{
	struct stack *newData;
	newData=(struct stack *)malloc(sizeof(struct stack));
	printf("\n Enter element:");
	scanf("%d",&newData->data);
	newData->next=NULL;
	if(top == NULL)
	{
		top=newData;
	}
	else
	{
		newData->next =top;
		top=newData;
	}
}
void pop()
{
	if(top != NULL)
	{
		printf("\n The deleted item is:%d.",top->data);
		top=top->next;
	}
	else
	{
		printf("\n Stack is overflow.");
	}
}
void display()
{
	struct stack *temp=top;
	if(temp != NULL)
	{
		printf("\n Stack elements:");
		while(temp!=NULL)
		{
			printf(" %d",temp->data);
			temp=temp->next;
		}
	}
	else
	{
		printf("\n Stack is empty.");
	}	
}



/*


 1:Push.
 2:Pop.
 3:Display.
 4:Exit.
 Enter your choice:1

 Enter data to be inserted:10

 After pushing element into stack.
 Elements of stack: 10

 1:Push.
 2:Pop.
 3:Display.
 4:Exit.

 Enter your choice:1

 Enter data to be inserted:20

 After pushing element into stack.
 Elements of stack: 10 20


 1:Push.
 2:Pop.
 3:Display.
 4:Exit.
 Enter your choice:2

 Elements of stack: 20 10
 The deleted item is:20.
 After deleting element 20 from stack.
 Elements of stack: 10

 1:Push.
 2:Pop.
 3:Display.
 4:Exit.
 Enter your choice:3

 Elements of stack: 10
 */



