#include<iostream.h>
#include<conio.h>
#include<math.h>

class Farenhit;

class Kelvin
{
	private:

		float k;

	public:

		Kelvin()
		{
		     //	cout<<"Default Kelvin Constructor is Called"<<endl;
		}
		Kelvin(float);
		operator Farenhit();
		void out();
		~Kelvin()
		{
			cout<<"Kelvin Destructor is Called"<<endl;
		}
};

class Farenhit
{
	private:

		float f;

	public:

		Farenhit()
		{
		      //	cout<<"Default Farenhit Constructor is Called"<<endl;
		}
		Farenhit(float);
		operator Kelvin();
		void out();
		~Farenhit()
		{
			cout<<"Farenhit Descructor is Called"<<endl;
		}
};

Kelvin :: Kelvin(float a)
{
       //	cout<<"Deree Constructor is called to return value"<<endl;
	k=a;
}

Kelvin :: operator Farenhit()
{
	float temp;
	cout<<"Convert From Kelvin => Farenhit"<<endl;
	temp = (k-273.15) * 9/5+32;
	return Farenhit(temp);

}

void Kelvin :: out()
{
      //	cout<<"Member Function of Kelvin is called"<<endl;
	cout<<"Kelvin value is : "<<k<<endl;
}

void Farenhit :: out()
{
       //	cout<<"Member Function of Farenhit is Called"<<endl;
	cout<<"Farenhit Value is : "<<f<<endl;
}

Farenhit :: operator Kelvin()
{
	float temp;
	cout<<"Convert From Farenhit => Kelvin"<<endl;
	temp = (f-32) * 5/9+273.15;
	return Kelvin(temp);
}

Farenhit :: Farenhit(float a)
{
    //	cout<<"Farenhit Constructor is called to return value"<<endl;
	f=a;
}

void main()
{
	clrscr();
	Kelvin k1, k2(3.0);
	Farenhit f1, f2(3.0);
	k1=f2;
	f2.out();
	k1.out();
	cout<<endl;
	f1=k2;
	k2.out();
	f1.out();
	cout<<endl;

	getch();
}