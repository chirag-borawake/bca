#include<conio.h>
#include<iostream.h>
const int m = 10;
class ITEMS
{
	int itemCode[m];
	float itemPrice[m];
	int count ;
	
   public :
   
    void getItem(void);
	void displaySum(void);
	void displayItem(void);
	void CNT(){count = 0;}
};
void ITEMS :: getItem(void)
{
	cout<<"\n Enter item code:";
	cin>>itemCode[count];
	
	cout<<"\n Enter item cost:";
	cin>>itemPrice[count];
	count++;
}
void ITEMS :: displaySum(void)
{
	float sum = 0;
	for(int i = 0;i < count; i++)
	{
		sum=sum+itemPrice[i];
	}
	cout<<"\n Total value:"<<sum;
}
void ITEMS ::displayItem(void)
{
	cout<<"\n Code price:";
	for (int i = 0;i < count; i++)
	{
		cout<<"\n Item code:"<<itemCode[i];
		cout<<"\n Item price"<<itemPrice[i];
	}
	cout<<"\n";
}
main()
{
	ITEMS order;
	order.CNT();
	int x;
	do
	{
		cout <<"\n 1:Add an item.";
		cout <<"\n 2:Display total values.";
		cout <<"\n 3:Displat all items.";
		cout <<"\n 4:Quit.";
		cout <<"\n Enter your choice:";
		cin>>x;
		switch(x)
		{
			case 1:order.getItem();break;
			case 2:order.displaySum();break;
			case 3:order.displayItem();break;
			case 4:break;
		}
	}while( x != 4);
	return 0;
}
