/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 32) Write a ‘C’ program to sort array elements using Quick sort method.

*/
#include<stdio.h>
#include<conio.h>
int split(int*,int,int);
void main()
{
	int a[10],n,i,j,k,temp;
	void quickSort(int *,int,int);
	clrscr();
	printf("\n How many numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	quickSort(a,0,n-1);
	printf("\n The sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("  %d",a[i]);
	}
	getch();
}
void quickSort(int array[],int lower,int upper)
{
	int i;
	if(upper > lower)
	{
		i=split(array,lower,upper);
		quickSort(array,lower,i-1);
		quickSort(array,i+1,upper);
	}
}
int split(int array[],int lower,int upper)
{
	int i,a,b,t;
	a=lower+1;
	b=upper;
	i=array[lower];
	while(b>=a)
	{
		while(array[a] < i)
		{
			a++;
		}	
		while(array[b] > i)
		{
			b--;
		}
		if(b > a)
		{
			t=array[a];
			array[a]=array[b];
			array[b]=t;
		}
	}
	t=array[lower];
	array[lower]=array[b];
	array[b]=t;
	return(b);
}

/*

 How many numbers:5                                                             
                                                                                
 Enter element 1:2                                                              
                                                                                
 Enter element 2:4                                                              
                                                                                
 Enter element 3:1                                                              
                                                                                
 Enter element 4:6

 Enter element 5:8

 The sorted array is:  1  2  4  6  8






*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
