#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,num,sum=0;
	printf("\n Enter how many number you want add:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n Enter number:");
		scanf("%d",&num);
		sum=sum+num;		
	}
	printf("\n Sum of number is %d.",sum);
	getch();
}