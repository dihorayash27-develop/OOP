#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
class distance
{
	private:
		int meter,cmeter;
	public:
		distance();
		distance(int,int);
		void sum(distance &,distance &);
		void putdata();
		~distance()
		{
			cout<<"destructor called here.."<<endl;
		}

};
distance::distance()
{
	cout<<"constructor called without parameter"<<endl;
	meter=0;
	cmeter=0;
}
distance::distance(int m,int c)
{
	cout<<"constructor called with parameter/n";
	meter=m;
	cmeter=c;
}
void distance::sum(distance &m1,distance &m2)
{

	cmeter=m1.cmeter+m2.cmeter;
	meter=cmeter/100;
	cmeter=cmeter%100;
	meter=meter+m1.meter+m2.meter;
}
void distance::putdata()
{
	cout.precision(2);
	cout.width(3);//rupees width set but paisa width not set
	cout<<meter<<"meter and"<<cmeter<<"cmeter"<<endl;
}
void main()
{
	clrscr();
	distance t1(50,95),t2(80,45),t3;
	t3.sum(t1,t2);
	cout<<"t1 time is";
	t1.putdata();
	cout<<"t2 time is";
	t2.putdata();
	cout<<"t3 time is";
	t3.putdata();
	getch();
}