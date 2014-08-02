/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
Q.Write a C++ program to sort integer array and float array element in ascending order using bubble sort method use function overloading.
*/
#include<conio.h>
#include<iostream.h>
void sort(int *,int);
void  sort(float *,int);
main()
{
	int arrayInt[10],i,i_n,f_n;
	float arrayFlo[10];
	clrscr();
	cout<<"\n Enter how many element in integer array:";
	cin>>i_n;
	for(i = 0;i<i_n;i++)
	{
		cout<<"\n Enter element "<<i+1<<":";
		cin>>arrayInt[i];
	}
	sort(arrayInt,i_n);
	cout<<"\n Enter how many element in float array:";
	cin>>f_n;
	for(i = 0;i<f_n;i++)
	{
		cout<<"\n Enter element "<<i+1<<":";
		cin>>arrayFlo[i];
	}
	sort(arrayFlo,f_n);
	return 0;
}
void sort(int *a,int n)
{
	int temp;
	for(int i = 0;i < n;i ++)
	{
		for(int j=i;j < n;j ++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"\n Integer sort array is:";
	for( i = 0;i < n;i ++)
	{
		cout<<" "<<a[i];
	}
	getch();
}
void sort(float *a,int n)
{
	int temp;
	for(int i = 0;i < n;i ++)
	{
		for(int j=i;j < n;j ++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"\n Float sort array is:";
	for( i = 0;i < n;i ++)
	{
		cout<<" "<<a[i];
	}
	getch();
}

/*

out put :-

 Enter how many element in integer array:3

 Enter element 1:2

 Enter element 2:42

 Enter element 3:6

 Integer sort array is: 2 6 42
 Enter how many element in float array:3

 Enter element 1:2.3333

 Enter element 2:5.343

 Enter element 3:5.3434

 Float sort array is: 2.3333 5.343 5.3434


*/
