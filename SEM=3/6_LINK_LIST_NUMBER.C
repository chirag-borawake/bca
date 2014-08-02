/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 6) Write a ‘C’ program to create linked list with given number in which data part of each node contains individual digit of the number.
(Ex. Suppose the number is 584 then the nodes of linked list should contain 5, 8, 4.)
  
*/
#include<conio.h>
#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node node;
node *start;
void main()
{
	int number,temp[10],count=0;
	node *newnode,*prev;
	node * getNode();
	void display();
	start = newnode = prev = NULL;
	printf("\n Enter number:" );
	scanf("%d",&number);
	while(number != 0)
	{
		temp[count++]=number%10;
		number = number/10;
	}
	do
	{
		newnode = getNode();
		if(start == NULL)
		{
			start = newnode;
		}
		newnode->data=temp[--count];
		if(prev!=NULL)
		{
			prev->next=newnode;
		}
		prev=newnode;
		number = number/10;
	}while(count!=0);
	display();
	getch();
}
node* getNode()
{
	node * temp;
	temp = (node *)malloc(sizeof(node*));
	temp->data=-1;
	temp->next=NULL;
	return temp;
}
void display()
{
	node * current;
	current = start;
	printf("\n Link list:");
	while(current!=NULL)
	{
		printf(" %d",current->data);
		current = current->next;
	}
}
/*

 Enter number:2012

 Link list: 2 0 1 2

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
