#include<conio.h>
#include<iostream.h>
class farenheit;
class degree
{
	float d;
	public:
		degree(float);
		degree()
		{
			cout<<"degree constructor called..."<<endl;
			d=0.0;
		}
		operator farenheit();
		void out();
		~degree()
		{
			cout<<"degreee destructor called...."<<endl;
		}
};
class farenheit
{
	float f;
	public:
		farenheit(float);
		farenheit()
		{
			cout<<"farenheit constructor called..."<<endl;
			f=0.0;
		}
		operator degree();
		void out();
		~farenheit()
		{
			cout<<"farenheit destructor called...."<<endl;
		}
};
degree::degree(float a)
{
	cout<<"degree constructor is called to return the value.."<<endl;
	d=a;
}
degree::operator farenheit()
{
	float temp;
	cout<<"convert from degree==>farenheit.."<<endl;
	temp=(9*d/5)+32;
	return farenheit(temp);
}
void degree::out()
{
	cout<<"member function of degree calle..."<<endl;
	cout<<"degree value is:"<<d<<endl;
}
farenheit::farenheit(float a)
{
	cout<<"farenheit constructor is calle to return the value..."<<endl;
	f=a;
}
farenheit::operator degree()
{
	float temp;
	cout<<"convert from farenheit ==> degree.."<<endl;
	temp=(5.0/9.0)*(f-32);
	return degree(temp);
}
void farenheit::out()
{
	cout<<"member function of farenheit call.."<<endl;
	cout<<"farenheit value is.."<<f<<endl;
}
void main()
{
	clrscr();
	degree d1,d2(10);
	farenheit f1,f2(50);
	d1=f2;
	f2.out();
	d1.out();
	cout<<endl;

	f1=d2;
	d2.out();
	f1.out();
	cout<<endl;
	getch();
}
