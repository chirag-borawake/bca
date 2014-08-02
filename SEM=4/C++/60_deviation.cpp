/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
 Q. Write a necessary C++ class to calculate variance & standard deviation of n numbers.
	Variance = 1/N ? (Xi-A.M.)2            for all i = 1 to N
	S.D. = vvariance
	Where A.M. (Arithmetic Mean) = 1/N ? Xi	        for all i = 1 to N
*/
#include<conio.h>
#include<math.h>
#include<iostream.h>
class Number
{
	int a[20],n;
	float am,var, sd;
	public:
	void getData();
	void calculate();
	void display();
};
void Number::getData()
{
	cout<<"\n How many numbers you want to enter:"	;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\n Enter number "<<i+1<<":";
		cin>>a[i];
	}
}
void Number::calculate()
{
	float sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	am=sum/n;
	for(i=0,sum=0;i<n;i++)
	{
		sum+= (a[i]-am)*(a[i]-am);
	}
	var = sum / n;
	sd=sqrt(var);
}
void Number::display()
{
	cout<<"\n Variance = "<<var;
	cout<<"\n Standard Deviation= "<<sd;
}
main()
{
	clrscr();
	Number number;
	number.getData();
	number.calculate();
	number.display();
	getch();
	return 0;
} 

/*out put:-

 How many numbers you want to enter:5

 Enter number 1:4

 Enter number 2:5

 Enter number 3:7

 Enter number 4:8

 Enter number 5:8

 Variance = 2.64
 Standard Deviation= 1.624808

/*



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
