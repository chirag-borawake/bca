#include<conio.h>
#include<stdio.h>
void main()
{
	FILE *file;
	char s[80];
	file=fopen("text.txt","w");
	printf("\n Enter data:");
	while(strlen(gets(s))>0)
	{
		fputs(s,file);
		fputs("\n",file);
	}
	fclose(file);
	getch();
}
/*

 Enter data:student name :chirag                                                
            student roll number:1012                                            
            student class:FYBCA                                                 
                                                                                
 */

                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
