/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 39) Write a ‘C’ program to sort elements of a singly linked list in ascending order.


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
data * sort(data *);
data * getNode();
void main()
{
	data * start=NULL,*sortStart=NULL;
	start=create(start);
	display(start);
	sortStart=sort(start);
	display(sortStart);
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
data * sort(data * start)
{
	int temp;
	data * first = start, *second = start->next;
	while(first!=NULL)
	{
		second= first->next;
		while(second!=NULL)
		{
			if(first->data > second->data)
			{
				temp = first->data;
				first->data=second->data;
				second->data=temp;
			}
			second=second->next;
		}
		first=first->next;
		
	}
	
	return(start);
}
/*

 Enter Data:1                                                                   
                                                                                
 Want to add one more data[Y/N]:Y                                               
 Enter Data:4                                                                   
                                                                                
 Want to add one more data[Y/N]:Y                                               
 Enter Data:3                                                                   
                                                                                
 Want to add one more data[Y/N]:Y                                               
 Enter Data:8

 Want to add one more data[Y/N]:Y
 Enter Data:9

 Want to add one more data[Y/N]:N
 Link list is: 1 4 3 8 9
 Link list is: 1 3 4 8 9

*/






























