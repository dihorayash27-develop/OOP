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
		void sum(money &,money &);
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
void money::sum(money &m1,money &m2)
{

	paisa=m1.paisa+m2.paisa;
	rupees=paisa/100;
	paisa=paisa%100;
	rupees=rupees+m1.rupees+m2.rupees;
}
void money::putdata()
{
	cout.precision(2);
	cout.width(3);//rupees width set but paisa width not set
	cout<<rupees<<"rupees and"<<paisa<<"paisa"<<endl;
}
void main()
{
	clrscr();
	money m1(5,84),m2(8,38),m3;
	m3.sum(m1,m2);
	cout<<"m1 amount is";
	m1.putdata();
	cout<<"m2 amount";
	m2.putdata();
	cout<<"m3 amount is";
	m3.putdata();
	getch();
}