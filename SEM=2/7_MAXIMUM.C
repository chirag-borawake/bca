/* Program for finding maximum and minimum number*/
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[5],max=-1,min=3000,i,count;
	clrscr();
	printf("\n Enter numbers for findining maximum and minimum numbers.");
	printf("\n Enter how many number:");
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
		printf("\n Enter number %d:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<count;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\n Maximum number is %d.",max);
	for(i=0;i<count;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\n Minimun number is %d.",min);
	getch();
}
/*

 Enter numbers for findining maximum and minimum numbers.
 Enter how many number:4

 Enter number 1:4

 Enter number 2:3

 Enter number 3:5

 Enter number 4:6

 Maximum number is 6.
 Minimun number is 3.
 */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
