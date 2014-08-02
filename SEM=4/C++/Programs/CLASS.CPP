#include<iostream.h>
#include<conio.h>
class person
{
	char name[10];
	int age;
	public :
 	void getData(void);
	void display(void);
};
void person::getData(void)
{
	cout<<"\n Enter name:";
	cin>>name;
	cout<<"\n Enter age:";
	cin>>age;
}
void person :: display(void)
{
	cout <<"\n Name :"<<name;
	cout <<"\n Age :"<<age;
}
main()
{
	person p;
	clrscr();
	p.getData();
	p.display();
	getch();
	return 0;
}
