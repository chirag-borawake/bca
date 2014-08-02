/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q.Create a class Time which contains:
		- hours
		- minutes	
		- second
    Write a C++ program using operator overloading for the following: 
1.  ==  to check whether two Times are same or not.
2. >>  to accept the  time.
3. <<  to display the time.
	
*/ 
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class Time
{
	int hours;
	int minutes;
	int seconds;
	public:
	void operator==(Time);
	friend void operator>>(istream &,Time &);
	friend void  operator<<(ostream &,Time &);
};
void Time :: operator==(Time T1)
{
	if(T1.hours == hours && T1.minutes == minutes && T1.seconds == seconds)
	{
		cout<<"\n Two times are same.";
	}
	else
	{
		cout<<"\n Two times are not same.";
	}
}
void operator>>(istream &dupCin,Time &t1)
{
	cout<<"\n Enter hours:";
	dupCin>>t1.hours;
	cout<<"\n Enter minutes:";
	dupCin>>t1.minutes;
	cout<<"\n Enter seconds:";
	dupCin>>t1.seconds;
}
void operator<<(ostream &dupCout,Time &t1)
{
	dupCout<<" "<<t1.hours<<":"<<t1.minutes<<":"<<t1.seconds;
}
main()
{
	Time T1,T2;
	clrscr();
	cout<<"\n Enter first time.";
	cin>>T1;
	cout<<"\n First Time:";
	cout<<T1;
	cout<<"\n Enter second time.";
	cin>>T2;
	cout<<"\n Second Time:";
	cout<<T2;
	T1 == T2;
	getch();
	return 0;
}
/* 
out put 1:-

 Enter first time.
 Enter hours:10

 Enter minutes:30

 Enter seconds:45

 First Time: 10:30:44
 Enter second time.
 Enter hours:10

 Enter minutes:30

 Enter seconds:45

 Second Time: 10:30:45
 Two times are same.

 Out put 2:-

 Enter first time.
 Enter hours:11

 Enter minutes:39

 Enter seconds:43

 First Time: 11:39:43
 Enter second time.
 Enter hours:9

 Enter minutes:34

 Enter seconds:54

 Second Time: 9:34:54
 Two times are not same.
*/