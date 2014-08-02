#include<conio.h>
#include<stdio.h>
void main()
{
	FILE *fq,*ft;
	char ch,che;
	fq=fopen("44_FILE.c","r");
	ft=fopen("tem.txt","w");
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
	ft=fopen("tem.txt","r");
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
out put:-

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

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
