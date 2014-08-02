/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
 Q. Create a C++ class for inventory of books containing author, title, price, and publisher and stock as data members. Book can be sold, if stock is available, otherwise purchase will be made. Write necessary member functions for the following:
	1. To accept details from user.
	2. To sale a book. (Sale contains book details & number of copies to be sold.)
	3. To Purchase a book. (Purchase contains book details & number of copies to be purchased)
(Use new operator to allocate memory)
*/
#include<conio.h>
#include<string.h>
#include<iostream.h>
int const MAX = 10;
class InventoryOfBook
{
	char author[20];
	char title[20];
	char publisher[20];
	int price;
	int stock;
	public:
	void getData();
	void saleBook(InventoryOfBook*,int);
	void purchaseBook(InventoryOfBook*,int);
	int searchBook();
	void display();
};
int getChoice()
{
	int choice;
	cout<<"\n 1: To accept details from user.";
	cout<<"\n 2: To sale a book.";
	cout<<"\n 3: To Purchase a book.";
	cout<<"\n 4: Exit.";
	cout<<"\n Enter your choice:";
	cin>>choice;
	return choice;
}
void InventoryOfBook :: getData()
{
	cout<<"\n Enter book title:";
	cin>>title;
	cout<<"\n Entre book author name:";
	cin>>author;
	cout<<"\n Enter book publisher:";
	cin>>publisher;
	cout<<"\n Enter book price:";
	cin>>price;
	cout<<"\n Enter book stock:";
	cin>>stock;
 }
void InventoryOfBook :: display()
{
	cout<<"\n Book title:"<<title;
	cout<<"\n Book author name:"<<author;
	cout<<"\n Book publisher:"<<publisher;
	cout<<"\n Book price:"<<price;
	cout<<"\n Book stock:"<<stock<<"\n";
}
void InventoryOfBook::saleBook(InventoryOfBook *inventory,int n)
{
	int isPresent = 0,num,price;
	char bookName[20];
	for(int i = 0;i < n; i++)
	{
		cout<<"\n Record "<<i+1;
		inventory[i].display();
	}
	cout<<"\n Enter which book want to sale:";
	cin>>bookName;
	for(i = 0;i < n; i++)
	{
		if(strcmp(inventory[i].title,bookName) == 0)
		{
			isPresent = 1;
			break;
		}
	}
	if(isPresent)
	{
		cout<<"\n Enter how many copsies:";
		cin>>num;
		if(inventory[i].stock >= num)
		{
			inventory[i].stock-=num;
		}
		else
		{
			cout<<"\n Stock not available.";
		}
	}
	else
	{
		cout<<"\n No record present as:"<<bookName;
	}
}
void InventoryOfBook::purchaseBook(InventoryOfBook *inventory,int n)
{
	int isPresent = 0,num;
	char bookName[20];
	for(int i = 0;i < n; i++)
	{
		cout<<"\n Record "<<i+1;
		inventory[i].display();
	}
	cout<<"\n Enter which book want to perchase:";
	cin>>bookName;
	for(i = 0;i < n; i++)
	{
		if(strcmp(inventory[i].title,bookName) == 0)
		{
			isPresent = 1;
			break;
		}
	}
	if(isPresent)
	{
		cout<<"\n Enter how many copsies:";
		cin>>num;
		if(inventory[i].stock >= num)
		{
			inventory[i].stock-=num;
			cout<<"\n Total price:"<<num*inventory[i].price;
		}
		else
		{
			cout<<"\n Stock not available.";
		}
	}
	else
	{
		cout<<"\n No record present as:"<<bookName;
	}
}
main()
{
	InventoryOfBook *inventory = new InventoryOfBook[10],i;
	int j, n,choice;
	clrscr();
	do
	{
		choice = getChoice();
		switch(choice)
		{
			case 1:
			cout<<"\n Enter how many records:";
			cin>>n;
			for(j = 0; j < n ;j ++)
			{
				cout<<"\n Entre record "<<j+1;
				inventory[j].getData();
			}
			break;
		
			case 2:
			i.saleBook(inventory,n);
			break;
			
			case 3:
			i.purchaseBook(inventory,n);
			break;
		}
	}while(choice != 4);
	getch();
	return 0;

}
/*Out Put:-
 Entre record 1
 Enter book title:C++
 Entre book author name:Balagurusamy
 Enter book publisher:BEP
 Enter book price:450
 Enter book stock:200
 
 Entre record 2
 Enter book title:VB
 Entre book author name:Chaudhari
 Enter book publisher:Nirali
 Enter book price:215
 Enter book stock:150
 
 Entre record 3
 Enter book title:Let_us_c
 Entre book author name:Kanetkar
 Enter book publisher:BEP
 Enter book price:350
 Enter book stock:450
 
 1: To accept details from user.
 2: To sale a book.
 3: To Purchase a book.
 4: Exit.
 Enter your choice:2

 Record 1
 Book title:C++
 Book author name:Balagurusamy
 Book publisher:BEP
 Book price:450
 Book stock:200

 Record 2
 Book title:VB
 Book author name:Chaudhari
 Book publisher:Nirali
 Book price:215
 Book stock:150

 Record 3
 Book title:Let_us_c
 Book author name:Kanetkar
 Book publisher:BEP
 Book price:350
 Book stock:450

 Enter which book want to sale:C++
 Enter how many copsies:100

 1: To accept details from user.
 2: To sale a book.
 3: To Purchase a book.
 4: Exit.
 Enter your choice:3

 Record 1
 Book title:C++
 Book author name:Balagurusamy
 Book publisher:BEP
 Book price:450
 Book stock:200

 Record 2
 Book title:VB
 Book author name:Chaudhari
 Book publisher:Nirali
 Book price:215
 Book stock:150

 Record 3
 Book title:Let_us_c
 Book author name:Kanetkar
 Book publisher:BEP
 Book price:350
 Book stock:450
                                                                                
 Enter which book want to perchase:Let_us_c                                            
                                                                                
 Enter how many copsies:15                                                      
                                                                                
 Total price:5250                                                               
 1: To accept details from user.                                                
 2: To sale a book.                                                             
 3: To Purchase a book.                                                         
 4: Exit.                                                                       
 Enter your choice:4  

*/
