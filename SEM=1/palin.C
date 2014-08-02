#include<stdio.h>
#include<conio.h>
void main()
{
	int num,temp,rem;
	clrscr();
	printf("\n Enter no:");
	scanf("%d",&num);
	temp=num;
	rem=0;
	while(num>0)
	{
		rem=rem*10+(num%10);
		num=num/10;
		if(num==0)
		break;

	}
	if(rem==temp)
		printf("\n %d is palindrome.",temp);
	else
		printf("\n %d is not palindrome.", temp);
	getch();
}