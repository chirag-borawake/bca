/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
 Q.Write a C++ program to define function power to raise a number m to a power n ,the function takes a double value for m and integer value for n and return the result correctly. use a default value of 2 for n, to calculate squares when this argument is omitted.
*/
#include<conio.h>
#include<iostream.h>
#include<math.h>
double findPower(double m, int n = 2)
{
	return pow(m,n);
}
main()
{
	int n;
	double m;
	clrscr();
	cout<<"\n Enter base value:";
	cin>>m;
	cout<<"\n Enter power:";
	cin>>n;
	cout<<"\n Result: "<<m<<" ^ "<<n<<" = "<<findPower(m,n);
	getch();
	return 0;
}
/* out put:-

 Enter base value:4

 Enter power:5

 Result: 4 ^ 5 = 1024

*/