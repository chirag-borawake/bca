#include<conio.h>
#include<stdio.h>
int* reverse_array(int,int*);
void main()
{
	int num[50],n,i,*reverse__array;
	clrscr();
	printf("\n Enter how many number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter number%d:",i+1);
		scanf("%d",&num[i]);
	}
	reverse__array=reverse_array(n,&num);
	printf("\n Reverse array elements are:");
	for(i=0;i<n;i++)
	{
		printf(" %d",reverse__array[i]);
	}
	getch();
}
int* reverse_array(int count,int *number)
{
	int i,reverseArray[50],reverseArrIndex=0;
	for(i=count-1;i>=0;i--)
	{
		reverseArray[reverseArrIndex++]=number[i];
	}
	return(&reverseArray);
}
/*
 Enter how many number:4                                                        
                                                                                
 Enter number1:1                                                                
                                                                                
 Enter number2:2                                                                
                                                                                
 Enter number3:3                                                                
                                                                                
 Enter number4:4                                                                
                                                                                
 Reverse array elements are: 4 3 2 1                                            
                                                                                
  */
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
