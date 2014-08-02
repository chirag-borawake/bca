/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012


Q. 43) Write a ‘C’ program to create two singly linked lists and calculate the difference of two lists and display the resultant list.
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
data * startdiff,*start,*start1,*start2,*current,*temp,*prev1,*prev2,*newData,*Union;
void display();
void getData(data * newData);
void create();
void getdiff();
data * getNode();
void main()
{
	prev1 = prev2 = temp = newData = startdiff = start = start1 = start2 = current = Union=NULL;
	puts("\n Enter data in first link list.");
	create();
	start1 = start;
	prev1=NULL;
	start = NULL;
	puts("\n Enter data in second link list.");
	create();
	start2 = start;
	start = NULL;
	getdiff();
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
		if(prev1 != NULL)
		{
			prev1->next=newData;
		}
		prev1=newData;
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
	prev1 = start1;
	printf("\n First link list is:");
	while(prev1 != NULL)
	{
		printf(" %d",prev1->data);
		prev1=prev1->next;
	}
	printf("\n Second link list is:");
	prev2 = start2;
	while(prev2 != NULL)
	{
		printf(" %d",prev2->data);
		prev2=prev2->next;
	}
	printf("\n Difference of link lists is:");
	prev1 = startdiff;
	while(prev1 != NULL)
	{
		printf(" %d",prev1->data);
		prev1=prev1->next;
	}
}
void getdiff()
{
	prev1=start1;
	prev2=start2;
	for(;prev1!=NULL || prev2!=NULL;)
	{
		temp = getNode();
		if(startdiff== NULL)
		{
			startdiff= temp;
		}
		temp->data = prev1->data - prev2->data;
		if(current!=NULL)
		{
			current->next=temp;
		}
		current = temp;
		prev1=prev1->next;
		prev2=prev2->next;
	}
}
/*


 Enter data in first link list.
                                                                                
 Enter Data:1                                                                   
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:2                                                                   
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:5                                                                   
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:6                                                                   
                                                                                
 want to add one more data[Y/N]:Y                                               
 Enter Data:88                                                                  
                                                                                
 want to add one more data[Y/N]:Y
 Enter Data:33

 want to add one more data[Y/N]:N
 Enter data in second link list.

 Enter Data:5

 want to add one more data[Y/N]:Y
 Enter Data:3

 want to add one more data[Y/N]:Y
 Enter Data:6

 want to add one more data[Y/N]:Y
 Enter Data:33

 want to add one more data[Y/N]:N
 First link list is: 1 2 5 6 88 33
 Second link list is: 5 3 6 33
 Difference of link lists is: -4 -1 -1 -27 88 33


*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
