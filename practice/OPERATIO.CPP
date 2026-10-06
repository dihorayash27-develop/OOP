#include<iostream.h>
#include<conio.h>
class operation
{
	private:
		int no1,no2,add,sub,mul;
		float div,mod;
	public:
	       void getdata();
	       void calculation();
	       void putdata();

};
void operation::getdata()
{
	cout<<"Enter No-1:";
	cin>>no1;

	cout<<"Enter No-2:";
	cin>>no2;

}
void operation::calculation()
{
	add=no1+no2;
	sub=no1-no2;
	mul=no1*no2;
	div=no1/no2;
	mod=no1%no2;
}
void operation::putdata()
{
	cout<<endl;
	cout<<"No1 is:"<<no1<<endl;
	cout<<"No2 is:"<<no2<<endl;

	cout<<"Addition is:"<<add<<endl;
	cout<<"Subtraction is:"<<sub<<endl;
	cout<<"Multiplication is:"<<mul<<endl;
	cout<<"Division is:"<<div<<endl;
	cout<<"Modulious is:"<<mod<<endl;

}
void main()
{
	clrscr();
	operation o;
	o.getdata();
	o.calculation();
	o.putdata();
	getch();

}