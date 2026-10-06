#include<iostream.h>
#include<conio.h>
class armstrong
{
	private:
		int no,rem,sum,temp;
	public:
		void getdata();
		void calculation();

};
void armstrong::getdata()
{
	cout<<"Enter The No:";
	cin>>no;
}
void armstrong::calculation()
{
	temp=no;
	while(no>0)
	{
		rem=no%10;
		sum=sum+(rem*rem*rem);
		no=no/10;
	}
	if(temp==sum)
	{
		cout<<sum<<"is Armstrong Number."<<endl;
	}
	else
	{
		cout<<temp<<"is Not Armstrong Number."<<endl;
	}
}
void main()
{
	clrscr();
	armstrong a;
	a.getdata();
	a.calculation();
	getch();
}

