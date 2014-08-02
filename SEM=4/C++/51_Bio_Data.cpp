

/*Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q.Design two base classes Personnel (name, address, email-id, birth date)
and Academic (marks in tenth, marks in twelfth, class obtained).
Derive a class Bio-data from both these classes.
Write a C++ program to prepare a bio-data of a student having
Personnel and Academic information.
*/
#include<iostream.h>
#include<conio.h>
class Personal
{
	protected:
	char name[20];
	char addr[20];
	char email_id[20];
	char b_date[20];
	public:
	void getData();
	void putData();
};
void Personal::getData()
{
	cout<<"\nEnter name:";
	cin>>name;
	cout<<"\nEnter address:";
	cin>>addr;
	cout<<"\nEnter email_id:";
	cin>>email_id;
	cout<<"\nEnter birthdate:";
	cin>>b_date;
}
void Personal::putData()
{
	cout<<"\nPersonal information:"<<endl;
	cout<<"\nName:"<<name;
	cout<<"\nAddress:"<<addr;
	cout<<"\nEmail_id:"<<email_id;
	cout<<"\nBirthdate:"<<b_date;
}
class Academic
{
	protected:
	float mks_10th;
	float mks_12th;
	char grade[20];
	public:
	void getData()
	{
		cout<<"\n Enter Marks in 10th:";
		cin>>mks_10th;
		cout<<"\n Enter Marks in 12th:";
		cin>>mks_12th;
		cout<<"\n Enter Class obtained:";
		cin>>grade;
	}
	void putData()
	{
		cout<<"\nAcademic information:"<<endl;
		cout<<"\nMarks int 10th:"<<mks_10th<<"\n";
		cout<<"\nMarks int 12th:"<<mks_12th<<"\n";
		cout<<"\nClass obtained:"<<grade<<"\n";
	}
};
class Biodata:public Personal,public Academic
{
	public:
	void show()
	{
	  Personal::putData();
	  Academic::putData();
	}
};
void main()
{
	clrscr();
	Biodata B;
	B.Personal::getData();
	B.Academic::getData();
	B.show();
	getch();
}/*
Out Put:-

Enter name:Chirag

Enter address:Pune                                                              
                                                                                
Enter email_id:Borawake.chirag@gmail.com                                        
                                                                                
Enter birthdate:19/8/1993                                                       
                                                                                
 Enter Marks in 10th:64                                                         
                                                                                
 Enter Marks in 12th:52                                                         
                                                                                
 Enter Class obtained:B                                                         
                                                                                
Personal information:
                                                                              
Name:Chirag                                                                     
Address:Pune                                                                    
Email_id:Borawake.chirag@gmai19/8/1993                                          
Birthdate:19/8/1993                                                             
Academic information:                                           
                                                                                
Marks int 10th:64                                                               
                                                                                
Marks int 12th:52                                                               
                                                                                
Class obtained:B                                                                
                                                                                
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
