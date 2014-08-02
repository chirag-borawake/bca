/*
Name :-Chirag borawake
Class :-SY BCA
Q.Roll No:-2012
       Create a class MyFile containing:
       - FILE *fp;
       - Char fn[maxsize];
       Write necessary member Functions using operator overloading:
1.  +  F3=F1+F2   Put contents of F1 and F2 in F3.
2.  -  -F3 Changes the case of all upper and lower case characters in F3.*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
#include<ctype.h>
#include<process.h>

class MyFile
{
	FILE *fp;
	char fn[20];
public:
	int open(char *,char *);
	MyFile operator +(MyFile );
	void operator -();
	void display();
	void close();
}; 

int MyFile::open(char *fn, char *mode)
{
	fp = fopen(fn,mode);		  
	if(fp==NULL)
	{
			cout<<"\nError opening file";
			return 0;
	}
	return 1;
}
MyFile MyFile :: operator +(MyFile f2)
{
	MyFile f3;
	char line[80];
	cout<<"\nEnter destination file name\t";
	cin>>f3.fn;
	int p=f3.open(f3.fn,"w");		 
	if(!p)
	{
		cout<<"\nDestination file could not be created / opened";
		getch();
		exit(0);
	}
	 
	fseek(fp,0,0);		 
	while(fgets(line,80,fp))
	{
	 
		fputs(line,f3.fp);
	}
	fputs("\n",f3.fp);
	fseek(f2.fp,0,0);        
	 
	while(fgets(line,80,f2.fp))
	{
		 
		fputs(line,f3.fp);
	}
	fclose(fp);
	fclose(f2.fp);
	fclose(f3.fp);
	return f3;
}
void MyFile ::display()
{
	char line[80];
	while(fgets(line,80,fp))
	{
		cout<<line<<endl;
	}
} 

void MyFile ::close()
{
	fclose(fp);
} 



void main()
{
	clrscr();
	char fn[20];
	cout<<"\nAddition of two files in third file\n";

	MyFile F1,F2,F3;
	cout<<"\nEnter first file name\t";
	cin>>fn;
	int p1=F1.open(fn,"r");	 

	cout<<"\nEnter second file name\t";
	cin>>fn;
	int p2=F2.open(fn,"r");	 

	if(p1)
	{
		cout<<"\nDisplaying first file\n";
		F1.display();
	}
	cout<<"\nTo view second file, Press any key... ";
	getch();
	if(p2)
	{
		cout<<"\nDisplaying second file\n";
		F2.display();
	}
	if(p1&&p2)		 
	{
		F3=F1+F2;
		cout<<"\nThe third file is addition of first and second file\n";
		cout<<"\nIts content is\n";
		F3.open(fn,"r");	 
		F3.display();
	}
	F1.close();
	F2.close();
	F3.close();
	getch();
}
