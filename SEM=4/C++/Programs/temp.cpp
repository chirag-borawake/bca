

/* Write class declarations and member function definitions for a
C++ base class to represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of n employees and calculate the salary.
2. Display the details of n employees.
3. Search a given Employee.
(LAB27B)*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
class Employee
{
	protected :
	int ecode;
	char name[20];
	public:
	void get_e()
	{
		cout<<"\nEnter E_code and name:";
		cin>>ecode>>name;
	}
	void put_e()
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
};//class Employee
class Fulltime:public Employee
{
	protected:
	int d_rate;
	int no_of_days;
	int sal;
	public:
	void get_ftime()
	{
		cout<<"\nEnter daily rate:";
		cin>>d_rate;
		cout<<"\nEnter number of days:";
		cin>>no_of_days;
		sal=d_rate*no_of_days;
	}
	void put_ftime()
	{
		put_e();
		cout<<"\nDaily rate :"<<d_rate;
		cout<<"\nNumber of days :"<<no_of_days;
		cout<<"\nSalary :"<<sal;
	}
	friend int searchf (Fulltime *,int, int);
};//class Fulltime
class Parttime:public Employee
{
	protected:
	int hrs;
	int hr_rate;
	int sal;
	public:
	void get_ptime()
	{
		cout<<"Enter hours worked:"<<"\n";
		cin>>hrs;
		cout<<"Enter hrs rate:"<<"\n";
		cin>>hr_rate;
		sal=hrs*hr_rate;
	}
	void put_ptime()
	{
		put_e();
		cout<<"\nHours worked :"<<hrs;
		cout<<"\nHours rate :"<<hr_rate;
		cout<<"\nSalary:"<<sal;
	}
};//class Parttime
int searchf(Fulltime *f,int n1, int a)
{
	for(int i=0;i<n1;i++)
	if(f[i].ecode==a)
		return 1;
	return 0;
}
int menu()
{
	int choice;
	cout<<"\n\tMain Menu\n\n";
	cout<<"\n1.Accept details of n employees";
	cout<<"\n2.Display details of n employees";
	cout<<"\n3.search given employee";
	cout<<"\n4.Exit";
	cout<<"\nEnter ur choice...\t";
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
						f[i].get_e();
						f[i].get_ftime();
				   }
				   cout<<"\nEnter how many part time employees :";
				   cin>>n2;
				   for(i=0;i<n2;i++)
				   {
						p[i].get_e();
						p[i].get_ptime();
				   }
				   break;

			 case 2:
				   cout<<"\nInformation of full time employees :";
				   for(i=0;i<n1;i++)
				   {
						f[i].put_ftime();
				   }
				   cout<<"\nInformation of part time employees :";
				   for(i=0;i<n2;i++)
				   {
						p[i].put_ptime();
				   }
				   break;
			  case 3:char c;
				cout<<"Enter Employee code to be searched";
				cin>>code;
				// search in full-time
				for(i=0,flag=0;i<n1;i++)
				{
					if(f[i].search(code))
					{
						cout<<"employee found...Full time employee...";
						f[i].put_ftime();
						flag=1;
						break;
					}
				}
				// not found in full-time list
				// now search in part-time list
				if(flag==0)
				{
					for(i=0;i<n2;i++)
					{
						if(p[i].search(code))
						{
							cout<<"employee found...part time employee...";
							p[i].put_ptime();
							flag=1;
							break;
						}//if
					}//for
				}//if
				 if(flag==0)
					cout<<"Employee not found";
				 break;
			  case 4:cout<<"\nProgram ending...";
				 getch();
				 exit(0);
		}//switch
	}//while
}//main
