/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q.Create a C++ class Integer that contains one integer data member. Overload following binary operators (+,-,*,/).
*/
#include<conio.h>
#include<iostream.h>
#include<string.h>
class Integer
{
	int num;
	public:
	void getNum()
	{
		cout<<"\n Enter Number:";
		cin>>num;
	}
	void putNum()
	{
		cout<<"\n Number:"<<num;
	}
	void operator+();
	void operator-();
	void operator*();
	void operator/(Integer);
};
void Integer :: operator+()
{
	num=num+10;
}
void Integer :: operator-()
{
	num=num-10;
}
void Integer :: operator*()
{
	num=num*10;
}
void Integer :: operator/(Integer int1)
{
	int1.num = num / 10;
}
main()
{
	Integer integer;
	clrscr();
	integer.getNum();
	+integer;
	cout<<"\n After overloading + operator.";
	integer.putNum();
	-integer;
	cout<<"\n After overloading - operator.";
	integer.putNum();
	*integer;
	cout<<"\n After overloading * operator.";
	integer.putNum();
	/integer;
	cout<<"\n After overloading / operator.";
	integer.putNum();
	getch();
	return 0;
}
/*

 Enter Number:54

 After overloading + operator.
 Number:64
 After overloading - operator.
 Number:54
 After overloading * operator.
 Number:540
 After overloading / operator.
 Number:540


  */





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
