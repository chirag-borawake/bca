/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q) Write a menu driven program using ‘C’ for singly linked list-
-	To create linked list.
-	To display linked list 
-	To add node at last position of linked list.
-	To delete node from last position of linked list.
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
void insertData();
void deleteData();
data * getNode();
void main()
{
	char ch;
	prev = temp = newData = start = NULL;
	do
	{
		clrscr();
		printf("\n 1:Creation");
		printf("\n 2:Display");
		printf("\n 3:Insert node at last position of linked list.");
		printf("\n 4:Delete");
		printf("\n 5:Exit");
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();
			getch();
			break;

			case 2:display();
			getch();
			break;
			
			case 3:insertData();
			getch();
			break;

			case 4:deleteData();
			getch();
			break;
			
			case 5:exit(0);
			
			default :printf("\n Enter right option.");
		}
	}while(ch!=5);
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
		end=newData;
		printf("\n want to add one more data[Y/N]:");
	}while(getche()!='N');
	display();
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
	printf("\n Data is:");
	while(prev != NULL)
	{
		printf(" %d",prev->data);
		prev=prev->next;
	}
}
void insertData()
{
	display();
    temp=getNode();
	getData(temp);
	end->next=temp;
	display();	
}
void deleteData()
{
	int data,isPresent = FALSE;;
	display();
	printf("\n Enter data to be deleted:");
	scanf("%d",&data);
	prev=start;
	while(prev != NULL)
	{
		if(prev->data == data)
		{
			isPresent = TRUE;
			start=prev->next;
			break;
		}
		else
		{
			temp=prev;
			prev=prev->next;
			if(prev->data == data)
			{
				isPresent = TRUE;
				temp->next=prev->next;
				break;
			}
		}
	}
	if(isPresent ==FALSE)
	{
		printf("\n There is no data present as %d.",data);
	}
	else
	{
		display();
	}
}

/*

 1:Creation                                                                     
 2:Display                                                                      
 3:Insert node at last position of linked list.                                 
 4:Delete                                                                       
 5:Exit                                                                         
 Enter your choice:1

 Enter Data:10

 want to add one more data[Y/N]:Y
 Enter Data:20

 Want to add one more data[Y/N]:Y
 Enter Data:30

 Want to add one more data[Y/N]:Y
 Enter Data:40

 Want to add one more data[Y/N]:N
 Link list: 10 20 30 40

 1:Creation                                                                     
 2:Display                                                                      
 3:Insert node at last position of linked list.                                 
 4:Delete                                                                       
 5:Exit                                                                         
 Enter your choice:2

 Link list: 10 20 30 40

 1:Creation                                                                     
 2:Display                                                                      
 3:Insert node at last position of linked list.                                 
 4:Delete                                                                       
 5:Exit                                                                         
 Enter your choice:3

 Link list: 10 20 30 40
 Enter Data:50

 Link list: 50 10 20 30 40


 1:Creation                                                                     
 2:Display                                                                      
 3:Insert node at last position of linked list.                                 
 4:Delete                                                                       
 5:Exit                                                                         
 Enter your choice:4

 Link list: 50 10 20 30 40
 Enter data to be deleted:50

 Link list: 10 20 30 40

 1:Creation                                                                     
 2:Display                                                                      
 3:Insert node at last position of linked list.                                 
 4:Delete                                                                       
 5:Exit                                                                         
 Enter your choice:3                                                            
                                                                                
 Data is: 10 20 30 40                                                           
 Enter Data:50                                                                  
                                                                                
 Data is: 10 20 30 40 50                                                        
                                                                  
   */
                                                                                
