#include<conio.h>
#include<stdio.h>
void main()
{
	FILE *fq,*ft;
	char ch,che;
	fq=fopen("44_FILE.c","r");
	ft=fopen("file.c","w");
	while(1)
	{
		ch=fgetc(fq);
		if(ch==EOF)
		{
			break;
		}
		if(ch>='A' && 'Z'>=ch)
		{
			ch+=32;
		}
		else if(ch>='a'&&'z'>=ch)
		{
			ch-=32;
		}
		fputc(ch,ft);
	}
	fclose(fq);
	fclose(ft);
	printf("\n Contents of coverted file.\n");
	ft=fopen("file.c","r");
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
 Contents of coverted file.                                                     
#INCLUDE<CONIO.H>                                                               
#INCLUDE<STDIO.H>                                                               
#INCLUDE<STRING.H>
VOID MAIN()
{
	CHAR STRING[10],TEMP;
	INT I,INDEX=0;
	CLRSCR();
	PRINTF("\N eNTER STRING:");
	GETS(STRING);
	STRCHR(STRING,'T');
	PRINTF("%C",STRCHR);
	// LENGTH=STRLEN(STRING);
	// FOR(I=0;I<LENGTH;I++)

	GETCH();
}
#INCLUDE<CONIO.H>
#INCLUDE<STDIO.H>
#INCLUDE<STRING.H>
VOID MAIN()
{
	CHAR S[30];
	INT LENGTH;
	CLRSCR();
	PRINTF("\N eNTER STRING:");
	GETS(S);
	LENGTH=STRLEN(S);
	PRINTF("\N lENGTH=%D",LENGTH);
	GETCH();
}
*/











                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
