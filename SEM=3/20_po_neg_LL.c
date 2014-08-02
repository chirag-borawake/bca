/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012


Q. 20) Write a ‘C’ program to read n integers and create two lists such that all positive numbers are in one list and negative numbers are in another list. Display both the lists in sorted order.

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
data *startNegative,*startPositive,*temp,*newData,*current,*prevPos,*prevNeg;
void display();
void getData(data * newData);
void createPositive(int);
void createNegative(int);
void positiveNegative();
data * getNode();
void main()
{
	newData = startPositive = startNegative = current = prevPos = prevNeg = NULL;
	positiveNegative();
	display();
	getch();
}	
void createPositive( int temp)
{
	newData = getNode();
	if(startPositive == NULL)
	{
		startPositive = newData;
	}
	newData -> data =temp;
	if(prevPos != NULL)
	{
		prevPos->next=newData;
	}
	prevPos=newData;
}
void createNegative( int temp)
{
	newData = getNode();
	if(startNegative == NULL)
	{
		startNegative = newData;
	}
	newData -> data =temp;
	if(prevNeg != NULL)
	{
		prevNeg->next=newData;
	}
	prevNeg=newData;
}
data * getNode()
{
	temp=(data *)malloc(sizeof(data));
	temp->data=0;
	temp->next=NULL;
	return temp;
}
void display()
{
	current = startPositive;
	if(current != NULL)
	{
		printf("\n Positive number link list is:");
	}
	while(current != NULL)
	{
		printf(" %d",current->data);
		current=current->next;
	}
	current = startNegative;
	if(current != NULL)
	{
		printf("\n Negative number link list is:");
	}	
	while(current != NULL)
	{
		printf(" %d",current->data);
		current=current->next;
	}
}
void positiveNegative( )
{
	int n,i,num;
	printf("\n How many number you want to enter:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:",i+1);
		scanf("%d",&num);
		if(num > 0)
		{
			createPositive(num);
		}
		else
		{
			createNegative(num);
		}
	}
}
/*

 How many number you want to enter:7

 Enter element 1:3

 Enter element 2:-5

 Enter element 3:6

 Enter element 4:-7

 Enter element 5:4

 Enter element 6:6

 Enter element 7:-2

 Positive number link list is: 3 6 4 6
 Negative number link list is: -5 -7 -2

*/







                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
