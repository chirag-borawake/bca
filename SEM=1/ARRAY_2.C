#include<stdio.h>
#include<conio.h>
void main()
{
	int stud[4][4];
	int i;
	for(i=0;i<=3;i++)
	{
		printf("\n Enter rollnumber and marks:");
		scanf("%d %d %d %d",&stud[i][0],&stud[i][1],&stud[i][2],&stud[i][3]);
	}
	for(i=0;i<=3;i++)
	{
		printf("\n %d %d %d %d",stud[i][0],stud[i][1],stud[i][2],stud[i][3]);
	}
	getch();
}
