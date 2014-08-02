/* Program to calculate average of ‘n’ numbers.*/
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,num[100],n;
	float ave=0,sum=0;
	clrscr();
	printf("\n How many number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter number %d:",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=num[i];
	}
	ave=sum/n;
	printf("\n Average of numbers is %.2f",ave);
	getch();
}
/*
Out put:-

 How many number:4                                                              
                                                                                
 Enter number 1:2                                                               
                                                                                
 Enter number 2:3                                                               
                                                                                
 Enter number 3:5                                                               
                                                                                
 Enter number 4:7
                                                                                
 Average of numbers is 4.25                                                     
                                                                                
                                                                                
 */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
