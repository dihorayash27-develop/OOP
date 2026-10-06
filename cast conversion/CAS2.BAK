#include<conio.h>
#include<iostream.h>
class time
{
	private:
		int hrs;
		int mins;
	public:
		time(int,int);
		operator int();
		~time()
		{
			cout<<"destructor called.."<<endl;
		}
};
void time::time(int a,int b)
{
	cout<<"constructor called withtwo parameters"<<endl;
	hrs=a;
	mins=b;
}
time::operator int()
{
	cout<<"class type to basic type..."<<endl;
	return (hrs*60 + mins);
}
void main()
{
	clrscr();
	int h,m,tot_min1;
	cout<<"enter the value of hrs:";
	cin>>h;
	cout<<"enter the value of mins:"<<endl;
	cin>>m;

	time t1(h,m);
	cout<<"object t1 over-loaded assignment operator.."<<endl;
	tot_min1=t1;

	cout<<"total minutes:"<<tot_min1<<endl;
	cout<<"object t1 over-loaded assignment operator second method.."<<endl;

	int tot_min2=t1.operator int();
	cout<<"total minutes:"<<tot_min2<<endl;
	getch();
}