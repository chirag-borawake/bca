#include<conio.h>
#include<iostream.h>
inline float mul(float x,float y)
{
	return (x*y);
}
inline float div(float p,float q)
{
	return (p/q);
}
main()
{
	float a=222.3;
	float b = 22.33;
	cout<<mul(a,b);
	cout<<"\n Division:"<<div(a,b);
	getch();
	return 0;
}