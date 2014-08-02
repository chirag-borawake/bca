#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<fstream.h>
main()
{
	const int SIZE = 80;
	char line[SIZE];
	ifstream fin1,fin2;
	fin1.open("country");
	fin2.open("capital");
	for(int i = 1;i <= 10;i ++)
	{
		if(fin1.eof() != 0)
		{
			cout<<"\n Exit from country";
			getch();
			exit(1);
		}
		fin1.getline(line,SIZE);
		cout<<"\n capital of"<<line;
		if(fin2.eof() != 0)
		{
			cout<<"\n Exit from capital";
			getch();
			exit(1);
		}
		fin2.getline(line,SIZE);
		cout<<line<<"\n";
	}
	getch();
	return 0;
}