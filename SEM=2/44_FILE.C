/* Write a ‘C’ Program using command line arguments to search for a word in a file and replace it with the specified word.*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
main(int argc,char *argv[])
{
	FILE *fr,*fw;
	int cnt;
	int i=0,j;
	char m[20][20];
	if(argc!=4)
	{
		printf("\n Error in file opening\n");
		return;
	}
	fw=fopen("b.txt","w");
	fr=fopen(argv[1],"r");
	if((fr==NULL)||(fw==NULL))
	{
		printf("error");
		return;
	}
	while(fscanf(fr,"%s",m[i])!=EOF)
	{
		if(strcmp(argv[2],m[i])==0)
		{
			strcpy(m[i],argv[3]);		
		}
		i++;
	}
	for(j=0;j<i;j++)
	{
		printf("%s ",m[j]);
	}	
	for(j=0;j<i;j++)
	{
		fprintf(fw,"%s ",m[j]);
	}	
	remove(argv[1]);
	rename("b.txt",argv[1]);
	fcloseall();
	getch();
}
