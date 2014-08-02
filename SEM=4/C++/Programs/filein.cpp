
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class distance
{
   int feet;
   int inches;

 public:
	void getdata()
	{
	cout<<"\n\t\tEnter distance in feet and inches\t";
	cin>>feet>>inches;
	}
	void putdata()
	{
		cout<<"\nInches = "<<inches;
	}
	friend void operator <<(fstream &,distance);
	friend void operator >>(fstream &,distance &);
};//class distance
void operator <<(fstream &fout,distance d)
{
int finches=(d.feet*12)+d.inches;
fout<<finches<<"\n";
}
void operator >>(fstream &fin,distance &d)
{
fin>>d.inches;
}
void main()
{
clrscr();
fstream iopf;
char fname[40];
distance d;
cout<<"\nEnter file name\t";
cin>>fname;
iopf.open(fname,ios::out);
int n;
cout<<"\nEnter how many distance values you want to store";
cin>>n;
for(int i=0;i<n;i++)
{
	d.getdata();
	//write it to file
	iopf<<d;
}//for
iopf.close();
iopf.open(fname,ios::in);
cout<<"\nReading data from the file in inches\n";
for (i=0;i<n;i++)
{
	//read from file
	iopf>>d;
	d.putdata();
}//for
getch();
}//main
/*
OUTPUT:=
Enter file name Amruta

Enter how many distance values you want to store 2

                Enter distance in feet and inches       10 5

                Enter distance in feet and inches       5 10

Reading data from the file in inches

Inches = 125
Inches = 70
*/