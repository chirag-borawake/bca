/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q.41. Create a C++ class currency containing rupees and paise as data members. Write necessary member functions using operator overloading for the following:
1.	currency (long int rup=0,int paise=0)
2.	currency & operator  += (currency &)     (to add one currency to another)
3.	currency & operator  - = (currency &)     (to subtract one currency from another)
Accept Rupee & paise from user and display it.

*/ 
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class Currency
{
	long int rupees;
	int paise;
	public:
	void getData()
	{
		cout<<"\n Enter how many rupees:";
		cin>>rupees;
		cout<<"\n Enter how many paise:";
		cin>>paise;
	}
	void displayData()
	{
		cout<<"\n Rupees:"<<rupees;
		cout<<"\n Paise:"<<paise;
	}
	Currency()
	{
		long int rupees = 0;
		int paise = 0;
	}
	Currency operator  +=(Currency);     
	Currency operator  -=(Currency);    
};
Currency  Currency::  operator +=(Currency C1)
{
	Currency temp;
	temp.rupees =  rupees + C1.rupees;
	temp.paise =   paise + C1. paise;
	return temp;
}
Currency Currency :: operator -=(Currency C1)
{
	Currency temp;
	temp.rupees =   rupees -C1.rupees;
	temp.paise =   paise -C1.paise;
	return temp;
}
main()
{
	Currency C1,C2,C3;
	clrscr();
	cout<<"\n Enter first Data.";
	C1.getData();
	cout<<"\n First data.";
	C1.displayData();
	cout<<"\n Enter second Data.";
	C2.getData();
	cout<<"\n Second data.";
	C2.displayData();
	cout<<"\n Addition of first and second.";
	C3 = C1 += C2;
	C3.displayData();
	cout<<"\n Subtraction of first and second.";
	C3 = C1 -= C2;
	C3.displayData();
	getch();
	return 0;
}
/* Ot Put:-

 Enter first Data.
 Enter how many rupees:100

 Enter how many paise:48

 First data.
 Rupees:100
 Paise:48
 Enter second Data.
 Enter how many rupees:40

 Enter how many paise:30

 Second data.
 Rupees:40
 Paise:30
 Addition of first and second.
 Rupees:140
 Paise:78
 Subtraction of first and second.
 Rupees:60
 Paise:18
*/














                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                



