/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Consider the following C++ class 
Class mystring 
{
	char str [30];
	int len;
	Public:
	// member functions
};
 overload operator “= =” to compare two strings.
*/
#include<conio.h>
#include<iostream.h>
#include<string.h>
class Mystring
{
	char str [30];
	int len;
	public:
	void getString()
	{
		cout<<"\n Enter string:";
		cin>>str;
	}
	void displayString()
	{
		cout<<" "<<str;
	}
	friend void operator==(Mystring,Mystring);
 };
 void operator==(Mystring S1,Mystring S2)
 {
	if(strcmp(S1.str,S2.str) == 0 )
	{
		cout<<"\n Strings are equals.";
	}
	else if(strcmp(S1.str,S2.str) < 0)
	{
		cout<<"\n String 1:"<<S1.str<<" is less then string 2:"<<S2.str;
	}
	else
	{
		cout<<"\n String 1:"<<S1.str<<" is greater then string 2:"<<S2.str;
	}
 }
 main()
 {
	Mystring S1,S2;
	S1.getString();
	S2.getString();
	S1==S2;
	getch();
	return 0;
 }
 /*
 Out Put:-

 Enter string:Chirag

 Enter string:Chirag

 Strings are equals.

 Out Put 2:-

 Enter string:Chirag

 Enter string:Borawake

 String 1:Chirag is greater then string 2:Borawake

 */












                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
