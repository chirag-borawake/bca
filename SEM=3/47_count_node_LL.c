/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 47) Write a ‘C’ program to create a singly linked list and count total number of nodes in it.

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
void count();
data * getNode();
void main()
{
	prev = temp = newData = start=NULL;
	create();
	display();
	count();
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
void count()
{
	int count_element=0;
	prev = start;
	while(prev != NULL)
	{
		count_element++;
		prev=prev->next;
	}
	printf("\n Total number of elements:%d",count_element);
}
/*

 Enter Data:1

 Want to add one more data[Y/N]:Y
 Enter Data:2

 Want to add one more data[Y/N]:Y
 Enter Data:3

 Want to add one more data[Y/N]:Y
 Enter Data:5

 Want to add one more data[Y/N]:N
 Link list is: 1 2 3 5
 Total number of elements:4

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

