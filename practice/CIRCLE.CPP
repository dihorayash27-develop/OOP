#include<iostream.h>
#include<conio.h>
#define pi 3.14
class circle
{
	private:
		int r;
		float c;
	public:
		void getdata();
		void calculation();
		void putdata();
};
void circle::getdata()
{
	cout<<"Enter Radious:";
	cin>>r;
}
void circle::calculation()
{

	c=pi*r*r;
}
void circle::putdata()
{
	cout<<endl;
	cout<<"Radious is:"<<r<<endl;
	cout<<"Area of Circle:"<<c<<endl;
}
void main()
{
	clrscr();
	circle c1;
	c1.getdata();
	c1.calculation();
	c1.putdata();
	getch();
}