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
	long search(Telephone *,char *,int);
	char * search(long,Telephone *,int);
};
long Telephone :: search(Telephone *t, char *name,int n)
{	
	int isPresent = 0;
	for (int i =0 ;i< n;i++)
	{
		if(strcmp( t-> name ,name)==0)
		{
			isPresent = 1;
			break;
		}
		t++;
	}
	if (isPresent)
	{
		return t->telephoneNo;
	}
	else
	{
		return 0;
	}
}
char * Telephone :: search(long no,Telephone *t,int n)
{
	int p=0;
	for(int i = 0 ; i < n ; i ++)
	{
		if (t-> telephoneNo == no)
		{
			 p=1;
		}
		t++;
	}
	if(p)
	{
		return t->name;
	}
	else
	{
		return NULL;
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
				telephoneNum = c.search(customers,searchName,n);
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
				customerName = c.search(searchNum,customers,n);
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
				// c.search(searchCity,customers,n);
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