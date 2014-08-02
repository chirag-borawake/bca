#include<conio.h>
#include<stdio.h>
struct student
{
	int roll_num, mark1, mark2, mark3;
	float ave,total;
	char  stud_name[10];
};
void main()
{
	struct student s[3],temp;
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
		printf("\n Enter mark1:");
		scanf("%d",&s[i].mark1);
		printf("\n Enter mark2:");
		scanf("%d",&s[i].mark2);
		printf("\n Enter mark3:");
		scanf("%d",&s[i].mark3);
		s[i].total=s[i].mark1+s[i].mark2+s[i].mark3;
		s[i].ave=s[i].total/3.00;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].total < s[j].total)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}	
	}
	printf("\n Records fo students in desending order:");
	for(i=0;i<n;i++)
	{
		printf("\n\n Record %d.\n\n",i+1);
		printf("\n Name fo student:%s",s[i].stud_name);
		printf("\n Roll number of student:%d.",s[i].roll_num);
		printf("\n Marks fo student:\n mark1=%d \n mark2=%d \n mark3=%d",s[i].mark1,s[i].mark2,s[i].mark3);
		printf("\n Total fo marks is %.f.",s[i].total);
		printf("\n Average of marks is %.2f.",s[i].ave);
	}
	getch();
}
/*out put :-

 Enter how many records:2

 Enter name:chirag

 Enter roll number:1012

 Enter mark1:19

 Enter mark2:12

 Enter mark3:32

 Enter name:raj

 Enter roll number:1013

 Enter mark1:34

 Enter mark2:54

 Enter mark3:34

 Records fo students in desending order:

 Record 1.


 Name fo student:raj
 Roll number of student:1013.
 Marks fo student:
 mark1=34
 mark2=54
 mark3=34
 Total fo marks is 122.
 Average of marks is 40.67.

 Record 2.


 Name fo student:chirag
 Roll number of student:1012.
 Marks fo student:
 mark1=19
 mark2=12
 mark3=32
 Total fo marks is 63.
 Average of marks is 21.00.


*/