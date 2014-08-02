/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q ) Write a ‘C’ program for implementing linear search method using function.

*/
#include<conio.h>
#include<stdio.h>
void search(int[],int,int);
void main()
{
	int num[10],i,n,searchNum;
	clrscr();
	printf("\n How many number you want to enter:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:",i+1);
		scanf("%d",&num[i]);
	}
	printf("\n Enter element for search:");
	scanf("%d",&searchNum);
	search(num,searchNum,n);
}
void search(int *num,int searchNum,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(num[i]==searchNum)
		{
			printf("\n Position of element =%d ",i+1);
			break;
		}
	}
	getch();
}
/*


 How many number you want to enter:4

 Enter element 1:1

 Enter element 2:2

 Enter element 3:3

 Enter element 4:4

 Enter element for search:4

 Position of element =4

*/






                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
