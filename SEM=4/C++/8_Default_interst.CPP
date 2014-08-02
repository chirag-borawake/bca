/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Write a C++ program using class to calculate 
simple interest amount use default value for rate.*/
#include<iostream.h>
#include<conio.h>
class interest
{
	float amt;
	int period;
	float rate;
	public:
	void getdata(float a,int p,float r=11.25)
	{
		amt=a;
		period=p;
		rate=r;
	}
	void display()
	{
		cout<<"\n\nAmount = "<<amt<<" Period = "<<period<<" Rate = "<<rate;
	}
	float value();
};

float interest::value()
{
	float p;
	p=(amt*period*rate)/100;
	return p;
}

void main()
{
	clrscr();
	interest i;
	i.getdata(10000,2,12);
	i.display();
	cout<<"\n\nThe Simple Interest Amount is : ";
	cout<<i.value();

	i.getdata(5000.00,2);
	i.display();
	cout<<"\n\nThe Simple Interest Amount is : ";
	cout<<i.value();
	getch();
}
/*

Amount = 10000 Period = 2 Rate = 12

The Simple Interest Amount is : 2400

Amount = 5000 Period = 2 Rate = 11.25

The Simple Interest Amount is : 1125

*/