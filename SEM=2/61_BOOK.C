#include<conio.h>
#include<stdio.h>
#include<string.h>
struct book
{
	char book_title[10], author[10], publisher[10];
	int cost;
}b[20];
void main()
{
	int i,n,cost,count=0;
	char author[10],publisher[10];
	printf("\n Enter how many records:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter record %d:",i+1);
		printf("\n Enter book title:");
		scanf("%s",b[i].book_title);
		printf("\n Enter name of author:");
		scanf("%s",b[i].author);
		printf("\n Enter name of publisher:");
		scanf("%s",b[i].publisher);
		printf("\n Enter cost of book:");
		scanf("%d",&b[i].cost);
	}
	printf("\n List of all books:");
	for(i=0;i<n;i++)
	{
		printf(" %s",b[i].book_title);
	}	
	printf("\n Enter which author's book:");
	scanf("%s",author);
	for(i=0;i<n;i++)
	{
		if(strcmp(author,b[i].author)==0)
		{
			count++;
			printf("\n Book of %s is %s",author,b[i].book_title);
		}
	}
	if(count==0)
	{
		printf("\n No book present.");
		count=0;
	}	
	printf("\n Enter which publisher's book:");
	scanf("%s",publisher);
	for(i=0;i<n;i++)
	{
		if(strcmp(publisher,b[i].publisher)==0)
		{
			count++;
			printf("\n Book of publisher %s is %s",publisher,b[i].book_title);
		}
	}
	if(count==0)
	{
		printf("\n No book present.");
		count=0;
	}	
	printf("\n Books which have cost 500 ro above:");
	for(i=0;i<n;i++)
	{
		if(b[i].cost>=500)
		{
			count++;
			printf(" %s",b[i].book_title);
		}
	}
	if(count==0)
	{
		printf("Is not book present.");
	}
	getch();
}
/* out put:-

 Enter how many records:1

 Enter record 1:
 Enter book title:DBMS

 Enter name of author:p.k.dixit

 Enter name of publisher:nirali

 Enter cost of book:120

 List of all books: DBMS
 Enter which author's book:p.k.dixit

 Book of p.k.dixit is DBMS
 Enter which publisher's book:nirali

 Book of publisher nirali is DBMS
 Books which have cost 500 ro above:

*/












                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
