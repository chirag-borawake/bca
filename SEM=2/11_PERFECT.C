/*Program to accept 'n' numbers, store all perfect numbers in an array and display this array.*/
#include<conio.h>
#include<stdio.h>
void main()
{
	int n,i,j,perfect[100],index=0,perfectNumber,temp,number[100];
	int give_perfect(int);
	clrscr();
	printf("\n Emter number to check whether number is prefect or not.");
	printf("\n Enter how many numbers:");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		printf("\n Enter number %d:",j+1);
		scanf("%d",&number[j]);
		perfectNumber = give_perfect(number[j]);
		if(perfectNumber !=-1)
		{
			perfect[index++]=perfectNumber;
		}
	}
	if(index>0)
	{
		printf("\n perfect numbers are:");
		for(j=0;j<index;j++)
		{
			printf(" %d",perfect[j]);
			
		}
		//Sorting perfect numbers	
		for(i=0;i<index;i++)
		{
			for(j=i+1;j<index;j++)
			{
				if(perfect[i] < perfect[j])
				{
					temp=perfect[i];
					perfect[i]=perfect[j];
					perfect[j]=temp;
				}
			}
		}
		printf("\n sorted numbers are:");
		for(i=0;i<index;i++)
		{
				printf(" %d",perfect[i]);
		}
	}
	else
	{
		printf("\n NO perfect numbers present.");
	}
	getch();
}
int give_perfect(int temp)
{
	int i,sum=0;
	for(i=1;i<temp;i++)
	{
		if(temp%i==0)
		{
			sum+=i;
		}
	}
	if(sum==temp)
	{
		return(temp);
	}
	else
	{
		return(-1);
	}
}	
/*
 Out put:-

 Emter number to check whether number is prefect or not.                        
 Enter how many numbers:3

 Enter number 1:1

 Enter number 2:3

 Enter number 3:6

 perfect numbers are: 6
 sorted numbers are: 6
*/
