#include<conio.h>
#include<iostream.h>
#include<fstream.h>
int main()
{
	ofstream fout;
	fout.open("country");
	fout<<"\n United States of America.";
	fout<<"\n United Kingdam.";
	fout<<"\n South Korea.";
	fout.close();
	fout.open("capital");
	fout<<"\n Washington";
	fout<<"\n Londin";
	fout<<"\n Seoul";
	fout.close();
	const int N = 80;
	char line[N];
	ifstream fin;
	fin.open("country");
	cout<<"\n Contents of country file.\n";
	while(fin)
	{
		fin.getline(line,N);
		cout<<line<<"\n";
	}
	fin.close();
	fin.open("capital");
	cout<<"\n Contents of capital file.\n";
	while(fin)
	{
		fin.getline(line,N);
		cout<<line<"\n";
	}
	fin.close();
	return 0;
}
