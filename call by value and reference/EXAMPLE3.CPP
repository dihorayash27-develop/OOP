#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
class time
{
	private:
		int hours,minutes;
	public:
		time();
		time(int,int);
		void sum(time &,time &);
		void putdata();
		~time()
		{
			cout<<"destructor called here.."<<endl;
		}

};
time::time()
{
	cout<<"constructor called without parameter"<<endl;
	hours=0;
	minutes=0;
}
time::time(int h,int m)
{
	cout<<"constructor called with parameter/n";
	hours=h;
	minutes=m;
}
void time::sum(time &m1,time &m2)
{

	minutes=m1.minutes+m2.minutes;
	hours=minutes/60;
	minutes=minutes%60;
	hours=hours+m1.hours+m2.hours;
}
void time::putdata()
{
	cout.precision(2);
	cout.width(3);//rupees width set but paisa width not set
	cout<<hours<<"hours and"<<minutes<<"minutes"<<endl;
}
void main()
{
	clrscr();
	time t1(5,45),t2(8,45),t3;
	t3.sum(t1,t2);
	cout<<"t1 time is";
	t1.putdata();
	cout<<"t2 time is";
	t2.putdata();
	cout<<"t3 time is";
	t3.putdata();
	getch();
}