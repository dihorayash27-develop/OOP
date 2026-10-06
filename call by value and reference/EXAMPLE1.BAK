#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
class money
{
	private:
		int rupees,paisa;
	public:
		money();
		money(int,int);
		money(money &);
		void sum(money,money);
		void putdata();
		~money()
		{
			cout<<"destructor called here.."<<endl;
		}

};
money::money()
{
	cout<<"constructor called without parameter"<<endl;
	rupees=0;
	paisa=0;
}
money::money(int r,int p)
{
	cout<<"constructor called with parameter/n";
	rupees=r;
	paisa=p;
}
money::money(money &z)
{
	cout<<"copy constructor called..."<<endl;
	rupees=z.rupees;
	paisa=z.paisa;
}
void money::sum(money z1,money z2)
{
	paisa=z1.paisa+z2.paisa;
	rupees=paisa/100;
	paisa=paisa%100;
	rupees=rupees+z1.rupees+z2.rupees;
}
void money::putdata()
{
	cout.precision(2);
	cout.width(10);//rupees width set but paisa width not set
	cout<<rupees<<"rupees and"<<paisa<<"paisa"<<endl;
}
void main()
{
	clrscr();
	money m1(5,84),m2(8,38),m3;
	cout<<"m1 amount is";
	m1.putdata();
	cout<<"m2 amount";
	m2.putdata();
	m3.sum(m1,m2);
	cout<<"m3 amount is";
	m3.putdata();
	getch();
}