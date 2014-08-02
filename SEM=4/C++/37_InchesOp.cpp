/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
 Q. 37. Create a class Distance containing Feet and Inches as data members. Write a C++ program to read distance from user, store it in the file and to read it from the file and display it to the user.
Use operator overloading for the following:
1.	<< 	to  write distance object  in inches format to a file
2.	 >> 	to read inches from File.
*/
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class Distance
{
	int feet;
	int inches;
    public:
	void getData()
	{
		cout<<"\n Enter distance in feet:";
		cin>>feet;
		cout<<"\n Enter distance in inches:";
		cin>>inches;
	}
	void  display()
	{
		cout<<"\nInches = "<<inches;
	}
	friend void operator <<(fstream &,Distance);
	friend void operator >>(fstream &,Distance &);
};
void operator <<(fstream &fout,Distance d)
{
	int finches;
	finches = (d.feet*12)+d.inches;
	fout<<finches<<"\n";
}
void operator >>(fstream &fin,Distance &d)
{
	fin>>d.inches;
}
main()
{
	int n;
	clrscr();
	fstream iopf;
	char fname[40];
	Distance d;
	cout<<"\nEnter file name:";
	cin>>fname;
	iopf.open(fname,ios::out);
	cout<<"\nEnter how many distance values you want to store:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\n Enter distance "<<i+1;
		d.getData();
		iopf<<d;
	}
	iopf.close();
	iopf.open(fname,ios::in);
	cout<<"\nReading data from the file in inches\n";
	for (i=0;i<n;i++)
	{
		iopf>>d;
		d.display();
	}
	getch();
	return 0;
}

/*
Out put:-

Enter file name:Chirag

Enter how many distance values you want to store:2

 Enter distance 1
 Enter distance in feet:10

 Enter distance in inches:6

 Enter distance 2
 Enter distance in feet:5

 Enter distance in inches:8

Reading data from the file in inches

Inches = 126
Inches = 68

 */




