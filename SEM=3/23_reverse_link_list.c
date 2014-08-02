/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 23) Write a ‘C’ program to create a singly linked list, reverse it and display both the list.

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
data * start,*start2,*current,*temp,*prev,*newData;
void display();
void getData(data * newData);
void create();
void reverseLinkList();
data * getNode();
void main()
{
	prev = temp = newData = start = start2 = current =NULL;
	create();
	reverseLinkList();
	display();
	getch();
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
	printf("\n First link list is:");
	while(prev != NULL)
	{
		printf(" %d",prev->data);
		prev=prev->next;
	}
	printf("\n Reverse link list is:");
	prev = start2;
	while(prev != NULL)
	{
		printf(" %d",prev->data);
		prev=prev->next;
	}
}
void reverseLinkList()
{
	int data[10],count=0,isPresent = FALSE;
	prev = start;
	while(prev != NULL)
	{
		data[count++]=prev->data;
		prev=prev->next;
	}
	prev = start;
	while(prev != NULL)
	{
		newData = getNode();
		if(start2 == NULL)
		{
			start2 = newData;
		}
		newData->data = data[--count];
		if(current!= NULL)
		{
			current->next = newData; 
		}
		current = newData;
		prev = prev->next;
	}	
}
/*

 Enter Data:1                                                                   
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:3                                                                   
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:4

 want to add one more data[Y/N]:Y
 Enter Data:6

 want to add one more data[Y/N]:Y
 Enter Data:7

 want to add one more data[Y/N]:N
 First link list is: 1 3 4 6 7
 Reverse link list is: 7 6 4 3 1

*/





















                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
