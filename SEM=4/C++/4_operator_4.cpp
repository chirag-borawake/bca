/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Create  a C++  class Date which contains: 
		- day
		- month 
		- year
   Overload operators >> and << to accept and display date object.
 */
#include<conio.h>
#include<iostream.h>
class Date
{
	int day;
	int month;
	int year;
	public:
	Date(){;};
	friend void operator>>(istream &,Date &);
	friend void operator<<(ostream &,Date &);
};
void operator>>(istream &in,Date &d)
{
	cout<<"\n Enter day:";
	in>>d.day;
	cout<<"\n Enter month:";
	in>>d.month;
	cout<<"\n Enter year:";
	in>>d.year;
}
void operator<<(ostream &out,Date &d)
{
	out<<"\n Day:"<<d.day;
	out<<"\n Month:"<<d.month;
	out<<"\n Year:"<<d.year;
}
main()
{
	Date d;
	clrscr();
	cin>>d;
	cout<<d;
	getch();
	return 0;
}
/*

 Enter day:26

 Enter month:2

 Enter year:2014

 Day:26
 Month:2
 Year:2014
 */
