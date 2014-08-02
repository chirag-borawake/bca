/* 
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q.Write a program to read the contents from the file sample.txt.
Store all the characters from sample.txt into the file character.txt
& store all digits into the file digit.txt .*/

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<ctype.h>

void main()
{
clrscr();
ifstream ipf("c:\\sample.txt");
ofstream opf1("c:\\char.txt");
ofstream opf2("c:\\digit.txt");
if(ipf==NULL || opf1==NULL || opf2==NULL)
{
	cout<<"\Error opening files....";
	getch();
	return;
}
char ch;
while(!ipf.eof())
{
	ipf.get(ch);
	if(islower(ch)||isupper(ch)||isspace(ch))
	{
		opf1.put(ch);
	}
	else if(isdigit(ch))
	{
		opf2.put(ch);
	}
}
cout<<"\n\nContents written in files successfully...";
ipf.close();
opf1.close();
opf2.close();
getch();
}