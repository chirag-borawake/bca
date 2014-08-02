/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 17) Write a ‘C’ program to find given element into the array list using recursive Binary Search Method.

*/
#include<conio.h>
#include<stdio.h>
int searchElement(int *,int,int,int);
void main()
{
	int array[10],n,i,search,start=0,end,pos;
	printf("\n How many numbers:");
	scanf("%d",&n);
	end=n-1;
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:",i+1);
		scanf("%d",&array[i]);
	}
	printf("\n Enter which element want to search:");
	scanf("%d",&search);
	pos=searchElement(array,start,end,search);
	printf("\n Position of element:%d",pos);
	getch();
}
int searchElement(int* array,int start,int end,int search)
{
	int mid;
	mid=(start+end)/2;
	if(array[mid]==search)
	{
		return mid;
	}
	if(search < array[mid])
	{
		return searchElement(array, start, mid-1, search);
	}
	else
	{
		return searchElement(array, mid+1, end, search);
	}
}
/*

 How many numbers:5                                                             
                                                                                
 Enter element 1:1                                                              
                                                                                
 Enter element 2:2                                                              
                                                                                
 Enter element 3:3                                                              
                                                                                
 Enter element 4:4                                                              
                                                                                
 Enter element 5:5                                                              
                                                                                
 Enter which element want to search:3                                           
                                                                                
 Position of element:2                                                          
                                                                                
                                                                                
                                                                                
                                                                                
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
