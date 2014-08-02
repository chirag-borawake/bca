

/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q.In a bank, different customers having saving account.
Some customers may have taken a loan from the bank.
So bank always maintains information about bank depositors and borrowers.
Design a Base class Customer (name, phone-number).
Derive a class Depositor(accno,  balance) from Customer.
Again derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of n
customers.
*/
#include<iostream.h>
#include<conio.h>
class Customer
{
	char name[20];
	long int ph_no;
	public:
	void getCustomerData()
	{
		cout<<"\nEnter name:";
		cin>>name;
		cout<<"\nEnter phone number:";
		cin>>ph_no;
	}
	void putCustomerData()
	{
		cout<<"\nName:"<<name;
		cout<<"\nPhone number:"<<ph_no;
	}
};
class Depositor:public Customer
{
	long int ac_no;
	float bal;
	public:
	void getAccountData()
	{
		cout<<"\nEnter account number:";
		cin>>ac_no;
		cout<<"\nEnter balance:";
		cin>>bal;
	}
	void putAccountData()
	{
		cout<<"\nAccount number:"<<ac_no;
		cout<<"\nBalance:"<<bal;
	}
};
class Borrower:public Depositor
 {
	long int loanno;
	float loanamt;
	public:
	void getBorrowerData()
	{
		cout<<"\nEnter loan number:";
		cin>>loanno;
		cout<<"\nEnter loan amount:";
		cin>>loanamt;
	}
	void putBorrowerData()
	{
		cout<<"\nLoan number:"<<loanno;
		cout<<"\nLoan amount:"<<loanamt;
	}
};
void main()
{
	clrscr();
	int n;
	Borrower b[20];
	cout<<"\nHow many customers:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\n Enter record "<<i+1;
		b[i].getCustomerData();
		b[i].getAccountData();
		b[i].getBorrowerData();
	}
	for(i=0;i<n;i++)
	{
		cout<<"\n Record "<<i+1;
		b[i].putCustomerData();
		b[i].putAccountData();
		b[i].putBorrowerData();
	}
	getch();
}
/*
Out Put :

How many customers:2

 Enter record 1
Enter name:Chirag

Enter phone number:860046767

Enter account number:144

Enter balance:40000

Enter loan number:101

Enter loan amount:100000

 Enter record 2
Enter name:Lokesh

Enter phone number:9864467856

Enter account number:543

Enter balance:56000

Enter loan number:2131

Enter loan amount:200000

Record 1

Name:Chirag
Phone number:860046767
Account number:144
Balance:40000
Loan number:101
Loan amount:100000
Record 2
Name:Lokesh
Phone number:1274533264
Account number:543
Balance:56000
Loan number:2131
Loan amount:200000
*/
