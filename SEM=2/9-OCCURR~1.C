/* Program for finding count the number of occurrence of each number.*/
#include<conio.h>
#include<stdio.h>
void main()
{
	int j,i,num[100],n, max =-1, currentNumber;
	static int count[100];
	clrscr();
	printf("\n Enter how many number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter number %d:",i+1);
		scanf("%d",&num[i]);  
		if(num[i] > max)
		{
			max = num[i];
		}
	}
	for(i=0;i<n;i++)
	{
		currentNumber = num[i];
		count[currentNumber]++;
	}
	printf("\n Occurrences of entered numbers is:");
	for(currentNumber=0;currentNumber<=max;currentNumber++)
	{
		if(count[currentNumber]!=0)
		{
			printf("\n\n Number %d : Ocurrence count %d",currentNumber,count[currentNumber]);
		}	
	}
	getch();
}
/*
Out put:-
 Enter how many number:5                                                                                                                                       
 Enter number 1:4                                                                                                                                              
 Enter number 2:44                                                                                                                                              
 Enter number 3:4                                                                                                                                               
 Enter number 4:33                                                              
 Enter number 5:3
 Occurrences of entered numbers is:
 Number 4 : Ocurrence count 2
 Number 33 : Ocurrence count 2
 Number 44 : Ocurrence count 1

*/


																				 
																				 
																				 
																				 
																				 
																				 






                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
