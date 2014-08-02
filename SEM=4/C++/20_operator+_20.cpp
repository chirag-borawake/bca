/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q.Consider the following C++ class
 Class mystring
{
	char str [30];
	int len;
	Public:
   // member functions
 };
 Overload operator + to concatenate two strings such as string1+string2=string3.
*/
#include<conio.h>
#include<iostream.h>
#include<string.h>
class Mystring
{
	char str [30]; 
	public:
 	void getString()
	{
		cout<<"\n Enter string:";
		cin>>str;
	}
	void display()
	{
		cout<<""<<str;
	}
	friend Mystring operator+(Mystring,Mystring);
 };
  Mystring operator+(Mystring s1,Mystring s2)
 {
	Mystring temp;
	strcpy(temp.str,s1.str);
	strcat(temp.str,s2.str);
	return temp;
 }
main()
{
	Mystring S1,S2,S3;
	clrscr();
	S1.getString();
	S2.getString();
	S3=S1+S2;
	cout<<"\n First string:";
	S1.display();
	cout<<"\n Second string:";
	S2.display();
	cout<<"\n Concatenated string:";	
	S3.display();
	getch();
	return 0;
}
/* Out Put:-
 Enter string:Chirag 
 Enter string:Borawake 
 First string:Chirag
 Second string:Borawake
 Concatenated string:ChiragBorawake
 */ 