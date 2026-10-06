#include<iostream.h>
#include<conio.h>
class palindrome
{
	private:
		int no,rem,sum,temp;
	public:
		void getdata();
		void calculation();
};
void palindrome::getdata()
{
	cout<<"Enter The No:";
	cin>>no;
}
void palindrome::calculation()
{
	temp=no;

	while(no>0)
	{
		rem=no%10;
		sum=sum+(rem*10);
		no=no/10;
	}

	if(temp==sum)
	{
		cout<<sum<<"is Palindrome Number.";
	}
	else
	{
		cout<<temp<<"is Not Palindrome Number.";
	}
}
void main()
{
	clrscr();
	palindrome p;
	p.getdata();
	p.calculation();
	getch();
}
