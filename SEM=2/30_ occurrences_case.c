#include<conio.h>
#include<stdio.h>
#define TRUE 1
#define FALSE 0
void  main()
{
	int isSubstring=FALSE,count=0,length,currentValue,maxCount=-1,select;
	int static count1[122];
	char *string1,*string2,*string1Current,*string1InnerCurrent,*string2Current,*string;
	clrscr();
	printf("\n 1:Check if one string is substring of another string.");
	printf("\n 2:Count number of occurrences of a character in the string.");
	printf("\n Enter selection 1 or 2:");
	scanf("%d",&select);
	switch(select)
	{
		case 1:
			printf("\n Enter string:");
			scanf("%s",string1);
			printf("\n Enter string to check:");
			scanf("%s",string2);
			length=strlen(string2);
			string1Current=string1;
			string2Current=string2;
			while(*string1Current!='\0')
			{
				string2Current=string2;
				//First character matched.
				if(*string1Current==*string2Current)
				{
					string1InnerCurrent = string1Current;
					//Compare complete string 2
					count=0;
					while(*string2Current!='\0')
					{
						if(*string2Current == *string1InnerCurrent)
						{
							count++;
						}
						else
						{
							break;
						}
						string2Current++;
						string1InnerCurrent++;
					}
					if(length==count)
					{
						isSubstring=TRUE;
						break;
					}
				}
				string1Current++;
			}
			if(isSubstring)
			{
				printf("\n %s is substring of %s",string2, string1);
				printf("\n\nSubstring starts at index %d",(string1Current-string1));
			}
			else
			{
				printf("\n %s is NOT a substring of %s",string2, string1);
			}
			break;

		case 2:
			printf("\n Enter string:");
			scanf("%s",string);
			string1=string;
			while(*string!='\0')
			{
				currentValue=*string;
				count1[currentValue]++;
				if(*string > maxCount)
				{
					maxCount=*string;
				}
				string++;
			}
			printf("\n Occurrences of a characters are:");
			for(currentValue=0 ; currentValue <= maxCount ; currentValue++)
			{
				if(count1[currentValue]!=0)
				{
					printf("\n Character %c : Ocurrence count %d.",currentValue,count1[currentValue]);
				}
			}
			break;
		default:printf("\n Exit.");
	}
	getch();
}
/*
out put 1:-

 1:Check if one string is substring of another string.
 2:Count number of occurrences of a character in the string.
 Enter selection 1 or 2:1

 Enter string:chirag

 Enter string to check:raj

 raj is NOT a substring of chirag

 Out put :-2

 1:Check if one string is substring of another string.                          
 2:Count number of occurrences of a character in the string.                    
 Enter selection 1 or 2:2                                                       
                                                                                
 Enter string:chirag                                                            
                                                                                
 Occurrences of a characters are:                                               
 Character a : Ocurrence count 1.
 Character c : Ocurrence count 1.                                               
 Character g : Ocurrence count 1.                                               
 Character h : Ocurrence count 1.                                               
 Character i : Ocurrence count 1.                                               
 Character r : Ocurrence count 1.


  */































                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
