/* Program to accept ‘n’ numbers and store all prime numbers in an array and display this array.*/
#include<conio.h>
#include<stdio.h>
void main()
{
	int n,i,j,prime[100],index=0,temp,number[100],primeNumber;
	int give_prime(int);
	clrscr();
	printf("\n Enter how many numbers:");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		printf("\n Enter number %d:",j+1);
		scanf("%d",&number[j]);
		primeNumber = give_prime(number[j]);
		if(primeNumber!=-1)
		{
			prime[index++]=primeNumber;
		}
	}
	if(index>0)
	{
		printf("\n Prime numbers are:");
		for(j=0;j<index;j++)
		{
			printf(" %d",prime[j]);

		}
		//Sorting prime numbers
		for(i=0;i<index;i++)
		{
			for(j=i+1;j<index;j++)
			{
				if(prime[i]>prime[j])
				{
					temp=prime[i];
					prime[i]=prime[j];
					prime[j]=temp;
				}
			}
		}
		printf("\n sorted numbers are:");
		for(i=0;i<index;i++)
		{
				printf(" %d",prime[i]);
		}
	}
	else
	{
		printf("\n NO prime numbers present.");
	}
	getch();
}
int give_prime(int temp)
{
	int j,i,is_Prime=1;
	for(i=2;i<temp;i++)
	{
		if(temp%i==0)
		{
			is_Prime=0;
			break;
		}
	}
	if(is_Prime)
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

 Enter how many numbers:7                                                       
                                                                                
 Enter number 1:1                                                               
                                                                                
 Enter number 2:3                                                               
                                                                                
 Enter number 3:2                                                               
                                                                                
 Enter number 4:4                                                               
                                                                                
 Enter number 5:5                                                               
                                                                                
 Enter number 6:6                                                               
                                                                                
 Enter number 7:7                                                               
                                                                                
 Prime numbers are: 1 3 2 5 7                                                   
 sorted numbers are: 1 2 3 5 7                                                  
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


*/


