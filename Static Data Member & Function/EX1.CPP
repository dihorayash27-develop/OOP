#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
class Date
{
	private:
		int dd,mm,yyyy;
		static char month[][4];
	public:
		Date(int,int,int); //Constructor
		void disp_dt(); //Member Function
		void disp_dt1(); //Member Function
};
//Definition Out side The Class Declaration Important
char Date::month[][04] = {"jan","feb","mar","apr","jun","jul","aug","sep","oct","nov","dec"};
Date::Date(int d,int m,int  y)
{
	dd = d;
	mm = m;
	yyyy = y;
}
void Date::disp_dt()
{
	cout<<"Date is Display in the formate of(YYYY-MM-DD)==>";
	cout<<yyyy<<"-"<<mm<<"-"<<dd<<endl;
}
void Date::disp_dt1()
{
	cout<<"Date is Display in the format of(DD-Mon-YYYY)==>";
	cout<<dd<<"-"<<month[mm-1]<<"-"<<yyyy<<endl;
}
void main()
{
	clrscr();
	Date D1(5,11,2000),D2(22,2,1999);
	cout<<"Size of Object D1:"<<sizeof(D1)<<endl;
	cout<<"Size of Object D2:"<<sizeof(D2)<<endl;
	D1.disp_dt();
	D1.disp_dt1();
	D2.disp_dt();
	D2.disp_dt1();
	getch();
}