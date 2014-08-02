#include<conio.h>
#include<stdio.h>
void main()
{
	
int series =1, i,j,n;
printf("\n Enter value for n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	j=i;
	while(j!=0)
	{

		printf("%5d",series++);
		j--;
	}
	printf("\n");
}
	getch();
}