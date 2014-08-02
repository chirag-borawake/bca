/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Create a C++ class FDAccount containing members as:
-	Fdno
-	Name
-	Amt
-	Interest rate
-	Maturity amt
-	Number of months
	Use parameterized constructor to set appropriate details, where interest rate should be default argument. Calculate maturity amt using interest rate and display all the details.
*/
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
int const MAX = 10;
class FDAccount
{
	int fdNo;
	char *name;
	int amt;
	int interestRate;
	int maturityAmt;
	int no_of_months;
	public:
	FDAccount()
	{
		name = new char[10];
	}
	void displayData();
	FDAccount(int ,char *,int,int,int);
	float getMaturityAmt();
};
FDAccount::FDAccount(int fn,char *n ,int a,int m,int r = 8)
{
	fdNo = fn;
	name = n;
	amt = a;
	no_of_months = m;
	interestRate = r;
}
float FDAccount ::getMaturityAmt()
{
	maturityAmt = amt + (amt * interestRate/100 * no_of_months/12);
	return maturityAmt;
}
void getData()
{
	char name[20];
	int fdNo,amt,interestRate,no_of_months;
	cout<<"\n Enter name:";
	cin>>name;
	cout<<"\n Enter fd number:";
	cin>>fdNo;
	cout<<"\n Enter amount:";
	cin>>amt;
	cout<<"\n Entre number of months:";
	cin>>no_of_months;
	FDAccount account1(fdNo,name,amt,no_of_months,interestRate);
	account1.getMaturityAmt();
	account1.displayData();

}

void FDAccount::displayData()
{
	cout<<"\n Name:"<<name;
	cout<<"\n fd number:"<<fdNo;
	cout<<"\n Amount:"<<amt;
	cout<<"\n Number of months:"<<no_of_months;
	cout<<"\n Interest rate:"<<interestRate;
	cout<<"\n Maturity amount :"<<maturityAmt;
}
main()
{
	FDAccount account;
	void getData();
	clrscr();
	getData();
	getch();
	return 0;
}
/*
Out Put:-

 Enter name:Chirag

 Enter fd number:100

 Enter amount:200000

 Entre number of months:12

 Name:Chirag
 fd number:100
 Amount:3392
 Number of months:12
 Interest rate:12803
 Maturity amount :3167
 */