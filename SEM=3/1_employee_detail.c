/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q)Write a ‘C’ program using data structure to accept the details of employees from user and display it on the   screen using Dynamic Memory Allocation.

*/
#include<conio.h>
#include<stdio.h>
struct node
{
	int sal;
	char name[10];
	char city[10];
}employee[10];
int n;
void main()
{
	void display();
	void getEmployeeDetail();
	printf("\n Enter how many record:");
	scanf("%d",&n);
	printf("\n Enter employee detail" );
	getEmployeeDetail();
	display();
	getch();
}
void getEmployeeDetail()
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n Enter employee name:");
		scanf("%s",&employee[i].name);
		printf("\n Enter employee city:");
		scanf("%s",&employee[i].city);
		printf("\n Enter employee salary:");
		scanf("%d",&employee[i].sal);
	}
}
void display()
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n\n Employee record:%d.",i+1);
		printf("\n Employee name:%s",employee[i].name);
		printf("\n Employee city:%s",employee[i].city);
		printf("\n Employee salary:%d",employee[i].sal);
	}
}
/* Out put:-

 Enter how many record:2

 Enter employee detail
 Enter employee name:Chirag

 Enter employee city:Solapur

 Enter employee salary:3000

 Enter employee name:Rohan

 Enter employee city:Kolhapur

 Enter employee salary:4500


 Employee record:1.
 Employee name:Chirag
 Employee city:Solapur
 Employee salary:3000

 Employee record:2.
 Employee name:Rohan
 Employee city:Kolhapur
 Employee salary:4500
*/















                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
