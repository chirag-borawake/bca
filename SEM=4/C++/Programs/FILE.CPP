#include<conio.h>
#include<iostream.h>
#include<fstream.h>
main()
{
	char name[20];
	float cost; 
	ofstream outf("ITEM");
	cout<<"\n Enter item name:";
	cin>>name;
	outf<<name<<"\n ";
	cout<<"\n Enter item cost:";
	cin>>cost;
	outf<<"cost"<<"\n";
	outf.close();
	ifstream  inf("ITEM");
	inf>>name;
	inf>>cost;
	cout<<"\n Item name:"<<name;
	cout<<"\n Item cost:"<<cost;
	inf.close();
	getch()
	return 0;
}
