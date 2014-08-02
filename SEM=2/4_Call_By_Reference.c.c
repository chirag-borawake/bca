/* Program to swap the values of two variables by using call by reference.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	void swap(int*,int*);
	printf("\n Enter value for x:");
	scanf("%d",&x);
	printf("\n Enter value for y:");
	scanf("%d",&y);
	swap(&x,&y);
	printf("\n Value of x is %d.",x);
	printf("\n\n Value of y is %d.",y);
	getch();
}
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
/*
Out put:-

 Enter value for x:3                                                            
                                                                                
 Enter value for y:4                                                            
                                                                                
 Value of x is 4.                                                               
                                                                                
 Value of y is 3.                                                               
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


*/