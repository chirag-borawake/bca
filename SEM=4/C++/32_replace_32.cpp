/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
 Q. Write a C++ program using class with data member char str[50] and
 function replace (char c1, char c2) every occurrence of c1 in str should
 be replaced with c2 and return number of replacement it makes use default
 value for char c2.
*/
#include<conio.h>
#include<iostream.h>
#include<string.h>
class String
{
	char str[20];
	public:
	void getData()
	{
		cout<<"\n Enter string:";
		cin>>str;
	}
	void display()
	{
		cout<<"\n Replaced string:"<<str;
	}
	int replace(char,char);
};
int String :: replace(char c1,char c2='z')
{
	int  count =0;
	for(int i = 0;i < str[i]!= NULL;i++)
	{
		if(str[i] == c1)
		{
			str[i] = c2;
			count++;
		}
	}
	return count;
}
main()
{
	String s;
	char c1,c2;
	int count;
	clrscr();
	s.getData();
	cout<<"\n Enter which charactor want to replace:";
	cin>>c1;
	cout<<"\n With which charactor:";
	cin>>c2;
	count = s.replace(c1,c2);
	if(count)
	{
		s.display();
		cout<<"\n Number of charctors replaced:"<<count;
	}
	else
	{
		cout<<"\n No charactor match with:"<<c1;
	}
	getch();
	return 0;

}
/*
Out put:-

 Enter string:Chieag

 Enter which charactor want to replace:e

 With which charactor:r

 Replaced string:Chirag
 Number of charctors replaced:1


*/







































