/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012


Q. 58) Write a menu driven program in C for implementation of circular linked list. Menu includes-
-	Create.
-	Display. 
-	Add node at beginning.
-	Add node at last
-	Exit
*/
#include<conio.h>
#include<stdio.h>
#define TRUE 1
#define FALSE 0
struct node
{
	int data;
	struct node *next;
};
typedef struct node data;
data * start,*temp,*prev,*newData,*end;
void display();
void getData(data * newData);
void create();
void insertDataBegining();
void insertDataLast();
data * getNode();
void main()
{
	char ch;
	prev = temp = newData = start = NULL;
	do
	{
		clrscr();
		printf("\n 1:Creation");
		printf("\n 2:Display");
		printf("\n 3:Add node at beginning.");
		printf("\n 4:Add node at last");
		printf("\n 5:Exit");
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();
			getch();
			break;

			case 2:display();
			getch();
			break;

			case 3:insertDataBegining();
			getch();
			break;

			case 4:insertDataLast();
			getch();
			break;
			
			default :printf("\n Enter right option.");
		}
	}while(ch!=5);
}
void create()
{
	do
	{
		newData = getNode();
		if(start == NULL)
		{
			start = newData;
		}
		getData(newData);
		if(prev != NULL)
		{
			prev->next=newData;
		}
		prev=newData;
		printf("\n want to add one more data[Y/N]:");
	}while(getche()!='N');
	end= prev;
	end -> next = start;
}
data * getNode()
{
	temp=(data *)malloc(sizeof(data));
	temp->data=0;
	temp->next=NULL;
	return temp;
}
void getData(data * newData)
{
	printf("\n Enter Data:");
	scanf("%d",&newData->data);
}
void display()
{
	data * current;
	current = start;
	puts("\n Data is:");
	do
	{
		printf(" %d",current->data);
		current = current->next;
	}while(current!=start);
}
void insertDataBegining()
{
	data * current;
	display();
	prev = start;
	temp=getNode();
	getData(temp);
	temp->next=prev;
	start = temp;
	end->next=start;
	display();
}
void insertDataLast()
{
	display();
	temp=getNode();
	getData(temp);
	end->next=temp;
	temp->next=start;
	display();
}
/*
 1:Creation
 2:Display
 3:Add node at beginning.
 4:Add node at last
 5:Exit
 Enter your choice:   1

 Enter Data:10

 want to add one more data[Y/N]:Y
 Enter Data:20

 Want to add one more data[Y/N]:Y
 Enter Data:30

 Want to add one more data[Y/N]:Y
 Enter Data:40

 Want to add one more data[Y/N]:N
 Link list: 10 20 30 40


 1:Creation
 2:Display
 3:Add node at beginning.
 4:Add node at last
 5:Exit
 Enter your choice:   2

 Link list: 10 20 30 40



 1:Creation
 2:Display
 3:Add node at beginning.
 4:Add node at last
 5:Exit
 Enter your choice:   3

 Link list: 10 20 30 40
 Enter Data:50

 Link list: 50 10 20 30 40

*/
	