/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012
Q. 49) Write a ‘C’ program to sort an array elements using insertion sort method.

*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,j,k,temp;
	clrscr();
	printf("\n How many numbers:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<1;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[j];
				a[j]=a[i];
				for(k=i;k>j;k--)
				{
					a[k]=a[k-1];
				}
				a[k+1]=temp;
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


 How many numbers:3

 Enter element 1:5

 Enter element 2:3

 Enter element 3:7

 The sorted array is:  3  5  7


*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
