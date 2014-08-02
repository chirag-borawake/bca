#include<conio.h>
#include<stdio.h>
void main()
{
	int num,binary[30],i=0,j;
	clrscr();
	printf("\n Enter decimal number  ot covert it into binary number:");
	scanf("%d",&num);
	printf("\n Binary  number is:");
	do
	{
		binary[i]=num%2;
		num=num/2;
		i++;
	}while(num!=0);
	for(j=i-1;j>=0;j--)
	{
		printf("%d",binary[j]);
	}
	getch();

}
/*out put :-

 Enter number  decimal numberot covert it into binary number:100                
                                                                                
 Binary  number is: 1 1 0 0 1 0 0                                               
                                                                                
 */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
