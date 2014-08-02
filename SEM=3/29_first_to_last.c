/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 29) Write a ‘C’ program to remove first node of the list and insert it at the end of the list.

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
data * start,*temp,*prev,*newData,*end;
void display();
void getData(data * newData);
void create();
void swap();
data * getNode();
void main()
{
	prev = temp = newData = start = end = NULL;
	create();
	display();
	swap();
	puts("\n After swaping link list.");
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
		end = prev = newData;
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
	printf("\n Link list is:");
	while(prev != NULL)
	{
		printf(" %d",prev->data);
		prev=prev->next;
	}
}
void swap()
{
	prev = start;
	start = prev->next;
	end->next = prev;
	prev->next =NULL;
}
/*

 Enter Data:1

 want to add one more data[Y/N]:Y
 Enter Data:2

 want to add one more data[Y/N]:Y
 Enter Data:3

 want to add one more data[Y/N]:Y
 Enter Data:4

 want to add one more data[Y/N]:Y
 Enter Data:5

 want to add one more data[Y/N]:N
 Link list is: 1 2 3 4 5
 After swaping link list.

 Link list is: 2 3 4 5 1

*/











                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
