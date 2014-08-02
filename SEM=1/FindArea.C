#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	int select,radius,lenght,breath,base,height,side;
	float area;
	clrscr();
	printf("\n \n \t 1:-Circle");
	printf("\n \t 2:-Rectangle");
	printf("\n \t 3:-Traingle");
	printf("\n \t 4:-Square");
	printf("\n \t Enter selection from 1 ot 4:");
	scanf("%d",&select);
	switch(select)
	{

		case 1:	printf("\n \t Enter value for radius:");
			scanf("%d",&radius);
			area=radius*radius*PI;
			printf("\n Area of circle=%f",area);
			break;
		case 2:
			printf("\n \t Enter value for length:");
			scanf("%d",&lenght);
			printf("\n \t Enter value for breadth:");
			scanf("%d",&breath);
			area=lenght*breath;
			printf("\n \t Area of rectangle=%f square unit",area);
			break;
		case 3:
			printf("\n \t Enter value for base:");
			scanf("%d",&base);
			printf("\n \t Enter value for height:");
			scanf("%d",&height);
			area=base*height/2;
			printf("\n \t Area of traingle=%f square unit",area);
			break;
		case 4:
			printf("\n \t Enter value for side:");
			scanf("%d",&side);
			area=side*side;
			printf("\n \t Area of square=%f square unit",area);
			break;
		default:
			printf("\n \t We exit here.");

	}
	getch();
}
