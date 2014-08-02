#include<conio.h>
#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	int nol=0,not=0,nob=0,noc=0;
	fp=fopen("temp.txt","r");
	if(fp==NULL)
	{
		printf("\n connot open source file");
		exit();
	}
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		{
			break;
		}
		noc++;
		if(ch=='\n')
		{
			nol++;
		}
		if(ch =='\t')
		{
			not++;
		}
		if(ch == ' ')
		{
			nob++;
		}
	}
	printf("\n Number fo characters in file=%d",noc);
	printf("\n Number fo blank places in file=%d",nob);
	printf("\n Number fo tabs in file=%d",not);
	printf("\n Number fo lines file=%d",nol);
	getch();
}
/*
 Number fo characters in file=185
 Number fo blank places in file=31
 Number fo tabs in file=5
 Number fo lines file=12

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
