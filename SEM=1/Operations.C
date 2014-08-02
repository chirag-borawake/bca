/*Program of switch statement*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int select,no1,no2,add,sub,mul,div;
		printf("\n 1.Add");
		printf("\n 2.Subtract");
		printf("\n 3.Multiply");
		printf("\n 4.Divide");
		printf("\n 5.Exit");
		printf("\n Enter selection from 1 to 5:");
		scanf("%d",&select);
		switch(select)
		{

			case 1:
				printf("\n Enter values for no1 & no2:");
				scanf("%d %d",&no1,&no2);
				add=no1+no2;
				printf("Addition of %d and %d=%d",no1,no2,add);
			break;

			case 2:

				printf("\n Enter values for no1 & no2:");
				scanf("%d %d",&no1,&no2);
				sub=no1-no2;
				printf("Subtraction of %d and %d=%d",no1,no2,sub);
			break;



			case 3:

				 printf("\n Enter values for no1 & no2:");
				 scanf("%d %d",&no1,&no2);
				 mul=no1*no2;
				 printf("Multiplication of %d and %d=%d",no1,no2,mul);
			break;



			case 4:

				printf("\n Enter values for no1 & no2:");
				scanf("%d %d",&no1,&no2);
				div=no1/no2;
				printf("Division of  %d and %d=%d",no1,no2,div);
			break;


			case 5:exit(0);
			default: printf("\n Enter currect option.");

		}
   getch();
}


