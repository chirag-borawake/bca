#include<conio.h>
#include<stdio.h>
struct student
{
	char  stud_name[10],address[20];
};
void main()
{
	struct student s[5],temp;
	int n,i,j;
	clrscr();
	printf("\n Enter how many records:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter record number %d.",i+1);
		printf("\n Enter name:");
		scanf("%s",s[i].stud_name);
		printf("\n Enter address:");
		scanf("%s",&s[i].address);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].stud_name[0] > s[j].stud_name[0])
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
		printf("\n\n Record number %d.\n",i+1);
		printf("\n Name fo student:%s",s[i].stud_name);
		printf("\n Address of student:%s",s[i].address);
	}
	getch();
}
/*

 Enter how many records:2

 Enter record number 1.
 Enter name:chirag

 Enter address:solapur

 Enter record number 2.
 Enter name:raj

 Enter address:mumbai

 Records fo students in desending order:

 Record number 1.

 Name fo student:chirag
 Address of student:solapur

 Record number 2.

 Name fo student:raj
 Address of student:mumbai

*/



















                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
