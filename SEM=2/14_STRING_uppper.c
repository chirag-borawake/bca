/* Program to accept string from user and convert all lower case letters into upper case letters and vice versa..*/
#include<conio.h>
#include<stdio.h>
void main()
{
	char* s,*string1,*string2,*string3 ; 
	int i=0, length =0;
	clrscr();
	printf("\n Enter string:");
	gets(s);
	while(s[length]!='\0')
	{
		length++;
	}
	printf("\n Converted string is:");
	for(i=0;i<length;i++)
	{
		if(s[i]>='A'&&'Z'>=s[i])
		{
			string1[i]=s[i]+=32;
			printf("%c",string1[i]);
   		}
		else if(s[i]>='a'&&'z'>=s[i])
		{
			string2[i]=s[i]-=32;
			printf("%c",string2[i]);
  		}
		else if(s[i]==32)
		{
			string3[i]=32;
			printf("%c",string3[i]);
		}
	}
	getch();
}
/*
	out put:-

 Enter string: i AM GOOD                                                        
                                                                                
 Converted string is:Iamgood                                                    
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/

