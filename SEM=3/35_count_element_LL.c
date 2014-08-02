/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 35) Write a ‘C’ program to count all non-zero elements, odd numbers and even numbers in the singly linked list.

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
	int odd=0,even=0,count_element=0;
	prev = start;
	while(prev != NULL)
	{
		count_element++;
		if(prev->data%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		prev=prev->next;
	}
	printf("\n Total number of elements:%d",count_element);
	printf("\n Total number of even elements:%d",even);
	printf("\n Total number of odd elements:%d",odd);
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
 Enter Data:4

 Want to add one more data[Y/N]:Y
 Enter Data:56

 Want to add one more data[Y/N]:N
 Link list is: 1 2 3 4 4 56
 Total number of elements:6
 Total number of even elements:4
 Total number of odd elements:2

*/











                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
