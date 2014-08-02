/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q.		
26.Consider the following C++ class 
	 Class Person 
	{
		char Name [20];
		char Addr [40];
		float Salary;
		int Property;	//in sq. foot area
		float taxAmount;
		Public:
			// member functions 
	 };

	Calculate tax amount by checking salary and the property of the person
 		For salary <5000    			 tax rate=0
		For salary >=5000||<=10000       tax rate= 14% of salary.
		For salary >=10000               tax rate =16% of salary.

	In this tax amount add following amt depending on the size of area in sq.foot 
		For 1000 sq. foot area 			amt=0.
		For >1000|| < 5000 sq. foot area 	amt= 1000
		For >5000||<= 10000 sq. foot area 	amt=3000.
 */
#include<conio.h>
#include<iostream.h> 
class person
{
	char name [20];
	char addr [30];
	float salary;
	long property;	//in sq. foot area
	float taxAmount;
	public:
	void getData(void);
	void displayData(void);
	float calculatetaxAmount(void);
 };
 main()
 {
	person p;
	clrscr();
	p.getData();
	p.displayData();
	p.calculatetaxAmount();
	cout<<"\n Depending on this data tax:"<<p.calculatetaxAmount();
	getch();
	return 0;
 }
 void person :: getData()
 {
	cout<<"\n Enter name:";
	cin>>name;
	cout<<"\n Enter address:";
	cin>>addr;
	cout<<"\n Enter salary:";
	cin>>salary;
	cout<<"\n Enter property[in sq. foot area]:";
	cin>>property;
 }
 void person :: displayData()
 {
	cout<<"\n Name:"<<name;
	cout<<"\n Address:"<<addr;
	cout<<"\n Salary:"<<salary;
	cout<<"\n Property[in sq. foot area]:"<<property;
 }
 float person :: calculatetaxAmount()
 {
	float taxAmount = 0;
	if(salary < 5000)
	{
		taxAmount = 0;
	}
	else if(salary >= 5000 || salary < 10000)
	{
		taxAmount = (salary * 14)/100;
	}
	else if(salary >= 10000)
	{
		taxAmount = (salary * 16)/100;
	}
	if(property < 1000)
	{
		taxAmount = taxAmount +0;
	}
	else if(property >=1000 || property <5000)
	{
		taxAmount = taxAmount + 1000;
	}
	else if(property >=5000 || property <= 10000 )
	{
		taxAmount = taxAmount +3000;
	}
	return taxAmount;
 }
 /*
 Out put :-

 Enter name:Chirag                                                              
 
 Enter address:Pune\Sinhgad_road 
 
 Enter salary:30000                                                             
 
 Enter property[in sq. foot area]:23929 
 
 Name:Chirag 
 Address:Pune\Sinhgad_road
 Salary:30000
 Property[in sq. foot area]:23929
 Depending on this data tax:5200
 */