#include<conio.h>
#include<stdio.h>
void main()
{
	FILE *file;
	char ch;
	file=fopen("inex3.txt","r");
	while(1)
	{
		ch=fgetc(file);
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);
	}
	fclose(file);
	getch();
}

/* out put:-
Q.17) Write a menu driven program in ‘C’ that shows the working of a library. Th
e menu
	 option should be
	- Add book information.
	Display book information.
	List all books of given author.
	List the count of books in the library.
	Exit.
	(Using Structure Array)

Q.18) Write a ‘C’ program to accept customer details such as: Account_no, Name,
Balance in
    account,. Assume Maximum 20 customers in the bank. Write a function to print
 the account no
	and name of each customer with balance below Rs.100.
 */









                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
