#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,no3;
	printf("\n Enter frist number:");
	scanf("%d",&no1);
	printf("\n Enter second number:");
	scanf("%d",&no2);
	printf("\n Enter third number:");
	scanf("%d",&no3);
	if((no1>no2)&&(no1>no3))
		printf("\n Frist number is maximum =%d.",no1);
	else if((no2>no1)&&(no2>no3))
		printf("\n Second number is maximum =%d.",no2);
	else if
		(printf("\n Third number is maximum =%d.",no3));
	if((no1<no2)&&(no1<no3))
		printf("\n And\n Frist number is minimum =%d.",no1);
	else if((no2<no1)&&(no2<no3))
		printf("\n And \n Second number is minimum =%d.",no2);
	else if
		(printf("\n And \n Third number is minimum =%d.",no3));
	getch();

}
