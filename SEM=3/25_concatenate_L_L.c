/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012


Q. 25) Write a ‘C’ program to create two singly linked lists and concatenate one list at the 
    end of another list.
 
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
void display();
void getData(data * newData);
data* create();
data* concatenate(data*,data*);
data * getNode();
void main()
{
	data * start1 = NULL,*start2 = NULL ,*start3 = NULL;
	puts("\n Enter data in first link list.");
	start1=create();
	puts("\n Enter data in second link list.");
	start2=create();
	printf("\n First link list:");
	display(start1);
	printf("\n Second link list:");
	display(start2);
	start3=concatenate(start1,start2);
	printf("\n Concatenate link list");
	display(start3);

	getch();
}	
data* create()
{
	data *newData = NULL,*start=NULL,*prev=NULL;
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
void display(data * start)
{
	printf("\n List is:");
	while(start != NULL)
	{
		printf(" %d",start->data);
		start=start->next;
	}
}
data * concatenate(data *start1,data *start2)
{
	data * start3;
	start3=start1;
	while(start1->next!=NULL)
	{
		start1=start1->next;
	}	
	start1->next=start2;
	return(start3);
}
/*

 Enter data in first link list.

 Enter Data:1

 want to add one more data[Y/N]:Y
 Enter Data:2

 want to add one more data[Y/N]:Y
 Enter Data:3

 want to add one more data[Y/N]:Y
 Enter Data:4

 want to add one more data[Y/N]:N
 Enter data in second link list.

 Enter Data:5

 want to add one more data[Y/N]:Y
 Enter Data:6

 want to add one more data[Y/N]:Y
 Enter Data:7

 want to add one more data[Y/N]:Y
 Enter Data:8

 want to add one more data[Y/N]:N
 First link list:
 List is: 1 2 3 4
 Second link list:
 List is: 5 6 7 8
 Concatenate link list
 List is: 1 2 3 4 5 6 7 8

*/












                                                                                
