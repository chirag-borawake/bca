/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012
Q) Write a ‘C’ program for storage representation of 2-D array.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,m,a[20][20],i,j;
	clrscr();
	printf("\n How many rows:");
	scanf("%d",&m);
	printf("\n How many coloumns:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n Enter element at(%d%d):",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n These values are stored in memory as:\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");
	}
	getch();
}
/*

 How many rows:2                                                                
                                                                                
 How many coloumns:2                                                            
                                                                                
 Enter element at(11):1

 Enter element at(12):2

 Enter element at(21):3

 Enter element at(22):4

 These values are stored in memory as:

	1       2

	3       4

*/






























