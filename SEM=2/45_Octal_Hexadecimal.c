#include<conio.h>
#include<stdio.h>
void main()
{
	int select,num,Octal[30],hexadecimal[30],i=0,j;
	clrscr();
	printf("\n 1:Convert Decimal number covert it to Octal number.");
	printf("\n 2:Convert Decimal number convert it to Hexadecimal number.");
	printf("\n Enter your selection:");
	scanf("%d",&select);
	switch(select)
	{
		case 1:
			printf("\n Enter decimal number: ");
			scanf("%d",&num);
			do
			{
				Octal[i]=num%8;
				num=num/8;
				i++;
			}while(num!=0);
			printf("\n Octal number is:");
			for(j=i-1;j>=0;j--)
			{
				printf("%o",Octal[j]);
			}
			break;
		case 2:
			printf("\n Enter decimal number: ");
			scanf("%d",&num);
			do
			{
				hexadecimal[i]=num%16;
				num=num/16;
				i++;
			}while(num!=0);
			printf("\n Hexadecimal  number is:");
			for(j=i-1;j>=0;j--)
			{
				switch(hexadecimal[j])
				{
					case 10:
						printf("%c", 'A');
					break;
					case 11:
						printf("%c", 'B');
					break;
					case 12:
						printf("%c", 'C');
					break;
					case 13:
						printf("%c", 'D');
					break;
					case 14:
						printf("%c", 'E');
					break;
					case 15:
						printf("%c", 'F');
					break;
					default:
						printf("%d", hexadecimal[j]);
				}
			}
	}
	getch();
}

/*
out put:-

 1:Convert Decimal number covert it to Octal number.
 2:Convert Decimal number convert it to Hexadecimal number.
 Enter your selection:1

 Enter decimal number: 123

 Octal number is:173
out put 2:-

 1:Convert Decimal number covert it to Octal number.                            
 2:Convert Decimal number convert it to Hexadecimal number.                     
 Enter your selection:2                                                         
                                                                                
 Enter decimal number: 213                                                      
                                                                                
 Hexadecimal  number is:D5                                                      
                                                                                
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
