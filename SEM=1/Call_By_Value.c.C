#include<stdio.h>
#include<conio.h>
void main()
{
	int find_minimum(int,int,int);
	int a,b,c,min;
	printf("\n Enter three number:");
	scanf("%d %d %d",&a,&b,&c);
	min = find_minimum(a,b,c);
	printf("Minimum is %d",min);
	getch();

}
int find_minimum(int i,int j,int k)
{
	int min;
	min=i;
	if(min>j)
	min=j;
	if(min>k)
	min=k;
	return (min);
}