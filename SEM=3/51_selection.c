/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 51) Write a ‘C’ program to sort an array elements using Selection sort method.

*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,j,temp;
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
		for(j=i+1;j<n;j++)
		{
			if(a[i]> a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
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

 How many numbers:5                                                             
                                                                                
 Enter element 1:2                                                              
                                                                                
 Enter element 2:5                                                              
                                                                                
 Enter element 3:8                                                              
                                                                                
 Enter element 4:8                                                              
                                                                                
 Enter element 5:7                                                              
                                                                                
 The sorted array is:  2  5  7  8  8                                            
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
