#include<iostream.h>
int main()
{
	float x,y,sum,average;
	void   clrscr();
	cout<<"\n Enter first number:";
	cin>>x;
	cout<<"\n Enter second number:";
	cin>>y;
	sum = x+y;
	average = sum/2;
	cout<<"\n Sum ="<<sum;
	cout<<"\n Aevrage ="<<average;
	return 0;
}