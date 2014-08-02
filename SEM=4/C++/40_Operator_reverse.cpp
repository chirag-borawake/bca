/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Consider the following C++ class 
	 Class mystring 
	{
			char str [30];
			int len;
			Public:
			   // member functions
	  };	
    Overload operator "!" to reverse the case of each alphabet in the string.
*/ 
#include<conio.h>
#include<string.h>
#include<iostream.h>
class Mystring 
{
	char str [30];
	char convertedStr[30];
	int len;
	public:
	void getString();
	void findLength();
	void putString();
	void operator!();
 };
void Mystring ::getString()
{
	cout<<"\n Enter string:";
	cin>>str;
}
 void Mystring :: findLength()
{
	len=strlen(str);
}
 void Mystring :: operator!()
 {
	int i;
	for(i = 0; i < len; i ++)
	{
		if(str[i]>='A'&&'Z'>str[i])
		{
			convertedStr[i]=str[i]+32;
		}
		else if(str[i]>='a'&&'z'>=str[i])
		{
			convertedStr[i]=str[i]-32;
		}
	}
	convertedStr[i]='\0';
 }
void Mystring :: putString()
{
	cout<<"\n Given string:"<<str;
	cout<<"\n Converted string:"<<convertedStr;
}
 main()
 {
	Mystring string;
	clrscr();
	string.getString();
	string.findLength();
	!string;
	string.putString();
	getch();
	return 0;
 }
/*
Out Put:-

 Enter string:cHIRAG

 Given string:cHIRAG
 Converted string:Chirag
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

