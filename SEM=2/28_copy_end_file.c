#include<conio.h>
#include<stdio.h>
void main()
{
	FILE *fq,*ft;
	char ch,che;
	fq=fopen("the.c","r");
	ft=fopen("strlen.c","a");
	while(1)
	{
		ch=fgetc(fq);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			fputc(ch,ft);
		}
	}
	fclose(fq);
	fclose(ft);
	printf("\n Contents of copied file.\n");
	ft=fopen("char.c","r");
	while(1)
	{
		che=fgetc(ft);
		if(che==EOF)
		{
			break;
		}
		printf("%c",che);
	}
	fclose(ft);
	getch();
}
/*

 Contents of copied file.
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char string[10],temp;
	int i,index=0;
	clrscr();
	printf("\n Enter string:");
	gets(string);
	strchr(string,'t');
	printf("%c",strchr);
	// length=strlen(string);
	// for(i=0;i<length;i++)

	getch();
}
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char s[30];
	int length;
	clrscr();
	printf("\n Enter string:");
	gets(s);
	length=strlen(s);
	printf("\n Length=%d",length);
	getch();
}
*/














                                                                                
                                                                                
