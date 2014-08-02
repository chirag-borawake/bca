#include<conio.h>
#include<stdio.h>
void book_information();
void display_book_information();
void book_list_of_given_author();
void number_of_books();
int i,n,count=0,select,author_name;
struct book
{
	char book_title[10],author[10],publisher[10];
	int cost;
}b[20];
void main()
{
		while(1)
		{
			clrscr();
			printf("\n 1:Add book information.");
			printf("\n 2:Display book information.");
			printf("\n 3:List all books of given author.");
			printf("\n 4:List the count of books in the library.");
			printf("\n 5:Exit.");
			printf("\n Enter your choice:");
			scanf("%d",&select);
			switch(select)
			{
				case 1:
					book_information();
					break;
				case 2:
					display_book_information();
					break;
				case 3:
					book_list_of_given_author();
					break;
				case 4:
					number_of_books();
					break;
				case 5:
					exit(0);
			}
		}
}
void book_information()
{
	printf("\n Enter how many book entries:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		count++;
		printf("\n Enter book %d details:",i+1);
		printf("\n Enter book title:");
		scanf("%s",&b[i].book_title);
		printf("\n Enter name of author:");
		scanf("%s",&b[i].author);
		printf("\n Enter name of publisher:");
		scanf("%s",&b[i].publisher);
		printf("\n Enter cost of book:");
		scanf("%d",&b[i].cost);
	}
}
void display_book_information()
{
	if(count<1)
	{
		printf("\n NO books in library.");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("\n Book title =%s",b[i].book_title);
			printf("\n Author name =%s",b[i].author);
			printf("\n Publisher =%s",b[i].publisher);
			printf("\n Book cost =%d",b[i].cost);
		}
	}
	getch();
}
void book_list_of_given_author()
{
	if(count<1)
	{
		printf("\n NO books in library.");
	}
	else
	{
		printf("\n Enter which authors book:");
		scanf("%s",author_name);
		printf("\n List of book.");
		for(i=0;i<n;i++)
		{
			if(strcmp(author_name,b[i].author)==0)
			{
				printf("\n %s",b[i].book_title);
			}
		}
	}
	getch();
}
void number_of_books()
{
	if(count<1)
	{
		printf("\n NO books in library.");
	}
	else
	{
		printf("\n In library %d books are present.",count);
	}
	getch();
}

/*

 1:Add book information.                                                        
 2:Display book information.                                                    
 3:List all books of given author.                                              
 4:List the count of books in the library.                                      
 5:Exit.                                                                        
 Enter your choice:1                                                            
                                                                                
 Enter how many book entries:1                                                  
                                                                                
 Enter book 1 details:                                                          
 Enter book title:FSD                                                           
                                                                                
 Enter name of author:p.k.sharama                                               
                                                                                
 Enter name of publisher:nirali                                                 
                                                                                
 Enter cost of book:100                                                         
                                                                                
  */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
