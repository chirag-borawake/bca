/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
 Q. Create a C++ class telephone containing name, telephone number & city as data members and write necessary member functions for the following:
-	Search the telephone number with given name.
-	Search the name with given telephone number.
-	Search all customers in a given city.
    (Use function overloading)
*/
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>
int const MAX = 10;
class Telephone
{
	char name[10];
	long telephoneNo;
	char city[10];
	public:
	void getData();
	long search(Telephone *,int,char*);
	char* search(Telephone *, int,long);
	void search(char*,Telephone *,int);
};
long Telephone :: search(Telephone *c,int n,char *searchName)
{
	int flag = 0;
	long  number;
	for(int i = 0;i < n ;i++,c++)
	{
		if(strcmp(c->name,searchName) == 0)
		{
			flag = 1;
			number =  c -> telephoneNo;
		}
	}
	if(flag)
	{
		return number;
	}
	else
	{
		return -1;
	}
}
char* Telephone :: search(Telephone *c, int n,long searchNumber)
{
	int flag = 0;
	char *name;
	for(int i = 0;i < n ;i++,c++)
	{
		if(c->telephoneNo == searchNumber)
		{
			flag = 1;
			name =  c->name;
		}
	}
	if(flag)
	{
		return name;
	}
	else
	{
		return NULL;
	}
}
void Telephone :: search(char *searchCity,Telephone *c, int n)
{
	cout<<"\n Customers name:";
	for(int i = 0;i < n ;i++,c++)
	{
		if(strcmp(c->city,searchCity) == 0)
		{
		 cout<<" "<<c->name;
		}
	}

} 
main()
{
	Telephone customers[MAX],c;
	int getChoice();
	int n,i,choice;
	char searchName[10],searchCity[10],*customerName,cityName;
	long searchNum ,telephoneNum;
	clrscr();
	cout<<"\n Enter how many customer record:";
	cin>>n;
	for(i = 0;i < n;i++)
	{
		cout<<"\n Enter record "<<i+1;
		customers[i].getData();
	}
	do
	{
		choice = getChoice();
		switch(choice)
		{
			case 1:
				cout<<"\n Enter name to find out telephone number.\n Enter Name:";
				cin>>searchName;
				telephoneNum = c.search(customers,n,searchName);
				if(telephoneNum != -1)
				{
					cout<<"\n Telephone number of customer:"<<telephoneNum;
				}
				else
				{
					cout<<"\n There is no record as:"<<searchName;
				}
				break;

			case 2:
				cout<<"\n Enter telephone number to find out name.\n Enter telephone number:";
				cin>>searchNum;
				customerName = c.search(customers,n,searchNum);
				if(customerName != NULL)
				{
					cout<<"\n Telephone number of customer:"<<customerName;
				}
				else
				{
					cout<<"\n There is no record as:"<<searchNum;
				}
				break;
			case 3:
				cout<<"\n Enter which city's customer want to see:";
				cin>>searchCity;
				 c.search(searchCity,customers,n);
				break;
		}
	}while(choice != 4);
	getch();
	return 0;
}
void Telephone :: getData()
{
	cout<<"\n Enter customer name:";
	cin>>name;
	cout<<"\n Enter telephone number:";
	cin>>telephoneNo;
	cout<<"\n Enter customer city:";
	cin>>city;
}
int getChoice()
{
	int choice;
	cout<<"\n 1:Search the telephone number with given name.";
	cout<<"\n 2:Search the name with given telephone number.";
	cout<<"\n 3:Search all customers in a given city.";
	cout<<"\n 4:Exit.";
	cout<<"\n Enter your choice:";
	flushall();
	cin>>choice;
	return choice;
}
/* Out Put:-

 Enter record 1
 Enter customer name:Chirag

 Enter telephone number:8600467667

 Enter customer city:Pune

 Enter record 2
 Enter customer name:Lokesh

 Enter telephone number:9844548237

 Enter customer city:Pune

 1:Search the telephone number with given name.
 2:Search the name with given telephone number.
 3:Search all customers in a given city.
 4:Exit.
 Enter your choice:1

 Enter name to find out telephone number.
 Enter Name:Chirag

 Telephone number of customer:10533075
 1:Search the telephone number with given name.
 2:Search the name with given telephone number.
 3:Search all customers in a given city.
 4:Exit.
 Enter your choice:2

 Enter telephone number to find out name.
 Enter telephone number:8600467667

 Telephone number of customer:Chirag
 1:Search the telephone number with given name.
 2:Search the name with given telephone number.
 3:Search all customers in a given city.
 4:Exit.
 Enter your choice:3

 Enter which city's customer want to see:Pune

 Customers name: Chirag Lokesh
 1:Search the telephone number with given name.
 2:Search the name with given telephone number.
 3:Search all customers in a given city.
 4:Exit.
 Enter your choice:4

*/