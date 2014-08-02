#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c,temp,answer1,answer2,temp_1;
	clrscr();
	printf("\n Enter value for a:");
	scanf("%f",&a);
	printf("\n Enter value for b:");
	scanf("%f",&b);
	printf("\n Enter value for c:");
	scanf("%f",&c);
	temp_1=(b*b-4*a*c);
	if(temp_1<0)
	{
		printf("\n Roots are emaginary.");
	}
	else
	{
		temp=sqrt(b*b-4*a*c);
		answer1=(-b+temp)/2*a;
		answer2=(-b-temp)/2*a;
		printf("\n Frist root is %.1f.",answer1);
		printf("\n Second root is %.1f.",answer2);
	}	
		getch();
}