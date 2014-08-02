/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Create a C++ class student containing data members:
		- Rollno
    	- name  
 	    -marks1, marks2, marks3
 Write necessary member functions:
   1. to accept details of all students
   2. to display details of one student 
   3. to display details of  all students
 (Use Function overloading).
 */
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iostream.h>

class Student
{
	int rollNo;
	char name[10];
	int m1,m2,m3;
	public:
	void display(void);
	void getData(void);
	void displayDetails(Student *,char *,int);
	void displayDetails(Student *,int);
};
void Student::getData()
{
	cout<<"\n Enter roll no:";
	cin>>rollNo;
	cout<<"\n Enter name:";
	cin>>name;
	cout<<"\n Enter marke1:";
	cin>>m1;
	cout<<"\n Enter marke2:";
	cin>>m2;
	cout<<"\n Enter marke3:";
	cin>>m3;
}
void Student :: display()
{
	cout<<" "<<rollNo;
	cout<<"\t\t "<<name;
	cout<<"\t"<<m1;
	cout<<"\t"<<m2;
	cout<<"\t"<<m3<<"\n";
}
void Student :: displayDetails(Student *students,char *name,int n)
{
	int isPresent = 0;
	for(int i=0;i <n ;i++)
	{

		if(strcmp(students -> name,name) == 0)
		{
			isPresent = 1;
			students -> display();
			break;
		}
		students++;
	}
	if(!isPresent)
	{
		cout<<"\n No record present as:"<<name;
	}
}
void Student :: displayDetails(Student *students,int n)
{
	for(int i=0;i <n ;i++)
	{
		students -> display();
		students ++;
	}
}
int getChoice()
{
	int choice;
	cout<<"\n 1:To accept details of all students.";
	cout<<"\n 2:To display details of one student. ";
	cout<<"\n 3:To display details of  all students.";
	cout<<"\n 4:Exit.";
	cout<<"\n Entre your choice:";
	flushall();
	cin>>choice;
	return choice;
}
main()
{
	Student students[10],s;
	char sname[10];
	int n,i,choice;
	do
	{
		choice = getChoice();
		switch(choice)
		{
			case 1:
			cout<<"\n Enter how many students records:";
			cin>>n;
			for(i = 0;i < n;i ++)
			{
				cout<<"\n Enter details of student "<<i+1;
				students[i].getData();
			}
			break;

			case 2:
			cout<<"\n Enter which student ditails want to display:";
			cin>>sname;
			cout<<"\n Roll No \tName\tMarks1\tMarks2\tMarks3\n";
			s.displayDetails(students,sname,n);
			break;

			case 3:
			cout<<"\n Student information. ";
			cout<<"\n Roll No  \tName\tMarks1\tMarks2\tMarks3\n";
			s.displayDetails(students,n);
			break;
		}
	}while(choice != 4);
	getch();
	return 0;
}
 /*
Out put :-

 1:To accept details of all students.
 2:To display details of one student.
 3:To display details of  all students.
 4:Exit.
 Entre your choice:1

 Enter how many students records:2

 Enter details of student 1
 Enter roll no:1

 Enter name:Chirag

 Enter marke1:56

 Enter marke2:76

 Enter marke3:54

 Enter details of student 2
 Enter roll no:2

 Enter name:Akshay

 Enter marke1:65

 Enter marke2:45

 Enter marke3:77

 1:To accept details of all students.
 2:To display details of one student.
 3:To display details of  all students.
 4:Exit.
 Entre your choice:2

 Enter which student ditails want to display:Chirag

 Roll No  Name       Marks1  Marks2  Marks3
 1        Chirag     56      76      54

 1:To accept details of all students.
 2:To display details of one student.
 3:To display details of  all students.
 4:Exit.
 Entre your choice:3

 Student information.
 Roll No  Name       Marks1  Marks2  Marks3
 1        Chirag     56      76      54
 2        Akshay     65      45      77

 1:To accept details of all students.
 2:To display details of one student.
 3:To display details of  all students.
 4:Exit.
 Entre your choice:4


*/