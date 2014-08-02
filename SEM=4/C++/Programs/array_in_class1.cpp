#include<conio.h>
#include<iostream.h>
const int size = 10;
class employee
{
	int age;
	char name[10];

   public :
   
    void getData(void);
	void displayData(void);
};
void employee :: getData(void)
{
	cout<<"\n Enter name:";
	cin>>name;
	
	cout<<"\n Enter age:";
	cin>>age;
}
void employee :: displayData(void)
{
	cout<<"\n Name is:"<<name;
	cout<<"\n Age is:"<<age;
}
main()
{
	int i,n;
	employee manager[size];
	clrscr();
	cout<<"\n Enter how many records:";
	cin>>n;
	for(i = 0;i < n ;i++)	
	{
		cout<<"\n Details of manager "<<i+1;
		manager[i].getData();
	}
	for(i = 0;i < n ;i++)	
	{
		cout<<"\n Details of manager "<<i+1;
		manager[i].displayData();
	}
	getch();
	return 0;
}