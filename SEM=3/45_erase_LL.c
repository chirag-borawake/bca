/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

. 45) Write a ‘C’ program to create singly linked list, display it and erase complete list.

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
void erase();
data * getNode();
void main()
{
	prev = temp = newData = start=NULL;
	create();
	display();
	erase();
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
		printf("\n Want to add one more data[Y/N]:");
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
	printf("\n Link list is:");
	while(prev != NULL)
	{
		printf(" %d",prev->data);
		prev=prev->next;
	}
}
void erase()
{
	prev=start;
	while(prev != NULL)
	{
		free(prev);
		prev=prev->next;
	}
	getch();
}