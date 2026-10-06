//Class to Basic

#include<iostream.h>
#include<conio.h>
class length
{
	private:
		int m;
		int c;
		int mili;
	public:
		length(int m1,int c1,int mili1)
		{
			cout<<"With Parameterised Constructor is Called."<<endl;
			m=m1;
			c=c1;
			mili=mili1;
		}
		operator int();
		~length()
		{
			cout<<"Destructor is Called..."<<endl;
		}
        	
};
length::operator int()
{
	cout<<"Class Type to Basic Type"<<endl;
	return(m*1000+c*10+mili);
}
void main()
{
	clrscr();
	int m,c,mili,total;

	cout<<"Enter Meter:";
	cin>>m;

	cout<<"Enter Centimeter:";
	cin>>c;

	cout<<"Enter Milimeter:";
	cin>>mili;

	length l(m,c,mili);
	total=l;
	cout<<"Total Length is:"<<total<<endl;

	getch();
}