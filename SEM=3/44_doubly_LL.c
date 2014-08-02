/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 44) Write a menu driven program using C for implementation of Doubly linked list. Menu includes – 
1.Create.
2.Display.
3.Search specific element in list and display appropriate Message.
*/
#include<conio.h>
#include<stdio.h>
#define TRUE 1
#define FALSE 0
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
typedef struct node data;
data *start,*end,*newData,*current,*temp,*prev;
data * getNode();
void display();
void getData(data *newData);
void searchNode();
void create();
void main()
{
	char ch;
	current = prev = temp = newData = start = NULL;
	do
	{
		clrscr();
		printf("\n 1:Creation");
		printf("\n 2:Display");
		printf("\n 3:Search");
		printf("\n 4:Exit");
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

			case 3:searchNode();
			exit(0);
			getch();
			break;

			case 4:exit(0);
			getch();
			break;

			default :printf("\n Enter right option.");
		}
	}while(ch!=4);
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
		if(current!=NULL)
		{
			current -> next = newData;
			newData -> prev = current;
		}
		current=newData;
		end = current;
		printf("\n Want to add one more record[Y/N]:");
	}while(getche() !='N');
	display();
	getch();
}
void getData(data *newData)
{
	printf("\n Enter data:");
	scanf("%d",&newData->data);
}
data* getNode()
{
	data * temp;
	temp = (data *)malloc(sizeof(data));
	temp -> data = -1;
	temp -> next = NULL;
	temp -> prev = NULL;
	return temp;
}
void display()
{
	data * current;
	current = start;
	printf("\n Link list:");
	while(current!=NULL)
	{
		printf(" %d",current ->data);
		current = current -> next;
	}
	current = end;
	printf("\n Link list reverse:");
	while(current!=NULL)
	{
		printf(" %d",current ->data);
		current = current -> prev;
	}
}
void searchNode()
{
	int data,pos=1,isPresent = FALSE;
	printf("\n Enter which node you want to search:");
	scanf("%d",&data);
	prev = start;
	while(prev != NULL)
	{
		if(prev->data == data)
		{
			isPresent = TRUE;
			break;
		}
		else
		{
			pos++;
			prev = prev->next;
		}
	}
	if(isPresent ==FALSE)
	{
		printf("\n There is no node present as %d.",data);
	}
	else
	{
		printf("\n This node is at %d position.",pos);
		display();
	}
}
/*


 1:Creation
 2:Display
 3:Search
 4:Exit
 Enter your choice:1

 Enter data:2

 Want to add one more record[Y/N]:Y
 Enter data:4

 Want to add one more record[Y/N]:Y
 Enter data:5

 Want to add one more record[Y/N]:Y
 Enter data:7

 Want to add one more record[Y/N]:N


  1:Creation
  2:Display
  3:Search
  4:Exit
  Enter your choice:1


  Link list: 2 4 5 7
  Link list reverse: 7 5 4 2

 1:Creation
 2:Display
 3:Search
 4:Exit
 Enter your choice:3

 Link list: 2 4 5 7
 Link list reverse: 7 5 4 2
 Enter which node you want to search:5

 This node is at 3 position.
 Link list: 2 4 5 7
 Link list reverse: 7 5 4 2


*/










                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
