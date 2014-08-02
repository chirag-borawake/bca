#include<conio.h>
#include<stdio.h>
#define TRUE 1
#define FALSE 0
void main()
{
	int n,i,result=0,isPresent=0,flag;
	char names[10][10],name[10];
	clrscr();
	printf("\n Enter how many names:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter name%d:",i+1);
		names[i][0]=malloc(10);
		scanf("%s",names[i][0]);
	}
	printf("\n Enter name to check name is present in list or not:");
	scanf("%s",name);
	for(i=0;i<n;i++)
	{
		result=strcmp(names[i][0],name);
		if(result==0)
		{
			isPresent=TRUE;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n %s",names[i][0]);
	}
	if(isPresent)
	{
		printf("\n Name is present in list.");
	}
	else
	{
		printf("\n Name is not present in list.");
	}
	getch();
}
/*

 Enter how many names:3

 Enter name1:chirag

 Enter name2:raj

 Enter name3:rahul

 Enter name to check name is present in list or not:chirag

 Name is present in list.

*/




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
