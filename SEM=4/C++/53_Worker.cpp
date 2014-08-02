

/*Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Write class declarations and member function definitions for a
C++ base class to represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of n employees and calculate the salary.
2. Display the details of n employees.
3. Search a given Employee.
*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
class Employee
{
	protected :
	int ecode;
	char name[20];
	public:
	void getEmpData()
	{
		cout<<"\nEnter employee code:";  
		cin>>ecode;
		cout<<"\nEnter employee name:";
		cin>>name;
	}
	void putEmpData()
	{
		cout<<"\nE_code:"<<ecode;
		cout<<"\nEname:"<<name;
	}
	int search(int code)
	{
		if(ecode==code)
			return 1;
		else
			return 0;
	}
};
class Fulltime:public Employee
{
	protected:
	int d_rate;
	int no_of_days;
	int sal;
	public:
	void getFullTime()
	{
		cout<<"\nEnter daily rate:";
		cin>>d_rate;
		cout<<"\nEnter number of days:";
		cin>>no_of_days;
		sal=d_rate*no_of_days;
	}
	void putFullTime()
	{
		putEmpData();
		cout<<"\nDaily rate :"<<d_rate;
		cout<<"\nNumber of days :"<<no_of_days;
		cout<<"\nSalary :"<<sal;
	}
	friend int searchFullTime (Fulltime *,int, int);
}; 

class Parttime:public Employee
{
	protected:
	int hrs;
	int hr_rate;
	int sal;
	public:
	void getPartTime()
	{
		cout<<"Enter hours worked:"<<"\n";
		cin>>hrs;
		cout<<"Enter hrs rate:"<<"\n";
		cin>>hr_rate;
		sal=hrs*hr_rate;
	}
	void putPartTime()
	{
		putEmpData();
		cout<<"\nHours worked :"<<hrs;
		cout<<"\nHours rate :"<<hr_rate;
		cout<<"\nSalary:"<<sal;
	}
};
int searchFullTime(Fulltime *f,int n1, int a)
{
	for(int i=0;i<n1;i++)
		if(f[i].ecode==a)
			return 1;
		return 0;
}
int menu()
{
	int choice;
	cout<<"\n1.Accept details of n employees.";
	cout<<"\n2.Display details of n employees.";
	cout<<"\n3.search given employee.";
	cout<<"\n4.Exit.";
	cout<<"\nEnter your choice:";
	cin>>choice;
	return choice;
}
void main()
{
	clrscr();
	Fulltime f[10];
	Parttime p[10];
	int choice,n1,n2,flag;
	while(1)
	{
		choice=menu();
		int code;
		switch(choice)
		{
			case 1:cout<<"\nEnter how many full time employees :";
				   cin>>n1;
				   for(int i=0;i<n1;i++)
				   {
						f[i].getEmpData();
						f[i].getFullTime();
				   }
				   cout<<"\nEnter how many part time employees :";
				   cin>>n2;
				   for(i=0;i<n2;i++)
				   {
						p[i].getEmpData();
						p[i].getPartTime();
				   }
				   break;

			 case 2:
				   cout<<"\nInformation of full time employees :";
				   for(i=0;i<n1;i++)
				   {
						f[i].putFullTime();
				   }
				   cout<<"\nInformation of part time employees :";
				   for(i=0;i<n2;i++)
				   {
						p[i].putPartTime();
				   }
				   break;
			  case 3:
				char c;
				cout<<"Enter Employee code to be searched";
				cin>>code;
				for(i=0,flag=0;i<n1;i++)
				{
					if(f[i].search(code))
					{
						f[i].putFullTime();
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					for(i=0;i<n2;i++)
					{
						if(p[i].search(code))
						{
							p[i].putPartTime();
							flag=1;
							break;
						}
					}
				}
				 if(flag==0)
				{
					cout<<"Employee not found";
				}
				 break;
			  case 4:
				 getch();
				 exit(0);
		}
	}
}
/*
OUTPUT:=
1.Accept details of n employees
2.Display details of n employees
3.search given employee
4.Exit
Enter your choice: 1

Enter how many full time employees :2

Enter employee code:101
Enter employee name:Chirag
Enter daily rate:100
Enter number of days:30

Enter employee code:102
Enter employee name:Lokesh
Enter daily rate:150
Enter number of days:31

1.Accept details of n employees
2.Display details of n employees
3.search given employee
4.Exit
Enter your choice:2

Information of full time employees :
Employee code:101
Employee name:Chirag
Daily rate :100
Number of days :30
Salary :3000
Employee code:102
Employee name:Lokesh
Daily rate :150
Number of days :31
Salary :4650
Information of part time employees :
Employee code:101
Employee Ename:Chirag
Hours worked :36
Hours rate :50
Salary:1800
       
1.Accept details of n employees
2.Display details of n employees
3.search given employee
4.Exit
Enter your choice:3
Enter Employee code to be searched:101
Employee code:101
Employee name:Chirag
Daily rate :100
Number of days :30
Salary :3000
*/