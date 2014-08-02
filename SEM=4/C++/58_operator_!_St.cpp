/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Consider the following C++ class
Class String
{
		char *ptr;
		int length ;
	public:
		//member functions.
};
Overload the unary  operator! to check whether a string is empty or
 not. Write other necessary functions, constructor and destructor.

*/
#include<conio.h>
#include<iostream.h>
class String
{
	char *ptr;
	int length ;
	public:
	String()
	{
		ptr=new char[10];
	}
	~String()
	{
		delete ptr;
	}
	void getString()
	{
		cin>>(ptr+0);
	}
	void operator!();
};
void String :: operator!()
{	
	if(*ptr == NULL)
	{
		cout<<"\n String is empty";
	}
	else
	{
		cout<<"\n String is not empty.";
	}
}
main()
{
	String S1;
	int choice;
	clrscr();
	cout<<"\n Enter string:";
	S1.getString();
	!S1;
	getch();
	return 0;
}
/*out put:-

 Enter string:Chirag

 String is not empty.

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
