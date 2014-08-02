/* Program for sorting of numnber */
#include<conio.h>
#include<stdio.h>
void main()
{
	int j,i,n,num[100],temp;
	clrscr();
	printf("\n Enter numbers to sort.");
	printf("\n Enter how many numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter number %d:",i+1);
		scanf("%d",&num[i]);
	}	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	printf("\n sorted numbers are:");
	for(i=0;i<n;i++)
	{
		printf(" %d",num[i]);
	}
	getch();
}
/*
 Enter numbers to sort.                                                         
 Enter how many numbers:6                                                       
                                                                                
 Enter number 1:4                                                               
                                                                                
 Enter number 2:5                                                               
                                                                                
 Enter number 3:1

 Enter number 4:2

 Enter number 5:9

 Enter number 6:7

 sorted numbers are: 1 2 4 5 7 9
*/
















                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
