#include<iostream.h>
#include<conio.h>
#include<math.h>

class Celsius;

class Kelvin
{
	private:

		float k;

	public:

		Kelvin()
		{
			cout<<"Default Kelvin Constructor is Called"<<endl;
		}
		Kelvin(float);
		operator Celsius();
		void out();
		~Kelvin()
		{
			cout<<"Kelvin Destructor is Called"<<endl;
		}
};

class Celsius
{
	private:

		float c;

	public:

		Celsius()
		{
			cout<<"Default Celsius Constructor is Called"<<endl;
		}
		Celsius(float);
		operator Kelvin();
		void out();
		~Celsius()
		{
			cout<<"Celsius Descructor is Called "<<endl;
		}
};

Kelvin :: Kelvin(float a)
{
	cout<<"Kelvin Constructor is called to return value"<<endl;
	k=a;
}

Kelvin :: operator Celsius()


{
	float temp;
	cout<<"Convert From Kelvin => Celsius"<<endl;
	temp = k - 273.15;
	return Celsius(temp);

}

void Kelvin :: out()
{
	cout<<"Member Function of Kelvin is called"<<endl;
	cout<<"Kelvin value is : "<<k<<endl;
}

void Celsius :: out()
{
	cout<<"Member Function of Celsius is Called"<<endl;
	cout<<"Celsius Value is : "<<c<<endl;
}

Celsius :: operator Kelvin()
{
	float temp;
	cout<<"Convert From Celsius => Kelvin"<<endl;
	temp = c + 273.15;
	return Kelvin(temp);
}

Celsius :: Celsius(float a)
{
	cout<<"Celsius Constructor is called to return value"<<endl;
	c=a;
}

void main()
{
	clrscr();
	Kelvin k1, k2(3.3);
	Celsius c1, c2(3.3);
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
