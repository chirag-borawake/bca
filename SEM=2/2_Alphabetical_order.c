/*program to accept n names from user and store these names into an array.
Sort these array elements in alphabetical order.*/
#include<conio.h>
#include<stdio.h>
void main()
{
	char *name[10][30],*temp;
	int i,j=0,count=4;
	clrscr();
	printf("\n Enter how many names you want to enter:");
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
		printf("\n Enter name %d:",i+1);
		name[i][0]=malloc(10);
		scanf("%s",name[i][0]);
	}
	printf("\n Entered names are:");
	for(i=0;i<count;i++)
	{
		printf(" %s",name[i][0]);
	}
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(*name[i][0] > *name[j][0])
			{
				temp=name[i][0];
				name[i][0]=name[j][0];
				name[j][0]=temp;
			}
		}
	}
	printf("\n Sorted names are:");
	for(i=0;i<count;i++)
	{
		printf(" %s",name[i][0]);
	}
	getch();
}
/*
Out put:-

 Enter how many names you want to enter:4

 Enter name 1:Rohan

 Enter name 2:Chirag

 Enter name 3:Akshay
                                                                                
 Enter name 4:Lokesh                                                            
                                                                                
 Sorted names are: Akshay Chirag Lokesh Rohan                                   

*/


