/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Create a class Student having data members:
 - RollNo
 - Name
 - Marks
  Write necessary member functions :
1. to accept the details and store it into the file school.dat
2. to read the details from file and display it.
3. to update a given record into the file.
*/
#include<iostream.h>
#include<conio.h>
#include<fstream.h>

class student
{
   int rollno;
   char name[40];
   float marks;
   public:
 void accept()
 {
 cout<<"\n\nEnter rollno : ";
 cin>>rollno;
 cout<<"\nEnter name : ";
 cin>>name;
 cout<<"\nEnter marks : ";
 cin>>marks;
 }
  void display()
 {
 cout<<"\n\nrollno : ";
 cout<<rollno;
 cout<<"\nname : ";
 cout<<name;
 cout<<"\nmarks : ";
 cout<<marks;
 }
int rrollno()
{
	return rollno;
}
}; 
void main()
{
clrscr();
fstream iopf;
iopf.open("c:\\school.dat",ios::ate|ios::in|ios::out|ios::binary|ios::trunc);
 
int n;
student *s,p;
cout<<"\n\nHow many students?\t: ";
cin>>n;
s = new student[n];
for(int i=0;i<n;i++)
{
	s[i].accept();
	iopf.write((char *)&s[i],sizeof(s[i]));
}
cout<<"\n\noutput : ";
iopf.seekg(0,ios::beg);
for( i=0;i<n;i++)
{
	iopf.read((char *)& p,sizeof(p));
	p.display();
}
int rn,flag;
char ans='y';
while(ans=='y' || ans=='Y')
{
	iopf.seekg(0,ios::beg);
	cout<<"\n\nEnter rollno to be updated : ";
	cin>>rn;
 
	for(i=flag=0;i<n;i++)
	{
		iopf.read((char *)& p,sizeof(p));
		if(p.rrollno()==rn)
		{
			cout<<"\nCurrent data of this student is\n";
			p.display();
			flag=1;
			break;		 
		}
	} 
	if(flag==0)
	{
		cout<<"\nSorry... No such student present";
		continue;
	}
	 
	int location=i*sizeof(p);
	iopf.seekp(location,ios::beg);
	cout<<"\nEnter new values : ";
	p.accept();
	iopf.write((char *)&p,sizeof(p));
	cout<<"\n\noutput : ";
	iopf.seekg(0,ios::beg);
	for( i=0;i<n;i++)
	{
		iopf.read((char *)& p,sizeof(p));
		p.display();
	}
	cout<<"\n\nDo you want to update record Y/N : ";
	cin>>ans;
} 
iopf.close();
cout<<"\nProgram ending....Thanks....";
getch();
} 
/*out put:_


How many students?      : 1


Enter rollno : 1

Enter name : Chirag

Enter marks : 56


output :                                                                        
                                                                                
rollno : 1                                                                      
name : Chirag                                                                   
marks : 56                                                                      
                                                                                
Enter rollno to be updated : 1                                                  
                                                                                
Current data of this student is                                                 
                                                                                
                                                                                
rollno : 1                                                                      
name : Chirag                                                                   
marks : 56                                                                      
Enter new values :                                                              
                                                                                
Enter rollno : 3                                                                
                                                                                
Enter name : Lokesh                                                             
                                                                                
Enter marks : 65                                                                
                                                                                
                                                                                
output :                                                                        
                                                                                
rollno : 3                                                                      
name : Lokesh                                                                   
marks : 65                                                                      
                                                                                
Do you want to update record Y/N : N                                            
                                                                                
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
