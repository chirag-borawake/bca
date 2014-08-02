/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
 Create a class Medicalshopee containing  
- medicine
- qty
- price
Medicine details are stored into the file “medical.txt”.
When any medicine has to be sold, it is first searched into the file, 
if found, the qty is decremented by that much qty to be sold.*/
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class medicalshopee
{
	private:
		int med_no;
		char med_name[100];
		int qty;
		int price;
	public:
	void accept()
	{
		cout<<"\n\nEnter medicine number : ";
		cin>>med_no;
		cout<<"\n\nEnter medicine name : ";
		cin>>med_name;
		cout<<"\nEnter quantity of medicine : ";
		cin>>qty;
		cout<<"\nEnter price of medicine : ";
		cin>>price;
	}

	void display()
	{
		cout<<"\n\n medicine number : ";
		cout<<med_no;
		cout<<"\n medicine name : ";
		cout<<med_name;
		cout<<"\n quantity of medicine : ";
		cout<<qty;
		cout<<"\n price of medicine : ";
		cout<<price;
	}
	int rmno()
	{
		return med_no;
	}
	void update(int q)
	{
		qty=qty-q;
	}
};

void main()
{
	clrscr();
	int n,i,flag,target,q;
	char ans='y';
	fstream iopf;
	medicalshopee *m,p;
	iopf.open("c:\\medical.dat",ios::ate|ios::in|ios::out|ios::binary);
	cout<<"\n\nHow many details u want to enter : ";
	cin>>n;
	m=new medicalshopee[n];
	iopf.seekp(0,ios::beg);
	for(i=0;i<n;i++)
	{
		m[i].accept();
		iopf.write((char *)& m[i],sizeof(m[i]));
	}

	iopf.seekg(0,ios::beg);
	cout<<"\n\noutput : ";

	for( i=0;i<n;i++)
	{
		iopf.read((char *)& m[i],sizeof(m[i]));
		m[i].display();
	}
	while(ans=='y'||ans=='Y')
	{
		iopf.seekg(0,ios::beg);
		cout<<"\n\nEnter medicine number that u want to sale : ";
		cin>>target;

		for(i=flag=0;i<n;i++)
		{
			iopf.read((char *)& p,sizeof(p));
			if(p.rmno()==target)
			{
				cout<<"\nCurrent data of this medicine is\n";
				p.display();
				flag=1;
				break;		
			}
		}
		if(flag==0)
		{
			cout<<"\nSorry... No such medicine present";
			continue;
		}
		int location=i*sizeof(p);
		iopf.seekp(location,ios::beg);
		cout<<"\nEnter Quantity : ";
		cin>>q;
		m[i].update(q);
		iopf.write((char *)& m[i],sizeof(m[i]));
		iopf.seekg(0,ios::beg);
		cout<<"\n\noutput : ";
		for(i=0;i<n;i++)
		{
			iopf.read((char *)& p,sizeof(p));
			p.display();
		}
		cout<<"\n\nDo you want to update record Y/N : ";
		cin>>ans;
	}
	iopf.close();
	getch();
}
/* Out Put:-


How many details u want to enter : 1


Enter medicine number : 1


Enter medicine name : Redynise

Enter quantity of medicine : 30

Enter price of medicine : 60


output :

 medicine number : 1
 medicine name : Redynise
 quantity of medicine : 30
 price of medicine : 60

Enter medicine number that u want to sale : 1

Current data of this medicine is


 medicine number : 1
 medicine name : Redynise
 quantity of medicine : 30
 price of medicine : 60
Enter Quantity : 30


output :

 medicine number : 1
 medicine name : Redynise
 quantity of medicine : 0
 price of medicine : 60

Do you want to update record Y/N : N

*/






