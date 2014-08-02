 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	int roll_Number[5],i,sum=0,diff=0;
	for(i=0;i<5;i++)
	{
		printf("\n Enter roll number:");
		scanf("%d",&roll_Number[i]);
		printf("\n %d",roll_Number[i]);
	}
	for(i=0;i<5;i++)
	{
		diff=roll_Number[0]-roll_Number[1];
		sum=sum+diff;
	}
	printf("\n %d",sum);
	getch();
 }
