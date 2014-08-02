/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 26) Write a menu driven program using ‘C’ for Dynamic implementation of Queue for characters. The menu includes 
-	Insert
-	Delete
-	Display
-	Exit 
 
*/
#include<conio.h>
#include<stdio.h>
#define MAX 5
struct queue
{
	char ch;
	struct queue *next;
};
struct queue *start=NULL;
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
				exit(0);
				break;

			case 3:
				display();
				getch();
				exit(0);
				break;

			case 4:
				exit(0);
		}
	}
}
void push()
{
	struct queue *newData,*prev,*temp;
	temp=start;
	newData=(struct queue *)malloc(sizeof(struct queue));
	printf("\n Enter element:");
	flushall();
	scanf("%c",&newData->ch);
	newData->next=NULL;
	if(start == NULL)
	{
		start=newData;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newData;
	}
}
void pop()
{
	char che;
	struct queue *prev;
	prev=start;
	if(prev == NULL)
	{
		printf("\n Queue is overflow.");
	}
	else
	{
		che=prev->ch;
		{
			printf("\n The deleted item is:%c.",che);
		}
		prev=prev->next;
		start=prev;
	}
}
void display()
{
	struct queue *temp;
	temp=start;
	if(temp != NULL)
	{
		printf("\n Queue elements:");
		while(temp!=NULL)
		{
			printf(" %c",temp->ch);
			temp=temp->next;
		}
	}
	else
	{
		printf("\n Queue is empty.");
	}	
}

/*

 1:Push.
 2:Pop.
 3:Display.
 4:Exit.
 Enter your choice:1

 Enter element:1


 1:Push.
 2:Pop.
 3:Display.
 4:Exit.
 Enter your choice:1

 Enter element:2

 1:Push.
 2:Pop.
 3:Display.
 4:Exit.
 Enter your choice:1

 Enter element:3


 1:Push.
 2:Pop.
 3:Display.
 4:Exit.
 Enter your choice:1

 Enter element:4


 1:Push.
 2:Pop.
 3:Display.
 4:Exit.
 Enter your choice:2

 The deleted item is:1.


 1:Push.
 2:Pop.
 3:Display.
 4:Exit.
 Enter your choice:3

 Queue elements: 2 3 4



 */












                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


