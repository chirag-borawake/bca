/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q.Create a C++ class for student having following members.
		- Rollno
		- Name
		- Number of subjects
		- Marks of each subject
    (Number of subjects varies for each student)
    Write a parameterized constructor which initializes rollno, name & Number of subjects and creates the array of marks dynamically. Display the details of all students with percentage and class obtained.
*/
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class Student
{
	int rollNo;
	char *name;
	int noOfSub;
	int *marks;
	float per;
	char grade;
	public:
	Student(){};
	Student(int r,char *n, int s)
	{
		rollNo = r;
		name = n;
		noOfSub = s;
	}
	void display(void);
	void getMarks(void);
	void displayMarks(void);
    void calculatePerGrade();
};
void Student::getMarks()
{
	marks = new int[noOfSub];
	for(int i = 0;i < noOfSub;i ++)
	{
		cout<<"\n Enter subject "<<i+1 <<" marks"<<":";
		cin>>marks[i];
	}
}
void Student::displayMarks()
{
	for(int i = 0;i < noOfSub;i ++)
	{
		cout<<"\n Subject "<<i+1 <<" marks"<<":"<<marks[i];
	}
}
void Student :: display()
{
	cout<<"\n Student roll no:"<<rollNo;
	cout<<"\n Student name:"<<name;
	displayMarks();
	cout<<"\n Student percentage:"<<per;
	cout<<"\n Student grade:"<<grade;
}
void Student::calculatePerGrade()
{
	int totMarks = 0;
	for(int i = 0;i < noOfSub;i ++)
	{
		totMarks =totMarks + marks[i];
	}
	per=totMarks/(float)noOfSub;
	if (per >= 70)
	{
		grade ='A';
	}
	else if (per >= 60)
	{
		grade = 'B';
	}
	else if (per >= 40)
	{
		grade='C';
	}
	else
	{
		grade = 'D';
	}
}
main()
{
	char name[10];
	int rno,nos;
	cout<<"\n Enter details of student.";
	cout<<"\n Enter roll no:";
	cin>>rno;
	cout<<"\n Enter name:";
	cin>>name;
	cout<<"\n Enter number of subjects:";
	cin>>nos;
	Student student1 = Student(rno,name,nos);
	student1.getMarks();
	student1.calculatePerGrade();
	cout<<"\n Student information. ";
	student1.display();
	getch();
	return 0;
}
/*
out put:-

 Enter details of student.
 Enter roll no:2012

 Enter name:Chirag

 Enter number of subjects:3

 Enter subject 1 marks:66

 Enter subject 2 marks:75

 Enter subject 3 marks:65

 Student information.
 Student roll no:2012
 Student name:Chirag
 Subject 1 marks:66
 Subject 2 marks:75
 Subject 3 marks:65
 Student percentage:68.666664
 Student grade:B

*/ 