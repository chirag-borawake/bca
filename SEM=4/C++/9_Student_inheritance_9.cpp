/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Create a base class Student(Roll No, Name)  which derives two classes Test (Mark1, Mark2)  
    and Sport(Score). Result(total marks, grade) class inherits both Test and Sport classes. 
     Write a C++ menu driven program to perform the following functions:
-	Build a master table
-	Calculate total of marks and grade
-	Display the details of all students in ascending order of marks.
*/
#include<conio.h>
#include<iostream.h>
class Student
{
	protected:
	int rollNo;
	char name[20];
	public:
	void getData()
	{
		cout<<"\n Enter roll number:";
		cin>>rollNo;
		cout<<"\n Enter name:";
		cin>>name;
	}
	void displayData()
	{
		cout<<"\n Roll number:"<<rollNo;
		cout<<"\n Name:"<<name;
	}
};
class Test :virtual public Student
{
	protected:
	int mark_1;
	int mark_2;
	public:
	void getMarks()
	{
		cout<<"\n Enter mark 1:";
		cin>>mark_1;
		cout<<"\n Enter mark 2:";
		cin>>mark_2;

	}
	void displayMarks()
	{
		cout<<"\n Mark 1:"<<mark_1;
		cout<<"\n Marks 2:"<<mark_2;
	}
};
class Sport :virtual public Student
{
	protected:
	int score;
	public:
	void getScore()
	{
		cout<<"\n Enter sport score:";
		cin>>score;
	}
	void displayScore()
	{
		cout<<"\n Sport score:"<<score;
	}
};
class Result :public Test,public Sport
{
	protected:
	int totMarks;
	char grade;
	public:
	void calculateMarksGrade();
	void displayMarksGrade();
	void swap(Result*,int);
};
void Result::calculateMarksGrade()
{
	totMarks = mark_1 + mark_2;
	if (totMarks >= 70)
	{
		grade ='A';
	}
	else if (totMarks >= 50)
	{
		grade = 'B';
	}
	else
	{
		grade='C';
	}
}
void Result::displayMarksGrade()
{
	cout<<"\n Total marks:"<<totMarks;
	cout<<"\n Grade:"<<grade;
}
void Result:: swap(Result *student,int n)
{
	Result temp;
	int i,j;
	for(i = 0; i < n ;i ++)
	{
		for(j = i; j < n ; j ++)
		{
			if(student[i].totMarks < student[j].totMarks)
			{
				temp=student[i];
				student[i] = student[j];
				student[j]=temp;
			}
		}
	}
}
int getChoice()
{
	int choice;
	cout<<"\n 1:Build a master table.";
	cout<<"\n 2:Calculate total of marks and grade.";
	cout<<"\n 3:Display the details of all students in ascending order of marks.";	
	cout<<"\n 4:Exit.";	
	cout<<"\n Enter your choice:";
	cin>>choice;
	return choice;
}
main()
{
	Result student[10],result[10],temp;
	Sport sport[10];
	Test test[10];
	int choice,i,n,j;
	clrscr();
	do
	{
		choice=getChoice();
		switch(choice)
		{
			case 1:
			cout<<"\n Enter how many records:";
			cin>>n;
			for(i = 0; i < n ;i ++)
			{
				cout<<"\n Entre record "<<i+1;
				student[i].getData();
				student[i].getMarks();
				student[i].getScore();
			}
			break;
			case 2:
			for(i = 0; i < n ;i ++)
			{	
				cout<<"\n Record "<<i+1<<"\n";
				student[i].displayData();
				student[i].displayMarks();
				student[i].displayScore();
				student[i].calculateMarksGrade(); 
				student[i].displayMarksGrade();
			}
			break;
			case 3:
			temp.swap(student,n);
			for(i = 0; i < n ;i ++)
			{
				cout<<"\n Record "<<i+1<<"\n";
				student[i].displayData();
				student[i].displayMarks();
				student[i].displayScore();
				student[i].displayMarksGrade();
			}
			break;
		}
	}while(choice!=4);
	getch();
	return 0;
}
/* Out Put:-
1:Build a master table.
 2:Calculate total of marks and grade.
 3:Display the details of all students in ascending order of marks.
 4:Exit.
 Enter your choice:1
 Enter how many records:3
 Entre record 1
 Enter roll number:2012
 Enter name:Chirag
 Enter mark 1:69
 Enter mark 2:67
 Enter sport score:89
 Entre record 3
 Enter roll number:2123
 Enter name:Lokesh
 Enter mark 1:70
 Enter mark 2:71
 Enter sport score:68
 Entre record 3
 Enter roll number:2080
 Enter name:Akshay
 Enter mark 1:50
 Enter mark 2:57
 Enter sport score:45

 1:Build a master table.
 2:Calculate total of marks and grade.
 3:Display the details of all students in ascending order of marks.
 4:Exit.
 Enter your choice:2

 Record 1

 Roll number:2012
 Name:Chirag
 Mark 1:69
 Marks 2:67
 Sport score:89
 Total marks:136
 Grade:A
 
 Record 2
 Roll number:2123
 Name:Lokesh
 Mark 1:70
 Marks 2:71
 Sport score:68
 Total marks:141
 Grade:A
 
 Record 3
 Roll number:2080
 Name:Akshay
 Mark 1:50
 Marks 2:57
 Sport score:45
 Total marks:107
 Grade:A
 1:Build a master table.
 2:Calculate total of marks and grade.
 3:Display the details of all students in ascending order of marks.
 4:Exit.
 Enter your choice:3
 All records in ascending order.
 
  Record 1
 Roll number:2123
 Name:Lokesh
 Mark 1:70
 Marks 2:71
 Sport score:68
 Total marks:141
 Grade:A
 Record 2

 Roll number:2012
 Name:Chirag
 Mark 1:69
 Marks 2:67
 Sport score:89
 Total marks:136
 Grade:A
 
 
 Record 3
 Roll number:2080
 Name:Akshay
 Mark 1:50
 Marks 2:57
 Sport score:45
 Total marks:107
 Grade:A
 
 */
