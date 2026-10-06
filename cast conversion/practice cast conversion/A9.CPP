#include<conio.h>
#include<iostream.h>
class kelvin;
class celsius
{
	float c;
	public:
		celsius(float);
		celsius()
		{
			cout<<"celsius constructor called..."<<endl;
			c=0.0;
		}
		operator kelvin();
		void out();
		~celsius()
		{
			cout<<"celsius destructor called...."<<endl;
		}
};
class kelvin
{
	float k;
	public:
		kelvin(float);
		kelvin()
		{
			cout<<"kelvin constructor called..."<<endl;
			k=0.0;
		}
		operator celsius();
		void out();
		~kelvin()
		{
			cout<<"kelvin destructor called...."<<endl;
		}
};
celsius::celsius(float a)
{
	cout<<"celsius constructor is called to return the value.."<<endl;
	c=a;
}
celsius::operator kelvin()
{
	float temp;
	cout<<"convert from celsius==>kelvin.."<<endl;
	temp=c+273.15;
	return kelvin(temp);
}
void celsius::out()
{
	cout<<"member function of celsius calle..."<<endl;
	cout<<"celsius value is:"<<c<<endl;
}
kelvin::kelvin(float a)
{
	cout<<"kelvin constructor is calle to return the value..."<<endl;
	k=a;
}
kelvin::operator celsius()
{
	float temp;
	cout<<"convert from kelvin ==> celsius.."<<endl;
	temp=k-273.15;
	return celsius(temp);
}
void kelvin::out()
{
	cout<<"member function of kelvin call.."<<endl;
	cout<<"kelvin value is.."<<k<<endl;
}
void main()
{
	clrscr();
	celsius c1,c2(3.3);
	kelvin k1,k2(3.3);
	c1=k2;
	k2.out();
	c1.out();
	cout<<endl;

	k1=c2;
	c2.out();
	k1.out();
	cout<<endl;
	getch();
}
