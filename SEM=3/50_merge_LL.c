/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012


Q. 50) Write a ‘C’ program to merge two sorted singly linked list of integers into a third list such that third list is also in the sorted order
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
data* sort(data*, data*);
data * getNode();
data* current=NULL;
void main()
{
	data * start1, *start2, *startSort;
	puts("\n Enter data in first link list.");
	start1 = create();
	puts("\n Enter data in second link list.");
	start2 = create();
	
	puts("\n First List:");
	displayList(start1);
	puts("\n Second List:");
	displayList(start2);
	startSort = sort(start1, start2);
	puts("\n Sort element:");
	displayList(startSort);
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
data* sort(data* start1, data* start2)
{
	data *  sortStart = NULL, *current = NULL, *newNode = NULL , * current1=start1, * current2=start2,*temp;
	for(;current1!=NULL && current2!=NULL;)
	{
		newNode = getNode();
		if(current1->data <  current2->data)
		{
			newNode->data = current1->data;
			current1=current1->next;
		}
		else
		{
			newNode->data = current2->data;
			current2=current2->next;
		}
		if(sortStart == NULL)
		{
			sortStart = newNode;
			current=newNode;
		}
		else
		{
			current->next = newNode;
			current=newNode;
		}
	}
	while(current1!=NULL)
	{	
		temp =getNode();
		temp->data=current1->data;
		current->next=temp;
		current=temp;
		current1=current1->next;
	}
	while(current2!=NULL)
	{	
		temp =getNode();
		temp->data=current2->data;
		current->next=temp;
		current=temp;
		current2=current2->next;
	}
	return sortStart;
}
/*

 Enter data in first link list.

 Enter Data:2

 want to add one more data[Y/N]:Y
 Enter Data:4

 want to add one more data[Y/N]:Y
 Enter Data:6

 want to add one more data[Y/N]:y
 Enter Data:7

 want to add one more data[Y/N]:y
 Enter Data:8

 want to add one more data[Y/N]:N
 Enter data in second link list.

 Enter Data:1

 want to add one more data[Y/N]:Y
 Enter Data:3

 want to add one more data[Y/N]:9
 Enter Data:9

 want to add one more data[Y/N]:N
 First List:

 List is: 2 4 6 7 8
 Second List:

 List is: 1 3 9
 Sort element:

 List is: 1 2 3 4 6 7 8 9

*/










