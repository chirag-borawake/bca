/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q. Create a C++ class Array which contains 
- int *ptr
- int n
     Write a menu driven program :
- to Accept an array from user
- to display it.
- to add two arrays using operator overloading.
- to subtract two arrays using operator overloading.  
*/ 
#include<conio.h>
#include<iostream.h>
#include<process.h>
class Array
{
	int *ptr;
	int n;
	public:
	void getArray();
	void putArray();
	Array operator+(Array);
	Array operator-(Array);
};

void Array ::getArray()
{
	cout<<"\n Enter how many elements in array:";
	cin>>n;
	for( int i = 0; i < n ;i ++)
	{
		cout<<"\n Enter element "<<i+1<<":";
		cin>>*(ptr+i);
	}
}
void Array :: putArray()
{
	cout<<"\n Array elements:";
	for( int  i = 0; i < n ;i ++)
	{
		cout<<" "<<*(ptr+i);
	}
}
Array Array :: operator+(Array a1)
{
	Array temp;
	temp.ptr = new int(this->n);
	temp.n = this -> n;
	for( int  i = 0; i < this->n ;i ++)
	{
		*(temp.ptr+i)=*(this->ptr + i) + *(a1.ptr + i);
	}
	return temp;
}
Array Array :: operator-(Array a1)
{
	Array temp;
	temp.ptr = new int(this->n);
	temp.n = this -> n;
	for( int  i = 0; i < this -> n ;i ++)
	{
		*(temp.ptr+i)=*(this->ptr + i) - *(a1.ptr + i);
	}
	return temp;
}
int getChoice()
{
	int choice;
	cout<<"\n 1:To Accept an array from user";
	cout<<"\n 2:To display it.";
	cout<<"\n 3:To add two arrays using operator overloading.";
	cout<<"\n 4:To subtract two arrays using operator overloading.";
	cout<<"\n 5:Exit";
	cout<<"\n Enter your choice:";
	cin>>choice;
	void flushall();
	return choice;
}
 void main()
{
	Array A,A1,A2,A3;
	int choice;
	clrscr();
	do
	{
		choice = getChoice();
		switch(choice)
		{
			case 1:
			A.getArray();
			break;
			
			case 2:
			A.putArray();
			break;
			
			case 3:
			cout<<"\n Enter First array.";
			A1.getArray();
			cout<<"\n Enter second array.";
			A2.getArray();
			cout<<"\n First array.";
			A1.putArray();
			cout<<"\n Second array.";
			A2.putArray();
		    A3=A1+A2;
			cout<<"\n Addition of array.";
			A3.putArray();
			break;

			case 4:
			cout<<"\n Enter First array.";
			A1.getArray();
			cout<<"\n Enter second array.";
			A2.getArray();
			cout<<"\n First array.";
			A1.putArray();
			cout<<"\n Second array.";
			A2.putArray();
			A3= A1 - A2;
			cout<<"\n Subtraction of array.";
			A3.putArray();
			break;

			case 5:
			getch();
		}
	}while(choice != 5);
	getch();
}
/*
Out put:

 1:To Accept an array from user
 2:To display it.
 3:To add two arrays using operator overloading.
 4:To subtract two arrays using operator overloading.
 5:Exit
 Enter your choice:1

 Enter how many elements in array:4

 Enter element 1:2

 Enter element 2:3

 Enter element 3:2

 Enter element 4:3

 1:To Accept an array from user
 2:To display it.
 3:To add two arrays using operator overloading.
 4:To subtract two arrays using operator overloading.
 5:Exit
 Enter your choice:2

 Array elements: 2 3 2 3
 
 1:To Accept an array from user
 2:To display it.
 3:To add two arrays using operator overloading.                                
 4:To subtract two arrays using operator overloading.                           
 5:Exit                                                                         
 Enter your choice:3                                                            
                                                                                
 Enter First array.                                                             
 Enter how many elements in array:4                                             
                                                                                
 Enter element 1:3                                                              
                                                                                
 Enter element 2:4                                                              
                                                                                
 Enter element 3:6                                                              
                                                                                
 Enter element 4:1                                                              
                                                                                
 Enter second array.                                                            
 Enter how many elements in array:4                                             
                                                                                
 Enter element 1:3                                                              
                                                                                
 Enter element 2:6                                                              
                                                                                
 Enter element 3:2                                                              
                                                                                
 Enter element 4:6                                                              
                                                                                
 First array.                                                                   
 Array elements: 3 4 6 1                                                        
 Second array.                                                                  
 Array elements: 3 6 2 6                                                        
 Addition of array.                                                             
 Array elements: 6 10 8 7                                                       
 
 1:To Accept an array from user
 2:To display it.
 3:To add two arrays using operator overloading.                                
 4:To subtract two arrays using operator overloading.                           
 5:Exit                                                                         
 Enter your choice:4                                                            
                                                                                
 Enter First array.                                                             
 Enter how many elements in array:4                                             
                                                                                
 Enter element 1:3                                                              
                                                                                
 Enter element 2:4                                                              
                                                                                
 Enter element 3:6                                                              
                                                                                
 Enter element 4:1                                                              
                                                                                
 Enter second array.                                                            
 Enter how many elements in array:4                                             
                                                                                
 Enter element 1:3                                                              
                                                                                
 Enter element 2:6                                                              
                                                                                
 Enter element 3:2                                                              
                                                                                
 Enter element 4:6                                                              
                                                                                
 First array.                                                                   
 Array elements: 3 4 6 1                                                        
 Second array.                                                                  
 Array elements: 3 6 2 6                                                        
 Subtraction of array.                                                             
 Array elements: 0 -2 4 -5                                                       
 1:To Accept an array from user                                                 
 2:To display it.                                                               
 3:To add two arrays using operator overloading.                                
 4:To subtract two arrays using operator overloading.                           
 5:Exit                                                                         
 Enter your choice:5     
*/