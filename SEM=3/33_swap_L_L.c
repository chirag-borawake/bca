/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 33) Write a ‘C’ program to swap mth and nth element of singly linked list.
 
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
void display(data *);
void getData(data * newData);
data * create(data *);
data * swap(data *);
data * getNode();
void main()
{
	data * start=NULL,*swapStart=NULL;
	start=create(start);
	display(start);
	swapStart=swap(start);
	display(swapStart);
	getch();
}	
data * create(data *start)
{
	data *prev = NULL,*newData =NULL;
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
		printf("\n Want to add one more data[Y/N]:");
	}while(getche()!='N');
	return(start);
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
void display( data * start)
{
	printf("\n Link list is:");
	while(start != NULL)
	{
		printf(" %d",start->data);
		start=start->next;
	}
}
data * swap(data * start)
{
	int m,n;
	data * first = start, *second = start,*prev=NULL;
	printf("\n Enter which two node you want to swap.\n Enter first node:");
	scanf("%d",&m);
	printf("\n Enter second node:");
	scanf("%d",&n);
	while(first!=NULL)
	{		
		prev=first;
		if(first->data == m )
		{
			break;
		}
		first=first->next;
	}
	while(second!=NULL)
	{		
		if(second->data == n )
		{
			break;
		}
		second=second->next;
	}
	first=second->next;
	second=first;
	prev->next=first;
	return(start);
}
/*

 Enter Data:1

 Want to add one more data[Y/N]:Y
 Enter Data:2

 Want to add one more data[Y/N]:Y
 Enter Data:3

 Want to add one more data[Y/N]:Y
 Enter Data:4

 Want to add one more data[Y/N]:Y
 Enter Data:5

 Want to add one more data[Y/N]:N
 Link list is: 1 2 3 4 5
 Enter which two node you want to swap.
 Enter first node:2

 Enter second node:4

 Link list is: 1 4 3 2 5

*/






                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
