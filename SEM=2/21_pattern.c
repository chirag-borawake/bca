#include<conio.h>
#include<stdio.h>
void main()
{
	char *str;
	int length,i,j;
	clrscr();
	printf("\n Enter string:");
	scanf("%s",str);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%5c",str[j]);
		}
		printf("\n\n");
	}
	for(i=length;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("%5c",str[j]);
		}
		printf("\n\n");
	}
	getch();
}
/* Out put:-

 Enter string:chirag
    c
                                                                                
    c    h                                                                      
                                                                                
    c    h    i                                                                 
                                                                                
    c    h    i    r                                                            
                                                                                
    c    h    i    r    a                                                       
                                                                                
    c    h    i    r    a    g                                                  
                                                                                
    c    h    i    r    a                                                       

    c    h    i    r

    c    h    i

    c    h

    c


     */

















                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
