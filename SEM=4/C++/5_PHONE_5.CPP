/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Create a class phone having data members:
	1. The STD code
	2. The Exchange code
	3. Phone Number
	Ex :- 212-766-8901
	Write a C++ program to accept details from user (max 10) and change input phone number to new phone number using following criteria:
	a)	Add 1 to 1st digit of STD code. (If digit is 9 it becomes 10)
	b)	The exchange code is retained as it is.
	c)	In 3rd  part of structure, 1st two digits should be reversed.
	Ex: I/P : 212-766-890 => O/P : 312-766-980
	Display all changed phone numbers.
 */
#include<conio.h>
#include<string.h>
#include<iostream.h>
class Phone
{
	char stdCode[10];
	char exchangeCode[10];
	char phoneNumber[10];
	public:
	void getData(void);
	void displayData(void);
	void changeStdCode(void);
	void swapDigit(void);
};
main()
{
	Phone phone[10];
	int n,i;
	clrscr();
	cout<<"\n Enter how many records:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\n Enter record "<<i+1;
		phone[i].getData();
	}	 
	for(i=0;i<n;i++)
	{
		cout<<"\n Record "<<i+1;
		phone[i].swapDigit();
		phone[i].changeStdCode();
		phone[i].displayData();
	} 
	getch();
	return 0;
}
void Phone :: getData()
{
	cout<<"\n Enter STD code:";
	cin>>stdCode;
	cout<<"\n Enter exchange code:";
	cin>>exchangeCode;
	cout<<"\n Enter phone number:";
	cin>>phoneNumber;
}
void Phone :: displayData()
{
	cout<<"\n "<<stdCode<<" - "<<exchangeCode<<" - "<<phoneNumber;
}
void Phone :: changeStdCode()
{
	int indexTemp = 0,indexCode = 0;
	if(stdCode[indexCode] == '9')
	{
		char temp[10];
		strcpy(temp,stdCode);
		stdCode[0]='1';
		stdCode[1]='0';
		strcpy(&stdCode[2],&temp[1]);
	}
	else
	{
		stdCode[indexCode]++;
	}
}
void Phone ::swapDigit()
{
	char temp;
	temp =phoneNumber[0];
	phoneNumber[0] = phoneNumber[1];
	phoneNumber[1] = temp;
}
/*Out put:-

 Enter how many records:3

 Enter record 1
 Enter STD code:123

 Enter exchange code:345

 Enter phone number:567

 Enter record 2
 Enter STD code:234

 Enter exchange code:567

 Enter phone number:234

 Enter record 3
 Enter STD code:678

 Enter exchange code:345

 Enter phone number:123

 Record 1
 223 - 345 - 657
 Record 2
 334 - 567 - 324
 Record 3
 778 - 345 - 213

*/


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
