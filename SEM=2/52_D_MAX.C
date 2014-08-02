#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n,*num,max_num;
	clrscr();
	printf("\n Enter how many numbers:");
	scanf("%d",&n);
	num=(int*) malloc(sizeof(int) *n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:",i+1);
		scanf("%d",num+i);
	}
	max_num=*(num+0);
	for(i=0;i<n;i++)
	{
		if(max_num < *(num+i))
		{
			max_num=*(num+i);
		}
	}
	printf("\n Maximum number is %d.",max_num);
	getch();
}
/*
 Enter how many numbers:5

 Enter element 1:3

 Enter element 2:55

 Enter element 3:3

 Enter element 4:656

 Enter element 5:5

 Maximum number is 656.


  */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
