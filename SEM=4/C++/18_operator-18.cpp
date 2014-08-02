/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Consider following C++ class 
    Class Numbers
    {
	int x;
	int y;
	int z;
	public:
		// member functions
    };
    Overload the operator unary minus- to negate the numbers.
*/
#include<conio.h>
#include<iostream.h>
class Digits
{
	int x;
	int y;
	int z;
	public:
	void getData()
	{
		cout<<"\n Enter value for x:";
		cin>>x;
		cout<<"\n Enter value for y:";
		cin>>y;
		cout<<"\n Enter value for z:";
		cin>>z;
	}
	void display()
	{
		cout<<"\n Value of x:"<<x;
		cout<<"\n Value of y:"<<y;
		cout<<"\n Value of z:"<<z;
	}
	void operator-();
};
void Digits:: operator-()
{
	x = - x;
	y = - y;
	z = - z;
}
main()
{
	Digits digits;
	clrscr();
	digits.getData();
	digits.display();
	-digits;
	cout<<"\n After negating values.\n";
	digits.display();
	getch();
	return 0;
}

/*
 Enter value for x:3

 Enter value for y:4

 Enter value for z:5

 Value of x:3
 Value of y:4
 Value of z:5
 After negating values.

 Value of x:-3
 Value of y:-4
 Value of z:-5

*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
