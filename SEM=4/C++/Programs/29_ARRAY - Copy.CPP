/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Create a C++ class Array which contains 
- int *ptr
- int n
     Write a menu driven program :
- to Accept an array from user
- to display it.
- to add two arrays using operator overloading.
- to subtract two arrays using operator overloading.  
*/ 
#include<conio.h>
#include<iostream.h>
class Array
{
	int *ptr;
	int n;
	public:
	void getArray();
	void putArray();
	friend Array operator+(Array,Array);
	friend Array operator-(Array,Array);
};

void Array ::getArray()
{
	cout<<"\n Enter how many elements in array:";
	cin>>n;
	for( int i = 0; i < n ;i ++)
	{
		cout<<"\n Enter element "<<i+1<<":";
		cin>>*(ptr+i);
	}
}
void Array :: putArray()
{
	cout<<"\n Array elements:";
	for( int  i = 0; i < n ;i ++)
	{
		cout<<" "<<*(ptr+i);
	}
}
Array operator+(Array a1,Array a2)
{
	Array temp;
	for( int  i = 0; i < 5 ;i ++)
	{
		temp.*(ptr+i) = a1.*(ptr+i) + a2.*(ptr+i);
	}
	return temp;
}
Array operator-(Array a1,Array a2)
{
	Array temp;
	for( int  i = 0; i < 5 ;i ++)
	{
		temp.*(ptr+i) = a1.*(ptr+i) - a2.*(ptr+i);
	}
	return temp;
}
int getChoice()
{
	int choice;
	cout<<"\n 1:To Accept an array from user";
	cout<<"\n 2:To display it.";
	cout<<"\n 3:To add two arrays using operator overloading.";
	cout<<"\n 4:To subtract two arrays using operator overloading.";
	cout<<"\n 5:Exit";
	cout<<"\n Enter your choice:";
	cin>>choice;
	return choice;
}
main()
{
	Array array[10],A1,A2,A3;
	int choice;
	clrscr();
	do
	{
		choice = getChoice();
		switch(choice)
		{
			case 1:
			A1.getArray();
			break;
			
			case 2:
			A1.putArray();
			break;
			
			case 3:
			cout<<"\n Enter First array.";
			A1.getArray();
			cout<<"\n Enter second array.";
			A2.getArray();
			cout<<"\n First array.";
			A1.putArray();
			cout<<"\n Second array.";
			A2.putArray();
		    A3=A1+A2;
			cout<<"\n Addition of array.";
			A3.putArray();
			break;

			case 4:
			cout<<"\n Enter First array.";
			A1.getArray();
			cout<<"\n Enter second array.";
			A2.getArray();
			cout<<"\n First array.";
			A1.putArray();
			cout<<"\n Second array.";
			A2.putArray();
		    A3= A1 - A2;
			cout<<"\n Subtraction of array.";
			A3.putArray();
			break;
		}
	}while(choice != 5);
	getch();
	return 0;
}