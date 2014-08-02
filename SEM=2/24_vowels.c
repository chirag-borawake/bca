#include<conio.h>
#include<stdio.h>
#define FALSE 0
#define TRUE 1
int cheak_vowel(char);
void main()
{
	char *string,is_vowel,*no_vowel;
	int i,j,length=0,index=0;
	clrscr();
	printf("\n Enter string:");
	{
		gets(string);
	}
	while(string[length]!='\0')
	{
		length++;
	}
	for(i=0;i<length;i++)
	{
		is_vowel=check_vowel(string[i]);
		if(!is_vowel)
		{
			no_vowel[index++]=string[i];
		}
	}
	no_vowel[index]='\0';
	printf("\n String without vowels:%s",no_vowel);
	getch();
}
int check_vowel(char  vowel)
{
	if(vowel!='a'&&vowel!='A'&&vowel!='e'&&vowel!='E'&&vowel!='i'
	&&vowel!='I'&&vowel!='o'&&vowel!='O'&&vowel!='u'&&vowel!='U')
	{
		return(FALSE);
	}
	else
	{
		return(TRUE);
	}
}

/* out put:-

 Enter string:asas                                                              
                                                                                
 String without vowels:ss                                                       
 */
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
