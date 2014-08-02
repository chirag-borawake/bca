#include<conio.h>
#include<stdio.h>
void display(FILE * fp);
void main()
{
	FILE *file;
	char s[80],ch;
	file=fopen("temp.txt","w");
	printf("\n Enter line:");
	while(strlen(gets(s))>0)
	{
		fputs(s,file);
		fputs("\n",file);
	}
	fclose(file);
	printf("\n Entered lines are:");
	file=fopen("temp.txt","r");
	display(file);
	fclose(file);
	getch();
}
void display(FILE * fp)
{
	char ch;
	ch=fgetc(fp);
	if(ch==EOF)
	{
		return;
	}
	display(fp);
	putchar(ch);
}







                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
