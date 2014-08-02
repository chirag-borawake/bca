/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 22) Write a ‘C’ program to create two singly linked lists and perform the intersection operations on two lists and display the resultant list.
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
data* create();
data * getIntersection(data *,data*);
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
	start3=getIntersection(start1,start2);
	printf("\n Intersection of link lists");
	display(start3);
	getch();
}	
data * create()
{
	data *newData =NULL,*start=NULL,*prev=NULL;
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
	data *temp;
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
data * getIntersection(data *start1,data* start2)
{
	data *prev1,*prev2=start2,*temp,*current=NULL,*startIntersection=NULL;
	while(prev2!=NULL)
	{
		prev1=start1;
		while(prev1!=NULL)
		{
			if(prev2->data == prev1->data)
			{
				temp = getNode();
				if(startIntersection == NULL)
				{
					startIntersection = temp;
				}
				temp->data = prev1->data;
				if(current!=NULL)
				{
					current->next=temp;
				}
				current = temp;
			}	
			prev1=prev1->next;
		}
		prev2=prev2->next;
	}
	return(startIntersection);
}
/*

 Enter data in first link list.                                                 
                                                                                
 Enter Data:1                                                                   
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:3                                                                   
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:5                                                                   
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:6                                                                   
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:9                                                                   
                                                                                
 want to add one more data[Y/N]:N                                               
 Enter data in second link list.                                                
                                                                                
 Enter Data:2
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:4                                                                   
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:5                                                                   
                                                                                
 want to add one more data[Y/N]:N                                               
 First link list:                                                               
 List is: 1 3 5 6 9                                                             
 Second link list:                                                              
 List is: 2 4 5                                                                 
 Intersection of link lists                                                     
 List is: 5                                                                     
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
