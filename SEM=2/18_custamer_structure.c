#include<conio.h>
#include<stdio.h>
void diplay(struct customer *);
struct customer
{
	char customer_name[10];
	int account_no,balance;
};
int n,i,j;
void main()
{
	struct customer c[20];
	clrscr();
	printf("\n Enter how many customer details you want to enter:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter %d customer details.",i+1);
		printf("\n Enter name:");
		scanf("%s",c[i].customer_name);
		printf("\n Enter account number:");
		scanf("%d",&c[i].account_no);
		printf("\n Enter balance:");
		scanf("%d",&c[i].balance);
	}
	diplay(c);
	getch();
}
void diplay(struct customer *c)
{	
	printf("\n Details of customer which have banance less than 100.");
	for(i=0;i<n;i++)
	{
		if(c->balance < 100)
		{
			printf("\n Customer name:%s",c->customer_name);
			printf("\n Customer number:%d",c->account_no);
			printf("\n Customer balance:%d",c->balance);
		}
		c++;
	}
}
/*
Out put:-

 Enter how many customer details you want to enter:2

 Enter 1 customer details.
 Enter name:chirag

 Enter account number:1012

 Enter balance:22

 Enter 2 customer details.
 Enter name:raj

 Enter account number:3121

 Enter balance:12

 Details of customer which have banance less than 100.
 Customer name:chirag
 Customer number:1012
 Customer balance:22
 Customer name:raj
 Customer number:3121
 Customer balance:12
*/















                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
