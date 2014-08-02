/* program to find the union & intersection of two sets of integers.*/
#include<stdio.h>
#include<conio.h>
#define FALSE 0
#define TRUE 1
int is_already_added(int,int,int*);
void main()
{
	int a,b,i,j,index=0,is_added,set_A[30],set_B[30],Union[60],inter[30];
	clrscr();
	printf("\n In set A how many numbers you want to add:");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("\n Enter number %d:",i+1);
		scanf("%d",&set_A[i]);
	}
	printf("\n In set B how many numbers you want to add:");
	scanf("%d",&b);
	for(j=0;j<b;j++)
	{
		printf("\n Enter number %d:",j+1);
		scanf("%d",&set_B[j]);
	}	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(set_A[i]==set_B[j])
			{
				inter[index++]=set_A[i];
			}
		}
	}
	printf("\n\n Given set A={");
	for(i=0;i<a-1;i++)
	{
		printf("%d,",set_A[i]);
	}
	printf("%d",set_A[a-1]);
	printf("}");
	
	printf("\n\n Given set B={");
	for(i=0;i<b-1;i++)
	{
		printf("%d,",set_B[i]);
	}
	printf("%d",set_B[b-1]);
	printf("}");
	if(index!=0)
	{
		printf("\n\n Intersection of two set A&B:");
		printf(" A^B={");
		for(i=0;i<index-1;i++)
		{
			printf("%d,",inter[i]);
		}
		printf("%d",inter[index-1]);
		printf("}");
	}
	else
	{
			printf("\n\n Intersection of two sets is phi");
	}
	/* Logic of union*/
	index=0;
	for(i=0;i<a;i++)
	{
		Union[index++]=set_A[i];
	}
	for(i=0;i<b;i++)
	{
		is_added=is_already_added(set_B[i],a,set_A);
		if(!is_added)
		{
			Union[index++]=set_B[i];
		}
	}
	printf("\n\n Union of two set A&B:");
	printf(" AUB={");
	for(i=0;i<index-1;i++)
	{
		printf("%d,",Union[i]);
	}
	printf("%d",Union[index-1]);
	printf("}");
	getch();
}
int is_already_added(int element,int count,int *set)
{
	int i;
	for(i=0;i<count;i++)
	{
		if(element==set[i])
		{
			return(TRUE); 
		}
	}
	return(FALSE);
}
 /*
 Out put:-

 In set A how many numbers you want to add:8                                    
                                                                                
 Enter number 1:1                                                               
                                                                                
 Enter number 2:7                                                               
                                                                                
 Enter number 3:3                                                               
                                                                                
 Enter number 4:4                                                               
                                                                                
 Enter number 5:2                                                               
                                                                                
 Enter number 6:11
                                                                                
 Enter number 7:9                                                               
                                                                                
 Enter number 8:10                                                              
                                                                                
 In set B how many numbers you want to add:6                                    
                                                                                
 Enter number 1:1                                                               
                                                                                
 Enter number 2:6                                                               
                                                                                
 Enter number 3:4                                                               
                                                                                
 Enter number 4:3                                                               
                                                                                
 Enter number 5:8                                                               
                                                                                
 Enter number 6:11                                                              
                                                                                
                                                                                
 Given set A={1,7,3,4,2,11,9,10}                                                
                                                                                
 Given set B={1,6,4,3,8,11}                                                     
                                                                                
 Intersection of two set A&B: A^B={1,3,4,11}                                    
                                                                                
 Union of two set A&B: AUB={1,7,3,4,2,11,9,10,6,8}                              
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

 */