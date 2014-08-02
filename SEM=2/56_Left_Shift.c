#include<conio.h>
#include<stdio.h>
void main()
{
	int num,num1,select,complement,Right_Shift,Left_Shift;
	clrscr();
	printf("\n 1:Right Shift.");
	printf("\n 2:Left Shift.");
	printf("\n 3:One’s complement.");
	printf("\n Enter selection from 1 to 3:");
	scanf("%d",&select);
	switch(select)
	{
		case 1:
			printf("\n Enret number 1:");
			scanf("%d",&num);
			printf("\n Enter number2:");
			scanf("%d",&num1);
			Right_Shift=num>>num1;
			printf("\n Result is %d.",Right_Shift);
			break;
		case 2:
			printf("\n Enret number 1:");
			scanf("%d",&num);
			printf("\n Enter number2:");
			scanf("%d",&num1);
			Left_Shift=num<<num1;
			printf("\n Result is %d.",Left_Shift);
			break;
		case 3:
			printf("\n Enret number:");
			scanf("%d",&num);
			complement=~num;
			printf("\n Result is %d.",complement);
			break;
		default:printf("\n We exit here.");
	}

	getch();
}
/* out put:-

 1:Right Shift.
 2:Left Shift.
 3:One’s complement.
 Enter selection from 1 to 3:1

 Enret number 1:23

 Enter number2:2

 Result is 5.
*/





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
