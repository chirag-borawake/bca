/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 16) Write a ‘C’ program to create two singly linked lists and perform the union of two lists and display it.

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
data* current=NULL;
void main()
{
	data * start1, *start2, *startUnion;
	puts("\n Enter data in first link list.");
	start1 = create();
	puts("\n Enter data in second link list.");
	start2 = create();
	
	puts("\n First List:");
	displayList(start1);
	puts("\n Second List:");
	displayList(start2);
	startUnion = getUnion(start1, start2);
	puts("\n Union:");
	displayList(startUnion);
	getch();
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
	printf("\n List is:");
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
/*

 Enter data in first link list.                                                 
                                                                                
 Enter Data:1                                                                   
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:2                                                                   
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:7                                                                   
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:4                                                                   
                                                                                
 want to add one more data[Y/N]:N                                               
 Enter data in second link list.                                                
                                                                                
 Enter Data:2                                                                   
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:9
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:1                                                                   
                                                                                
 want to add one more data[Y/N]:N                                               
 First List:                                                                    
                                                                                
 List is: 1 2 7 4                                                               
 Second List:                                                                   

 List is: 2 9 1
 Union:

 List is: 1 2 7 4 9





*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
