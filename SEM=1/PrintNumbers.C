#include<stdio.h>
#include<conio.h>
void main()
{
	int no,sum;
	clrscr();
	printf("\n Enter number:");
	scanf("%d",&no);
	sum=0;
	if(no==0)
	printf("Zero.");
	while(no>0)
	{
		sum=(sum*10)+(no%10);
		no=no/10;
	}
	while(sum>0)
	{
		switch(sum%10)
		{
			case 1:printf(" One");
				break;
			case 2:printf(" Two");
				break;
			case 3:printf(" Three");
				break;
			case 4:printf(" Four");
				break;
			case 5:printf(" Five");
				break;
			case 6:printf(" Six");
				break;
			case 7:printf(" Seven");
				break;
			case 8:printf(" Eight");
				break;
			case 9:printf(" Nine");
				break;
			case 0:printf(" Zero");
				break;
		}
		sum=sum/10;
	}
	getch();
}