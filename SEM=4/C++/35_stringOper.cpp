/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q.Create a class string which contains a character pointer. Write a C++ program to overload following operators:
1.	<   to compare two strings
2.	!= 	to check equality of two Strings.
(Use new operator to allocate memory)
*/
#include<conio.h>
#include<iostream.h>
#include<string.h>
class String
{
	char *ptr;
	public:
	String()
	{
		ptr=new char[10];
	}
	void getString()
	{
		cin>>(ptr+0);
	}
	void operator<(String);
	void operator!=(String);
};
void String:: operator<(String s1)
{
	if(strcmp(s1.ptr,ptr) == 0 )
	{
		cout<<"\n Strings are equals.";
	}
	else if(strcmp(s1.ptr,ptr) < 0)
	{
		cout<<"\n String 1:"<<s1.ptr<<" is less then string 2:"<<ptr;
	}
	else
	{
		cout<<"\n String 1:"<<s1.ptr<<" is greater then string 2:"<<ptr;
	}
}
void String:: operator!=(String s1)
{
	if(s1.ptr==ptr)
	{
		cout<<"\n String are equals";
	}
	else
	{
		cout<<"\n String are not equals";
	}
}
int getChoice()
{
	int choice;
	cout<<"\n 1:<  to compare two strings.";
	cout<<"\n 2:!= to check equality of two Strings.";
	cout<<"\n 3:Exit.";
	cout<<"\n Enter your choice:";
	cin>>choice;
	return choice;
}

main()
{
	String S1,S2;
	int choice;
	clrscr();
	cout<<"\n Enter first string:";
	S1.getString();
	cout<<"\n Enter second string:";
	S2.getString();
	do
	{
		choice = getChoice();
		switch(choice)
		{
			case 1:S1 < S2;
			break;

			case 2:S1 != S2;
			break;
		}
	}while(choice!=3);
	getch();
	return 0;
}
/* Out Put:-

 Enter first string:Chirag

 Enter second string:Borawake

 1:<  to compare two strings.
 2:!= to check equality of two Strings.
 3:Exit.
 Enter your choice:1

 String 1:Borawake is less then string 2:Chirag
 1:<  to compare two strings.
 2:!= to check equality of two Strings.
 3:Exit.
 Enter your choice:2

 String are not equals
 1:<  to compare two strings.
 2:!= to check equality of two Strings.
 3:Exit.
 Enter your choice:3

*/
