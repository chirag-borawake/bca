#include<conio.h>
#include<stdio.h>
struct student
{
	int roll_num, mark1, mark2, mark3;
	float per,total;
	char  stud_name[10],stud_addr[20];
};
void main()
{
	struct student s[3];
	int n,i,j;
	clrscr();
	printf("\n Enter how many records:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter name:");
		scanf("%s",s[i].stud_name);
		printf("\n Enter roll number:");
		scanf("%d",&s[i].roll_num);
		printf("\n Enter addres:");
		scanf("%s",&s[i].stud_addr);
		printf("\n Enter mark1:");
		scanf("%d",&s[i].mark1);
		printf("\n Enter mark2:");
		scanf("%d",&s[i].mark2);
		printf("\n Enter mark3:");
		scanf("%d",&s[i].mark3);
		s[i].total=s[i].mark1+s[i].mark2+s[i].mark3;
		s[i].per=s[i].total/3.00;
	}
	printf("\n Records fo students:");
	for(i=0;i<n;i++)
	{
		printf("\n\n Record %d.\n\n",i+1);
		printf("\n Name fo student:%s",s[i].stud_name);
		printf("\n Roll number of student:%d.",s[i].roll_num);
		printf("\n Marks fo student:\n mark1=%d \n mark2=%d \n mark3=%d",s[i].mark1,s[i].mark2,s[i].mark3);
		printf("\n Total fo marks is %.f.",s[i].total);
		printf("\n Persentage of marks is %.2f.",s[i].per);
	}
	getch();
}
/*

 Enter how many records:1

 Enter name:Chirag

 Enter roll number:1012

 Enter addres:pune

 Enter mark1:45

 Enter mark2:6

 Enter mark3:57

 Records fo students:

 Record 1.


 Name fo student:Chirag
 Roll number of student:1012.
 Marks fo student:
 mark1=45
 mark2=6
 mark3=57
 Total fo marks is 108.
 Persentage of marks is 36.00.
*/




















                                                                                
