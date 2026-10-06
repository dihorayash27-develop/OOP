#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
class match
{
	protected:char name[10];
		  int play;
	public:
		float average(int b)
		{
			return (float)b/play;
		}
		match()
		{
			cout<<"match class constructor called.."<<endl;
		}
		~match()
		{
			cout<<"match class destructor called.."<<endl;
		}
};
class one_day:private match
{
	protected:
		  int o_run;
	public:
		one_day(char *ptr,int a,int run)
		{
			cout<<"one_day class constructor called.."<<endl;
			strcpy(name,ptr);
			play=a;
			o_run=run;
		}
		void display();
		~one_day()
		{
			cout<<"one_day class destructor called.."<<endl;
		}
};
void one_day::display()
{
	cout<<"one day match.."<<endl;
	cout<<setw(15)<<name<<setw(5)<<play;
	cout<<setw(8)<<o_run<<setw(5)<<average(o_run)<<endl;
}
class test:private match
{
	protected:int t_run;
	public:test(char *ptr,int a,int run)
		{
			cout<<"test class constructor called.."<<endl;
			strcpy(name,ptr);
			play=a;
			t_run=run;
		}
		void display();
		~test()
		{
			cout<<"test class destructor called.."<<endl;
		}
};
void test::display()
{
	cout<<"test match..."<<endl;
	cout<<setw(15)<<name<<setw(5)<<play;
	cout<<setw(8)<<t_run<<setw(5)<<average(t_run)<<endl;
}
void main()
{
	clrscr();
	one_day obj1("sachin",200,12000);
	test obj2("sachin",100,9000);
	obj1.display();
	obj2.display();
	getch();
}