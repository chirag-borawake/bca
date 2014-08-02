#include<stdio.h>
#include<conio.h>
void main()
 {
	int number,sum,i;
	clrscr();
	printf("\n Enter no:");
	scanf("%d",&number);
	sum=0;
	for(i=1;i<number;i++)
	{
		
		if(number%i==0)
		{
			sum=sum+i;
		}
	}
	
	if(sum == number)
	{
		printf("Number is perfect.");
	}
	else
	{
		printf("Number is not perfect.");
	}
	getch();
 }
 