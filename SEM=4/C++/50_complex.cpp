/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Consider a C++ class Complex
    Class Complex
    {
		float real;
		float imaginary; 
	Public:
		//member functions;
    };
Overload operator ‘+’ to add two objects of class complex use parameterized constructor for accepting values of complex numbers.
*/
#include<conio.h>
#include<iostream.h>
class Complex
{
	float real;
	float imaginary; 
	public:
	Complex(){}
	Complex(float x,float y)
	{
		real = x;
		imaginary = y;
	}
	Complex operator+(Complex);
	void display();
};
Complex Complex::operator+(Complex c)
{
	Complex temp;
	temp.real = c.real;
	temp.imaginary = c.imaginary;
	return temp;
} 
void Complex ::display()
{
	cout<<real<<" + i"<<imaginary<<"\n";
}
main()
{
	Complex C1,C2,C3;
	float real,imaginary;
	cout<<"\n Enter first set.";
	cout<<"\n Enter real number:";
	cin>>real;
	cout<<"\n Enter imaginary number:";
	cin>>imaginary;
	C1 = Complex(real,imaginary);
	cout<<"\n Enter second set.";
	cout<<"\n Enter real number:";
	cin>>real;
	cout<<"\n Enter imaginary number:";
	cin>>imaginary;
	C2 = Complex(real,imaginary);
	C3 = C2 + C1;
	cout<<"\n First = ";C1.display();
	cout<<"\n Second = ";C2.display();
	cout<<"\n Addition of first and second."
	cout<<"\n Thired = ";C3.display();
	getch();
	return 0;
}
/*
out put:-

 Enter first set.
 Enter real number:2.1

 Enter imaginary number:1.6

 Enter second set.
 Enter real number:2.6

 Enter imaginary number:3.2

 First = 2.1 + i1.6

 Second = 2.6 + i3.2

 Addition of first and second.

 Thired = 2.1 + i1.6

*/




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
