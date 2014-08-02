#include<conio.h>
#include<stdio.h>
void main(int argc,char *argv[])
{
	FILE *fs,*ft;
	char ch;
	if(argc !=3)
	{
		printf("\n Improper number of arguments.");
		exit();
	}
	fs=fopen(argv[1],"r");
	if(fs==NULL)
	{
		printf("\n Connot open source file");
		exit();
	}
	ft=fopen(argv[2],"w")
	if(ft==NULL)
	{
		printf("\n Connot open source file");
		exit();
	}
	while(1)
	{
		ch=fgetc(fs);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			fputc(ch,ft);
		}
	}
	fclose(fs);
	fclose(ft);
}