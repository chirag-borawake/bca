/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
 Q. Consider the C++ class 
	 Class mystring 
	{
		char str [30];
		int length;
		Public:
	   // member function 
	};
    Overload the function called “check” for the class to perform the following operations.
i)	Check if a specific character is present in str. Returns position if found, -1 if not.
ii)	Compares the length of two mystring objects and returns 1 if they are equal, 0 if not.  
*/
#include<conio.h>
#include<iostream.h>
#include<string.h>
class mystring
{
	char str[30];
	int length;
	public :
 	void getData(void);
	int check(char);
	int check(mystring);
};
main()
{
	mystring m1,m2;
	char character;
	clrscr();
	m1.getData();
	cout<<"\n Enter which character want to search:";
	cin>>character;
	cout<<"\n Positon of charcter:"<<m1.check(character);
	m2.getData();
	cout<<"\n If value = 1 string are equal and if value = 0 string are not equal.\n Value:"<<m1.check(m2);
	getch();
	return 0;
}
int mystring :: check(char character)
{
	int i = 0;
	while(str[i] != NULL)
	{
		if(str[i] == character)
		{
			return i;
		}
		i++;
	}
	return -1;
}   
void mystring :: getData(void)
{
	cout<<"\n Enter string:";
	cin>>str;
}
int mystring :: check(mystring m)
{
	if(strlen(str)==strlen(m.str))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
/* out put:-


 Enter string:Chirag

 Enter which character want to search:r

 Positon of charcter:3
 Enter string:Borawake

 If value = 1 string are equal and if value = 0 string are not equal.
 Value:0

*/
