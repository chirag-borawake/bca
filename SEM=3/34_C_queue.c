/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

 
Q. 34) Write a menu driven program using ‘C’ for static implementation of Circular Queue for characters.  The menu includes 
-	Insert 
-	Delete
-	Display
-	Exit

*/
#include<conio.h>
#include<stdio.h>
#define MAX 5
int front = -1;
int rear = 0;
int queue[MAX];
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
	int item;
	if(rear==MAX)
	{
		printf("\n Queue is full.");
	}
	else
	{
		printf("\n Enter data to be inserted:");
		scanf("%d",&item);
		if(front == -1)
		{
			front =0;
			rear = 0;
		}
		queue[rear++]=item;
		printf("\n After pushing element into queue.");
	}
	display();
}
void pop()
{
	int item,i,currentRear=0;
	if(front ==-1)
	{
		printf("\n Queue is empty.");
	}
	else
	{
		item=queue[front];
		currentRear =front;
		front+=1;
		printf("\n The deleted item is:%d.",item);
		printf("\n After deleting element %d from queue.",item);
		if(front==rear)
		{
			front=-1,rear=-1;
		}
		for(i = 0; currentRear < rear ; i++)
		{
			queue[i]=queue[currentRear++];
		}
		rear = i;
		display();
	}
}
void display()
{
	int  i;
	if(front ==-1)
	{
		printf("\n Queue is empty.");
	}
	else
	{
		printf("\n Elements of queue:");
		for(i = front; i < rear; i++)
		{
			printf(" %d",queue[i]);
		}
	}
}



/*

 1:Push.
 2:Pop.
 3:Display.
 4:Exit.
 Enter your choice:1

 Enter element:a
 1:Push.
 2:Pop.
 3:Display.
 4:Exit.
 Enter your choice:1

 Enter element:b

 1:Push.
 2:Pop.
 3:Display.
 4:Exit.
 Enter your choice:1

 Enter element:c

 1:Push.
 2:Pop.
 3:Display.
 4:Exit.
 Enter your choice:1


 Enter element:d


 1:Push.
 2:Pop.
 3:Display.
 4:Exit.
 Enter your choice:2

 The deleted item is:a.



 1:Push.
 2:Pop.
 3:Display.
 4:Exit.
 Enter your choice:3

 Queue elements: b c d

*/





