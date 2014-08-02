#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n,*array,temp,j;
	clrscr();
	printf("\n Enter how many numbers:");
	scanf("%d",&n);
	array=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:",i+1);
		scanf("%d",array+i);
	}
	printf("\n Sorted array element:");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(array+i) > *(array+j))
			{
				temp = *(array+i);
				*(array+i) =  *(array+j);
				 *(array+j) = temp;
			}
		}
	}
	for(j=0;j<n;j++)
	{
		printf(" %d",*(array+j));
	}
	getch();
}
/*
out put:-

 Enter how many numbers:6                                                       
                                                                                
 Enter element 1:4                                                              
                                                                                
 Enter element 2:9                                                              
                                                                                
 Enter element 3:5                                                              
                                                                                
 Enter element 4:3                                                              
                                                                                
 Enter element 5:5                                                              
                                                                                
 Enter element 6:7                                                              
                                                                                
 Sorted array element: 3 4 5 6 7 8                                              
                                                                                
   */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
