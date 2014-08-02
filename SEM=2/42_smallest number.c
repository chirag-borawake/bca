#include<conio.h>
#include<stdio.h>
void main()
{
	int num[10],i,j,n,*smallest_number;
	clrscr();
	printf("\n Enter how many numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter number%d:",i+1);
		scanf(" %d",&num[i]);
	}
	smallest_number=&num[0];
	for(j=0;j<n;j++)
	{
		if(smallest_number > num[j])
		{
			smallest_number=num[j];
		}
	}
	printf("\n Smallest number is %d.",smallest_number);
	getch();
}

/* out put :-

 Enter how many numbers:4

 Enter number1:3

 Enter number2:4

 Enter number3:3

 Enter number4:2

 Smallest number is 2.
*/






                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

