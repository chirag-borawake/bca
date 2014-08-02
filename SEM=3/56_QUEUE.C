/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012


Q. 56) Write a menu driven program in ‘C’ for static implementation of Circular Queue for integers.  The menu includes 
-	Insert
-	Delete
-	Display
-	Exit

*/
#include<conio.h>
#include<stdio.h>
#define MAX 3
int front = 0;
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
	if(rear >= MAX)
	{
		printf("\n Queue is full.");
	}
	else
	{
		printf("\n Enter data to be inserted:");
		scanf("%d",&item);
		queue[rear]=item;
		rear += 1;
		printf("\n After pushing element into queue.");
		display();
	}
}
void pop()
{
	int item,i,currentRear=0;;
	if(rear <= 0)
	{
		printf("\n Queue is empty.");
	}
	else
	{
		display();
		item=queue[front];
		printf("\n The deleted item is:%d.",item);
		printf("\n After deleting element %d from queue.",item);
		for(i = 0; i < rear-1 ; i++)
		{
			queue[i]=queue[++currentRear];
		}
		rear = currentRear;
		display();
	}
}
void display()
{
	int  i;
	if(rear <= 0)
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

