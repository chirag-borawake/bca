/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 12) Write a menu driven program using ‘C’ for singly linked list -
-	To create linked list.
-	To display linked list
-	To search node in linked list.
-	To count total number of nodes in linked list

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
data * start,*temp,*prev,*newData;
void display();
void getData(data * newData);
void create();
void searchNode();
void countNode();
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
		printf("\n 3:To search node in linked list.");
		printf("\n 4:To count total number of nodes in linked list.");
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
			
			case 3:searchNode();
			exit(0);
			break;

			case 4:countNode();
			exit(0);
			break;

			case 5:exit(0);
			
			default :printf("\n Enter right option.");
		}
	}while(ch!=6);
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
	display();
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
	prev = start;
	printf("\n Data is:");
	while(prev != NULL)
	{
		printf(" %d",prev->data);
		prev=prev->next;
	}
}
void searchNode()
{
	int data,pos=1,isPresent = FALSE;
	printf("\n Enter which node you want to search:");
	scanf("%d",&data);
	prev = start;
	while(prev != NULL)
	{
		if(prev->data == data)
		{
			isPresent = TRUE;
			break;
		}
		else
		{
			pos++;
			prev = prev->next;
		}
	}
	if(isPresent ==FALSE)
	{
		printf("\n There is no node present as %d.",data);
	}
	else
	{
		printf("\n This node is at %d position.",pos);
		display();
	}
}
void countNode()
{
	int count=0, isPresent = FALSE;;
	display();
	prev=start;
	while(prev != NULL)
	{
		isPresent = TRUE;	
		count++;
		prev=prev->next;
	}
	if(isPresent ==FALSE)
	{
		printf("\n Link list is empty.");
	}
	else
	{
		printf("\n There are %d nodes are present.",count);
	}
}
/*
 1:Creation
 2:Display
 3:To search node in linked list.
 4:To count total number of nodes in linked list.
 5:Exit
 Enter your choice:1

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
 3:To search node in linked list.
 4:To count total number of nodes in linked list.
 5:Exit
 Enter your choice:2

 Link list: 10 20 30 40

 1:Creation
 2:Display
 3:To search node in linked list.
 4:To count total number of nodes in linked list.
 5:Exit
 Enter your choice:3

 Enter which node you want to search:30

 This node is at 3 position.
 Data is: 10 20 30 40



 1:Creation
 2:Display
 3:To search node in linked list.
 4:To count total number of nodes in linked list.
 5:Exit
 Enter your choice:4

 Data is: 10 20 30 40
 There are 4 nodes are present.



*/
                                                                
                                                                                
