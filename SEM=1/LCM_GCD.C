# include <stdio.h>
# include <conio.h>
void main()
{
	int n1, n2, gcd, lcm=1,temp,i ;
	clrscr() ;
	printf("\n Enter first numbers : ") ;
	scanf("%d",&n1);
	printf("\n Enter second number:");
	scanf("%d",&n2) ;
	if(n1>n2 )
	       temp=n2;
	else
	       temp=n1;

	for(i=temp;i>=1;i--)
	{
		 if(n1%i==0 && n2%i==0)
		  {
			gcd = i ;
			break;
		  }
	}

	for(i=2;i<=temp;i++)
	{
		if((n1%i==0)&&(n2%i==0))
		{
			lcm=i;
			break;
		}
	}
	printf("\n The GCD is : %d", gcd) ;
	printf("\n The LCM is : %d", lcm);
	getch() ;
}

