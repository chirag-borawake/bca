/*
Name :-Chirag borawake
Class :-SY BCA
Roll No:-2012
 Q. Write a necessary C++ class & member function definition for a cricket player object.
(Use array of objects)
The program should accept the details from user (max 10): player code, name, runs, innings- played and number of times not out. The program should contain following menu:
-	Enter details of players.
-	Display average runs of a single player.
-	Display average runs of all players.
(Use function overloading)
*/
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iostream.h>
int const MAX = 10;
class Player
{
	char name[20];
	int code;
	int runs;
	int innings;
	int runOut;
	public:
	void getData(void);
	void displayDetails(void);
	char* getName(void);
	void displayAverage();
};
void Player :: getData()
{
	cout<<"\n Enter player code:";
	cin>>code;
	cout<<"\n Enter player name:";
	cin>>name;
	cout<<"\n Enter player run:";
	cin>>runs;
	cout<<"\n Enter player innings:";
	cin>>innings;
	cout<<"\n Enter player how many times run out:";
	cin>>runOut;
}
void Player :: displayDetails()
{
	cout<<" "<<code;
	cout<<"\t"<<name;
	cout<<"\t"<<runs;
	cout<<"\t"<<innings;
	cout<<"\t"<<runOut<<"\n ";
}
char* Player ::getName()
{
	return name;
}
void Player :: displayAverage()
{
	float avg;
	avg=(runs/(float)innings);
	cout<<" "<<getName();
	cout<<"\t"<<avg<<"\n";
}
int getChoice()
{
	int choice;
	cout<<"\n 1:Enter details of players.";
	cout<<"\n 2:Display average runs of a single player.";
	cout<<"\n 3:Display average runs of all players.";
	cout<<"\n 4:Exit";
	cout<<"\n Enter your chioce:";
	flushall();
	cin>>choice;
	return choice;
}
void getAverage(Player *players,char* playerName,int n)
{
	int isPresent = 0;
	for(int i = 0;i < n; i++)
	{
		if(strcmp(players -> getName(),playerName) == 0)
		{
			isPresent = 1;
			players -> displayAverage();
			break;
		}
		players ++;
	}
	if(!isPresent)
	{
		cout<<"\n No record present as:"<<playerName;
	}
}
void getAverage(Player *players,int n)
{
	for(int i = 0;i < n; i++)
	{
		players -> displayAverage();
		players ++;
	}
}
main()
{
	int n,i,isPresent = 0,choice;
	float avg;
	char *playerName;
	int getChoice();
	Player players[MAX];
	clrscr();
	do
	{
		choice = getChoice();
		switch(choice)
		{

		  case 1:
			cout<<"\n Enter how many players record:";
			cin>>n;
			for(i = 0;i < n; i++)
			{
				cout<<"\n Enter details of player "<<i+1;
				players[i].getData();
			}
			cout<<"\n Players information. ";
			cout<<"\n Code\tName\tRun\tInnings\tRun out\n ";
			for(i = 0;i < n; i++)
			{
				players[i].displayDetails();
			}
			break;

		  case 2:
			cout<<"\n Enter which player's average runs want to see:";
			cin>>playerName;
			cout<<"\n Name\tAverage Run\n";
			getAverage(players,playerName,n);
			break;

		 case 3:
			cout<<"\n Average runs of all players.";
			cout<<"\n Name\tAverage Run\n";
			getAverage(players,n);
			break;
		}
	}while(choice != 4);
	getch();
	return 0;
}
/*
Out put:-

 1:Enter details of players.
 2:Display average runs of a single player.
 3:Display average runs of all players.
 4:Exit
 Enter your chioce:1

 Enter how many players record:3

 Enter details of player 1
 Enter player code:1

 Enter player name:Chirag

 Enter player run:2122

 Enter player innings:70

 Enter player how many times run out:8
                                                   
 Enter details of player 2 
 
 Enter player name:Lokesh                                                        

 Enter player run:1002
                                                                                
 Enter player innings:50                                                        
                                                                                
 Enter player how many times run out:5  
 
 Enter player code:3                                                            
                                                                                
 Enter player name:Rohan                                                        
                                                                                
 Enter player run:1223                                                          
                                                                                
 Enter player innings:60                                                        
                                                                                
 Enter player how many times run out:11        
 
 Players information.
 Code   Name    Run     Innings Run out
  1     Chirag  2122    70      8 
  2     Lokesh  1002    50      5                                               
  3     Rohan   1223    60      11          

 1:Enter details of players.
 2:Display average runs of a single player.
 3:Display average runs of all players.
 4:Exit
 Enter your chioce:2

 Enter which player's average runs want to see:Chirag

 Name   Average Run
 Chirag 30.314285

 1:Enter details of players.
 2:Display average runs of a single player.
 3:Display average runs of all players.
 4:Exit 
 
 Enter your chioce:3                                                            
                                                                                
 Average runs of all players.                                                   
 Name   Average Run                                                             
 Lokesh 20.040001                                                               
 Rohan  20.383333                                                               
                                                                                
 1:Enter details of players.                                                    
 2:Display average runs of a single player.                                     
 3:Display average runs of all players.                                         
 4:Exit                                                                         
 Enter your chioce:4                                                            
    
*/