/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Consider the following C++ class hierarchy.
	Create a base class Employee(empcode, empname). Derive the classes Manager(designation, clubdues), Scientist(deptname, publications) from
Employee class. Write a C++ menu driven program
1.	to accept  the details of ‘n’ employees
2.	to display the information
3.	to display all the scientist from “Chemistry Department ”.
*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>
class Employee
{
	protected :
	int ecode;
	char name[20];
	public:
	void getData()
	{
		cout<<"\n Enter employee code:";
		cin>>ecode;
		cout<<"\n Enter employee name:";
		cin>>name;
	}
	void display()
	{
		cout<<"\n Employee code:"<<ecode;
		cout<<"\n Employee name:"<<name;
	}
};
class Manager:public Employee
{
	protected:
	char desg[20];
	public:
	void getData()
	{
		Employee ::getData();
		cout<<"\n Enter designation :";
		cin>>desg;
	}
	void display()
	{
		Employee::display();
		cout<<"\n Managers designation:"<<desg<<"\n";
	}
};
class Scientist:public Employee
{
	protected:
	char deptname[10];
	char publication[10];
	public:
	void getData()
	{
		Employee ::getData();
		cout<<"\n Enter department name:";
		cin>>deptname;
		cout<<"\n Enter publication:";
		cin>>publication;
	}
	void display()
	{
		Employee::display();
		cout<<"\n Department name:"<<deptname;
		cout<<"\n Publication:"<<publication<<"\n";
	}
	void getscientistName(Scientist *,int);
};
void Scientist :: getscientistName(Scientist *scientist,int n)
{
	int i,isPresent = 0;
	for(i = 0; i < n ;i ++)
	{
		if( strcmp(scientist->deptname,"Chemistry")==0)
		{
			isPresent = 1;
			cout<<" "<<scientist[i].name;
		}
	}
	if(!isPresent)
	{
		cout<<"\n No scientist present in chemistry department.";
	}
}
int getChoice()
{
	int choice;
	cout<<"\n 1:To accept  the details of employees";
	cout<<"\n 2:To display the information";
	cout<<"\n 3:To display all the scientist from Chemistry Department";
	cout<<"\n 4:Exit.";
	cout<<"\n Enter your choice:";
	cin>>choice;
	return choice;
}
main()
{
	Manager manager[10];
	Scientist scientist[10];
	int i, n,choice;
	clrscr();
	do
	{
		choice = getChoice();
		switch(choice)
		{
			case 1:
			cout<<"\n Enter how many records:";
			cin>>n;
			cout<<"\n Enter manager`s data.";
			for(i = 0; i < n ;i ++)
			{
				cout<<"\n Enter record "<<i+1;
				manager[i].getData();
 			}
			cout<<"\n Enter scientist`s data.";
			for(i = 0; i < n ;i ++)
			{
				cout<<"\n Enter record "<<i+1;
				scientist[i].getData();
 			}
			break;
			case 2:
			cout<<"\n Manager`s data.\n";
			for(i = 0; i < n ;i ++)
			{
				cout<<"\n Record "<<i+1;
				manager[i].display();
 			}
			cout<<"\n Scientist`s data.\n";
			for(i = 0; i < n ;i ++)
			{
				cout<<"\n Record "<<i+1;
				scientist[i].display();
 			}
			break;
			case 3:
			cout<<"\n Chemistry department:";
			scientist[0].getscientistName(scientist,n);
			break;
		}
	}while(choice != 4);
	getch();
	return 0;
	
}
/* out put:-

 1:To accept  the details of employees
 2:To display the information
 3:To display all the scientist from Chemistry Department
 4:Exit.
 Enter your choice:1

 Enter how many records:1

 Enter manager`s data.
 Enter record 1
 Enter employee code:101

 Enter employee name:Chirag

 Enter designation :Manager

 Enter scientist`s data.
 Enter record 1
 Enter employee code:103

 Enter employee name:Akshay

 Enter department name:Chemistry

 Enter publication:Tree_LIfe

 1:To accept  the details of employees
 2:To display the information
 3:To display all the scientist from Chemistry Department
 4:Exit.
 Enter your choice:2

 Manager`s data.

 Record 1
 Employee code:101
 Employee name:Chirag
 Managers designation:Manager

 Scientist`s data.

 Record 1
 Employee code:103
 Employee name:Akshay
 Department name:Chemistry
 Publication:Tree_LIfe
 
 1:To accept  the details of employees
 2:To display the information
 3:To display all the scientist from Chemistry Department
 4:Exit.
 Enter your choice:3

 Chemistry department: Akshay
 1:To accept  the details of employees
 2:To display the information
 3:To display all the scientist from Chemistry Department
 4:Exit.
 Enter your choice:4

*/