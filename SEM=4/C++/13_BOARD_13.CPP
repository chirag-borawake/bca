/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
 Q.  An electricity board charges the following rates to users 
- For first 100 units 	: 40p per unit
- For next 200 units 	: 50p per unit 
- Beyond 300 units   	: 60p per unit

All users are charged a minimum of Rs.150. If the total cost is more than Rs.250.00 then an additional charges of 15% are added.Write a C++ program using class to read the name of users & number of units consumed & print out the charges with names.(Use Array of Objects) 
*/
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
int const MAX = 10;
class Customer
{
	char name[10];
	int units;
	int charge;
	public:
	void getData(); 
	void displayData();
	float calculateCharge();
};
void Customer ::getData()
{
	cout<<"\n Enter name of customer:";
	cin>>name;
	cout<<"\n Enter units consumed:";
	cin>>units;
}
void Customer :: displayData()
{
	cout<<" "<<name;
	cout<<"\t"<<units;
	cout<<"\t"<<charge<<"\n";
}
float Customer ::calculateCharge()
{
	if(units <= 100)
	{
		charge = units * 0.4;
	}
	else if(units <= 200)
	{
		charge = units *0.5;
	}
	else
	{
		charge = units *0.6;
	}
	if(charge > 250)
	{
		charge = charge +(charge *15)/100;
	}
	if(charge < 150)
	{
		charge = 150;
	}
	return charge;
}
main()
{
	Customer customers[MAX];
	int i,n;
	clrscr();
	cout<<"\n Enter how many records:"; 
	cin>>n;
	for(i = 0;i < n;i ++)
	{
		cout<<"\n Enter record "<<i+1;
		customers[i].getData();
	}
	for(i = 0;i < n;i ++)
	{
		customers[i].calculateCharge();
	}
	cout<<"\n Customer information.";
	cout<<"\n Name\tUnits\tCharge\n\n";
	for(i = 0;i < n;i ++)
	{
 		customers[i].displayData();
	}
	getch();
	return 0;
}
/*
out Put :-

 Enter how many records:4

 Enter record 1
 Enter name of customer:Chiarg

 Enter units consumed:421

 Enter record 2
 Enter name of customer:lokesh

 Enter units consumed:129

 Enter record 3
 Enter name of customer:Rohan

 Enter units consumed:423

 Enter record 4
 Enter name of customer:Akshay

 Enter units consumed:532
 
 Customer information.
 Name     Units  Charge

 Chiarg   421    289
 lokesh   129    150
 Rohan    423    290
 Akshay   532    366

*/
