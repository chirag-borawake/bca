/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012

19. Create a C++ class time that contains hours, minute and seconds as data members. Write the member functions:
		1.  to add two object of type time, passed  as arguments .
		2.  to convert a time into total number of seconds.
		3.  to display the time into format like: 10:10:10.
*/
#include<conio.h>
#include<iostream.h>
class time
{
	int hours;
	int minute;
	int second;
	public:
	void addTimeObject(time,time);
	int convertTime(void);
	void display(void);
	void displayInFormate(void);
	void getTime(int h ,int m,int s)
	{
		hours = h;
		minute = m;
		second = s;
	}
};
main ()
{
	time T1,T2,T3;
	int i,h,m,s,choice;
	for(i=1;i<=2;i++)
	{
		cout<<"\n Enter time:"<<i;
		cout<<"\n Enter hours:";
		cin>>h;
		cout<<"\n Enter minute:";
		cin>>m;
		cout<<"\n Enter second:";
		cin>>s;
		if(i==1)
		T1.getTime(h,m,s);
		if(i==2)
		T2.getTime(h,m,s);
	}
	do
	{
		cout<<"\n 1:Add first and second time.\n 2:Conver time into seconds.";
		cout<<"\n 3:Display the time into format like: 10:10:10.\n 4:Exit";
		cout<<"\n Enter your choice:";
		cin>>choice;
		switch(choice)
		{

			case 1:
				cout<<"\n First time.";
				T1.display();
				cout<<"\n Second time.";
				T2.display();
				cout<<"\n Addition of these to times.";
				T3.addTimeObject(T1,T2);
				T3.display();
			break;

			case 2:
				cout<<"\n Our first time:";
				T1.display();
				cout<<"\n This time in seconds:"<<T1.convertTime();
				break;
			case 3:
			cout<<"\n Our first time:";
				T1.displayInFormate();
				break;
		}
		getch();
	}while(choice != 4);
	return 0;
}
void time::display(void)
{
	cout<<"\n Hours = "<<hours;
	cout<<", Minute = "<<minute;
	cout<<" ,Second = "<<second<<"\n";
}
void time :: addTimeObject(time t1,time t2)
{
	second = t1.second  + t2.second;
	minute = second/60;
	second = second%60;
	minute = minute + t1.minute + t2.minute;
	hours = minute/60;
	minute = minute%60;
	hours = hours + t1.hours + t2.hours;
}
int time :: convertTime()
{
	int sumSeconds;
	sumSeconds=second;
	sumSeconds =sumSeconds + (minute*60);
	sumSeconds = sumSeconds + (hours*3600);
	return sumSeconds;
}

void time::displayInFormate(void)
{
	cout<<"\n Time:";
	cout<<" "<<hours;
	cout<<":"<<minute;
	cout<<":"<<second<<"\n";
}
/*
Out put:-

 Enter time:1
 Enter hours:1
 Enter minute:2
 Enter second:3

 Enter time:2
 Enter hours:2
 Enter minute:3
 Enter second:2

 1:Add first and second time.
 2:Conver time into seconds.
 3:Display the time into format like: 10:10:10.
 4:Exit
 Enter your choice:1

 First time.
 Hours = 1, Minute = 2 ,Second = 3                                              
 
 Second time. 
 Hours = 2, Minute = 3 ,Second = 2                                              
 
 Addition of these to times.                                                    
 Hours = 3, Minute = 5 ,Second = 5                                              
 
 1:Add first and second time.                                                   
 2:Conver time into seconds.                                                    
 3:Display the time into format like: 10:10:10.                                 
 4:Exit                                                                         
 Enter your choice:2                                                            
 
 Our first time:                                                                
 Hours = 1, Minute = 2 ,Second = 3                                              
 
 This time in seconds:3723                                                      
 
 1:Add first and second time.                                                   
 2:Conver time into seconds.                                                    
 3:Display the time into format like: 10:10:10.                                 
 4:Exit                                                                         
 Enter your choice:3                                                            
    
 Our first time:                                                                
 Time: 1:2:3                                                                    
   
 1:Add first and second time.
 2:Conver time into seconds.
 3:Display the time into format like: 10:10:10.
 4:Exit
 Enter your choice:4

*/