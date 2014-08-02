/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 21) Write a ‘C’ program to sort array elements using Bubble sort method.

*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,j,temp;
	clrscr();
	printf("\n How many numbers:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n The sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("  %d",a[i]);
	}
	getch();
}
/*

 How many numbers:4

 Enter element 1:2

 Enter element 2:4

 Enter element 3:7

 Enter element 4:1

 The sorted array is:  1  2  4  7


*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
