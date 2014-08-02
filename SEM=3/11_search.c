/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q ) Write a ‘C’ program to search given elements into the list using linear search method.

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
int search( data * );
data* create();
data * getNode();
data* current=NULL;
void main()
{
	int pos;
	data * start, *start2;
	puts("\n Enter data in link list.");
	start = create();
	puts("\n First List:");
	displayList(start);
	pos=search(start);
	if(!pos)
	{
		printf("\n No element present.");
	}
	else
	{
		printf("\n Position of element is %d",pos);
	}
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
int search( data * start)
{
	int pos,i=1;
	printf("\n enter element to search:");
	scanf("%d",&pos);
	while(start != NULL)
	{
		if(start ->data == pos)
		{
			return i;
		}
		start=start->next;
		i++;
	}
	return 0;
}
/*

 Enter data in link list.

 Enter Data:10

 want to add one more data[Y/N]:Y
 Enter Data:20

 want to add one more data[Y/N]:Y
 Enter Data:30

 want to add one more data[Y/N]:Y
 Enter Data:40

 want to add one more data[Y/N]:N
 First List:

 List is: 10 20 30 40
 enter element to search:30

 Position of element is 3

*/



























