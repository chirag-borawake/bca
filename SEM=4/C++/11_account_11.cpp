/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q.Define a C++ class to represent a bank account which includes following members :
Data members –
1)	Name
2)	Account number 
3)	Type of account 
4)	Balance 
Member functions –
a.  To assign initial value
b.	To deposit an account 
c.	To withdraw an account 
d.	To display name, account number & balance.
 */
#include<conio.h>
#include<iostream.h>
class bankAccount
{
	int accountNo;
	char name[10];
	char accountType[10];
	int bal;
	public:
	void depositAmount(void);
	void displayData(void);
	void withdrawAmount(void) ;
 	void getData(void);
	void assignValue()
	{
		bal = 5000;
	}
};
main()
{
	bankAccount account;
	clrscr();
	account.assignValue();
	account.getData();
	account.displayData();
	account.depositAmount();
	account.withdrawAmount();
	getch();
	return 0;
}
void bankAccount ::getData()
{
	int tempBal;
	cout<<"\n Enter name:";
	cin>>name;
	cout<<"\n Enter account no:";
	cin>>accountNo;
	cout<<"\n Enter account type:";
	cin>>accountType;
	cout<<"\n Enter balance:";
	cin>>tempBal;
	bal = bal + tempBal;
}
void bankAccount :: displayData()
{
	cout<<"\n Name:"<<name;
	cout<<"\n Account no:"<<accountNo;
	cout<<"\n Account type:"<<accountType;
	cout<<"\n Balance:"<<bal;
}
void bankAccount :: depositAmount()
{
	int tempBal;
	cout<<"\n Enter amount to be deposit:";
	cin>>tempBal;
	bal = bal + tempBal;
	cout<<"\n Current balance after deposit:"<<bal;

}
void  bankAccount :: withdrawAmount()
{
	int tempBal;
	cout<<"\n Enter amount to be withdraw:";
	cin>>tempBal;
	bal = bal - tempBal;
	cout<<"\n Current balance after withdraw:"<<bal;
}
/* Out put:-

 Enter name:Chirag                                                              
 
 Enter account no:100                                                           
 
 Enter account type:Currrent                                                    
 
 Enter balance:500                                                              
 
 Name:Chirag                                                                    
 Account no:100                                                                 
 Account type:Currrent
 Balance:5500
 Enter amount to be deposit:500

 Current balance after deposit:6000
 Enter amount to be withdraw:500

 Current balance after withdraw:5500

*/
 