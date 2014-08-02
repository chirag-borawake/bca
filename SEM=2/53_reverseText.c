#include<conio.h>
#include<stdio.h>
void reverseFileContents(FILE * fp);
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
	printf("\n Reversed lines are:");
	file=fopen("temp.txt","r");
	reverseFileContents(file);
	fclose(file);
	getch();
}
void reverseFileContents(FILE * fp)
{
	char character;
	character = fgetc(fp);
	if(character == EOF)
	{
		return;
	}
	reverseFileContents(fp);
	putchar(character);
} /*
 Enter line:My name is chirag                                                   
                                                                                
                                                                                
 Reversed lines are:                                                            
garihc si eman yM                                                               
                                                                                
 */
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
