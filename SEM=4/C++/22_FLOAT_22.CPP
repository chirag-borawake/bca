/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Create a C++ class Float that contains one float data member. Overload the unary increment ++ operator.
*/
#include<conio.h>
#include<iostream.h>
class Float
{
	float num;
	public:
	void getNum()
	{
		cout<<"\n Enter flaot number:";
		cin>>num;
	}
	void putNum()
	{
		cout<<" "<<num;
	}
	void operator++();
};
void Float ::operator++()
{
       num++;
}
main()
{
	Float f;
	f.getNum();
	cout<<"\n Given number:";
	f.putNum();
	++f;
	cout<<"\n After increment number is:";
	f.putNum();
	getch();
	return 0;
}

/*out put:-

 Enter flaot number:3.44

 Given number: 3.44
 After increment number is: 4.44
*/
