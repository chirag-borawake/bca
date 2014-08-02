#include <stdio.h>
#include<conio.h>
void main()
{
   int number, sum = 0, temp, remainder;
 
   printf("\n Enter a number:");
   scanf("%d",&number);
 
   temp = number;
 
   while( temp != 0 )
   {
      remainder = temp%10;
      sum = sum + remainder*remainder*remainder;
      temp = temp/10; 
   }
 
   if ( number == sum )
      printf("Entered number is an armstrong number.");
   else
      printf("Entered number is not an armstrong number.");         
   getch();
}