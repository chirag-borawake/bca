#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n,array[10];
	clrscr();
	printf("\n Enter how many numbers:");
	scanf("%d",&n);
	array[0]=(int*) malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:",i+1);
		scanf("%d",array+i);
	}
	printf(" Reversed array element:");
	for(i=n-1;i>=0;i--)
	{
		printf(" %d",*(array+i));
	}
	getch();
}
/*
out put:-

 Enter how many numbers:4                                                       
                                                                                
 Enter element 1:1                                                              
                                                                                
 Enter element 2:2                                                              
                                                                                
 Enter element 3:3                                                              
                                                                                
 Enter element 4:4                                                              
 Reversed array element: 4 3 2 1                                                
                                                                                
   */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
