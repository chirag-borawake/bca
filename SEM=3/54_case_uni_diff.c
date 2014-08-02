/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012


Q. 54) Write a ‘C’ program to create two singly linked lists and perform following operations 
-	Difference of two lists 
-	Union of two list
-	Display
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
void displayList(data *);
void getData(data *);
data* create();
int isAdded(data* , int );
data* getUnion(data*, data*);
data * getNode();
data * getDifference(data *,data *);
data* current=NULL;
void main()
{
	int ch;
	data * start1, *start2, *startUnion,*startdiff;
	puts("\n Enter data in first link list.");
	start1 = create();
	puts("\n Enter data in second link list.");
	start2 = create();
	do
	{
		clrscr();
		printf("\n 1:Union of two list");
		printf("\n 2:Difference of two lists");
		printf("\n 3:Exit");
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	
			printf("\n First list:");
			displayList(start1);
			printf("\n Second list:");
			displayList(start2);
			startUnion = getUnion(start1, start2);
			puts("\n Union:");
			displayList(startUnion);
			exit(0);
			getch();
			break;

			case 2:
			printf("\n First list:");
			displayList(start1);
			printf("\n Second list:");
			displayList(start2);
			startdiff=getDifference(start1,start2);
			printf("\n Difference of link lists is:");
			displayList(startdiff);
			getch();
			break;
			
			case 3:exit(0);
			
			default :printf("\n Enter right option.");
			getch();
		}
	}while(ch!=4);
}
data * create()
{
	data * newData = NULL, *start = NULL,*prev=NULL;
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
	}while(getche()!='N' );
	return start;
}
data * getNode()
{
	data * temp;
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
void displayList(data * start)
{
	while(start != NULL)
	{
		printf(" %d",start->data);
		start=start->next;
	}
}
int isAdded(data* start, int data)
{ 
	int added=0;
	current=start;

	while(current!=NULL)
	{
		if(current->data==data)
		{
			added = 1;
			break;
		}
		current=current->next;
	}
	return added;
}
data* getUnion(data* start1, data* start2)
{
	data *  intersectionStart = NULL, *current = NULL, *newNode = NULL , * current1=start1, * current2=start2;
	while(current1!=NULL)
	{
		newNode = getNode();
		newNode->data = current1->data;

		if(intersectionStart == NULL)
		{
			intersectionStart = newNode;
			current = newNode;
		}
		else
		{
			current->next = newNode;
			current=current->next;
		}
		current1 = current1->next;

	}
	while(current2!=NULL)
	{
		if(!isAdded(intersectionStart,current2->data))
		{
			newNode = getNode();
			newNode->data = current2->data;
			current->next = newNode;
			current=current->next;
		}
		current2=current2->next;
	}
	return intersectionStart;
}        
data * getDifference(data *start1,data *start2)
{
	data * prev1,*prev2,*temp,*startdiff=NULL;
	prev1=start1;
	prev2=start2;
	for(;prev1!=NULL || prev2!=NULL;)
	{
		temp = getNode();
		if(startdiff== NULL)
		{
			startdiff= temp;
		}
		temp->data = prev1->data - prev2->data;
		if(current!=NULL)
		{
			current->next=temp;
		}
		current = temp;
		prev1=prev1->next;
		prev2=prev2->next;
	}
	return(startdiff);
}

/*

 Enter data in first link list.

 Enter Data:1

 want to add one more data[Y/N]:Y
 Enter Data:2

 want to add one more data[Y/N]:Y
 Enter Data:5

 want to add one more data[Y/N]:Y
 Enter Data:6

 want to add one more data[Y/N]:Y
 Enter Data:88

 want to add one more data[Y/N]:Y
 Enter Data:33

 want to add one more data[Y/N]:N
 Enter data in second link list.

 Enter Data:5

 want to add one more data[Y/N]:Y
 Enter Data:3

 want to add one more data[Y/N]:Y
 Enter Data:6

 want to add one more data[Y/N]:Y
 Enter Data:33

 want to add one more data[Y/N]:N


 1:Union of two list
 2:Difference of two lists
 3:Exit
 Enter your choice:1

 First link list is: 1 2 5 6 88 33
 Second link list is: 5 3 6 33
 Difference of link lists is: -4 -1 -1 -27 88 33


 1:Union of two list
 2:Difference of two lists
 3:Exit
 Enter your choice:1


 First link list is: 1 2 5 6 88 33
 Second link list is: 5 3 6 33

 Union:

 List is: 1 2 3 5 6 33 88
 */




