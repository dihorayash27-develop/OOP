#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>

class Binary;

class Octal
{
	private:

		long int oct;

	public:

		Octal()
		{
			//cout<<"\nOctal Class Default Constructor is Called..."<<endl;
			oct=0;
		}
		Octal(long int o1)
		{
			//cout<<"\nOctal Class Parameterize Constructor is Called to Assign Values..."<<endl;
			oct=o1;
		}
		operator Binary();
		void out()
		{
			cout<<"\n\nValues in Octal : "<<oct<<endl;
		}
		~Octal()
		{
			//cout<<"\nOctal Class Destructor is Called..."<<endl;
		}

};

class Binary
{
	private:

		long int bin;

	public:

		Binary()
		{
			//cout<<"\nBinary Class Default Constructor is Called..."<<endl;
			bin=0;
		}
		Binary(long int b1)
		{
			//cout<<"\nBinary Class Parameterize Constructor is Called to Assign Values..."<<endl;
			bin=b1;
		}
		operator Octal();
		void out()
		{
			cout<<"\n\nValues in Binary : "<<bin<<endl;
		}
		~Binary()
		{
			//cout<<"\nBinary Class Destructor is Called..."<<endl;
		}

};

Octal :: operator Binary()
{
	cout<<"\n\n*****-----Octal Class Type to => Binary Class Type-----*****\n\n";

	long int s=0, dec;
	int val, i=0;
	long int oct1=oct;

	while(oct1>0)
	{
		val= oct1%10;
		s= s + (val * pow(8, i));
		i++;
		oct1= oct1/10;
	}

	dec=s;
	s=0, i=0;

	while(dec>0)
	{
		val=dec%2;
		s=s+ val*pow(10, i);
		i++;
		dec= dec/2;
	}
	return Binary(s);
}

Binary :: operator Octal()
{
	cout<<"\n\n*****-----Binary Class Type to => Octal Class Type-----*****\n\n";

	long int s=0, dec;
	int val, i=0;
	long int bin1=bin;
	while(bin1>0)
	{
		val = bin1 % 10;
		s = s + (val*pow(2, i));
		i++;
		bin1 = bin1/10;
	}
	dec=s;
	s=0, i=0;

	while(dec>0)
	{
		val=dec%8;
		s = s + val * pow(10, i);
		i++;
		dec = dec/8;
	}
	return Octal(s);

}

void main()
{
	clrscr();
	Octal O1(100), O2;
	Binary B1, B2(1000000);

	B1=O1;
	B1.out();
	O1.out();

	cout<<"\n\n\n";

	O2=B2;
	B2.out();
	O2.out();

	getch();
}