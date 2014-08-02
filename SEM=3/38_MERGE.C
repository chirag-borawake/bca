/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 38) Write a ‘C’ program to sort an array elements using Merge Sort technique.

*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],c[20],n,m,i,j,k,temp;
	clrscr();
	printf("\n How many numbers in first array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\n How many numbers in second array:");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		printf("\n Enter element %d:",i+1);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i ;j<n; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=i ;j<m; j++)
		{
	
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for(i=j=k=0;i< n+m;)	
	{
		if(a[j] <= b[k])
		{
			c[i++]=a[j++];
		}
		else
		{
			c[i++]=b[k++];
		}
		if(j==n||k==m)
		{
			break;
		}
	}
	while(j<n)
	{
		c[i++]=a[j++];
	}
	while(k<m)
	{
		c[i++]=b[k++];
	}
	printf("\n First sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("  %d",a[i]);
	}
	printf("\n Second sorted array is:");	
	for(i=0;i<m;i++)
	{
		printf("  %d",b[i]);
	}
	printf("\n Final sorted array is:");
	for(i=0;i< n+m ;i++)
	{
		printf("  %d",c[i]);
	}
	getch();
}
/*


 How many numbers in first array:5                                              
                                                                                
 Enter element 1:2                                                              
                                                                                
 Enter element 2:4                                                              
                                                                                
 Enter element 3:7                                                              
                                                                                
 Enter element 4:8                                                              
                                                                                
 Enter element 5:9                                                              
                                                                                
 How many numbers in second array:4                                             
                                                                                
 Enter element 1:1                                                              
                                                                                
 Enter element 2:3                                                              
                                                                                
 Enter element 3:6                                                              

 Enter element 4:7                                                              
                                                                                
 First sorted array is:  2  4  7  8  9                                          
 Second sorted array is:  1  3  6  7                                            
 Final sorted array is:  1  2  3  4  6  7  7  8  9                              
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
