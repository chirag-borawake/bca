/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 41) Write a ‘C’ program to sort the records of ‘n’ employees on key employee-number using insertion sort method.

*/
#include<conio.h>
#include<stdio.h>
struct node
{
	int sal;
	int no;
	char name[10];
	char city[10];
}employee[10],temp;
int n;
void main()
{
	void display();
	void getEmployeeDetail();
	void sort();
	printf("\n Enter how many record:");
	scanf("%d",&n);
	printf("\n Enter employee detail" );
	getEmployeeDetail();
	sort();
	display();
	getch();
}
void getEmployeeDetail()
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n Enter employee number:");
		scanf("%d",&employee[i].no);
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
		printf("\n Employee number:%d",employee[i].no);
		printf("\n Employee name:%s",employee[i].name);
		printf("\n Employee city:%s",employe[i].>city);
		printf("\n Employee salary:%d",employee[i].sal);
	}
}
void sort()
{
	int i,j,k;
	for(i=1;i<n;i++)
	{
		for(j=0;j<1;j++)
		{
			if(employee[j].no > employee[i].no)
			{
				temp=employee[j];
				employee[j]=employee[i];
				for(k=i;k>j;k--)
				{
					employee[k]=employee[k-1];
				}
				employee[k+1]=temp;
			}
		}
	}
}
/*


 Enter how many record:3                                                        
                                                                                
 Enter employee detail                                                          
 Enter employee number:2                                                        
                                                                                
 Enter employee name:Chirag                                                     
                                                                                
 Enter employee city:Solapur                                                    
                                                                                
 Enter employee salary:300                                                      
                                                                                
 Enter employee number:1                                                        
                                                                                
 Enter employee name:Rohan                                                      
                                                                                
 Enter employee city:Kolhapur                                                   
                                                                                
 Enter employee salary:3500                                                     
                                                                                
 Enter employee number:3
                                                                                
 Enter employee name:Akshay                                                     
                                                                                
 Enter employee city:Nanded                                                     
                                                                                
 Enter employee salary:300                                                      
                                                                                
                                                                                
 Employee record:1.                                                             
 Employee number:1                                                              
 Employee name:Rohan                                                            
 Employee city:Kolhapur                                                         
 Employee salary:3500                                                           
                                                                                
 Employee record:2.                                                             
 Employee number:2
 Employee name:Chirag
 Employee city:Solapur
 Employee salary:3000

 Employee record:3.
 Employee number:3
 Employee name:Akshay
 Employee city:Nanded
 Employee salary:300

*/

