#include<conio.h>
#include<stdio.h>
void display(struct student *);
struct student
{
	int roll_no;
	char stud_name[9],Class[9];
}s;
void main()
{
	printf("\n Enter roll number:");
	scanf("%d",&s.roll_no);
	printf("\n Enter student name:");
	scanf("%s",s.stud_name);
	printf("\n Enter class:");
	scanf("%s",s.Class);
	display(&s);
	getch();
}
void display(struct student *s)
{
	printf("\n Roll number:%d",s->roll_no);
	printf("\n Student name:%s",s->stud_name);
	printf("\n Class:%s",s->Class);
}
/*
out put:-

 Enter roll number:1012

 Enter student name:chirah

 Enter class:FY

 Roll number:1012
 Student name:chirah
 Class:FY
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
