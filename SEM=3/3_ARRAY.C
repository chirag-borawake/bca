/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q.)Write a ‘C’ program to accept m elements from user and store those elements into an array. Extend the size of an array to n,accept n-melements from the user and store those elements into an array anddisplay the complete array.(Use malloc() and realloc() function)

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n,*ptr,i;
	clrscr();
	printf("\n What should be the size of the array:");
	scanf("%d",&m);
	ptr=(int *)malloc(m*sizeof(int));
	for(i=0;i<m;i++)
	{
		printf("\n Enter element %d:",i+1);
		scanf("%d",(ptr+i));
	}
	printf("\nCurrent array is:");
	for(i=0;i<m;i++)
	{
		printf("%d  ",*(ptr+i));
	}
	printf("\n\nWhat should be the new size of array:");
	scanf("%d",&n);
	ptr=(int *)realloc(ptr,n*sizeof(int));
	printf("\n\nEnter values for newly added size of array.");
	for(i=m;i<n;i++)
	{
		printf("\n Enter element %d:",i+1);
		scanf("%d",(ptr+i));
	}
	printf("\nModified array is::");
	for(i=0;i<n;i++)
	{
		printf("%d  ",*(ptr+i));
	}
	getch();
}

/*

OUTPUT

What should be the size of the array
5

Enter 5 values
10 20 30 40 50

Current array is
10  20  30  40  50

What should be the new size of array
8

Extended array contains
10  20  30  40  50  0  0  0

Enter values for newly added size of array
60 70 80

Modified array is
10  20  30  40  50  60  70  80

*/