#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>

class Decimal;

class Binary
{
	private:

		long int bin;

	public:

		Binary()
		{
			//cout<<"\nBinary Class Default Constructor is Called..."<<endl;
		}
		Binary(long int b)
		{
			//cout<<"\nBinary Class Constructor is Called to Assign Value..."<<endl;
			bin=b;
		}
		operator Decimal();

		void out()
		{
			cout<<"\nValue of Binary : "<<bin<<endl;
		}
		~Binary()
		{
			//cout<<"Binary Class Destructor is Called...."<<endl;
		}
};

class Decimal
{
	private:

		long int dec;

	public:

		Decimal()
		{
			//cout<<"Decimal Class Default Constructor is Called.. "<<endl;
		}
		Decimal(long int d)
		{
			//cout<<"Decimal Constructor is Called to Assign Value..."<<endl;
			dec=d;
		}
		operator Binary();

		void out()
		{
			cout<<"\nvalue of Decimal : "<<dec<<endl;
		}
		~Decimal()
		{
			//cout<<"Decimal Class Destructor is Called..."<<endl;
		}
};

Binary :: operator Decimal()
{
	cout<<"\n\n*****-----Decimal Class Type to => Binary Class Conversation-----*****"<<endl;
	long int sum=0, b1=0;
	long int val=0, i=0;
	b1=bin;
	//cout<<"B*D"<<b1<<endl;
	while(b1>0)
	{
		val=b1%10;
		sum = sum + (val * pow(2, i));
		i++;
		b1=b1/10;
	}
	return Decimal(sum);
}

Decimal :: operator Binary()
{
	cout<<"\n\n*****-----Binary Class To => Decimal Class Conversation-----*****"<<endl;
	long int s=0, dec1=0;
	long int i=0,  val=0;
	dec1=dec;
	//cout<<"D*B"<<dec1<<endl;
	while(dec1>0)
	{
		val=dec1%2;
		s=s + val *pow(10, i);
		i++;
		dec1= dec1/2;
	}
	return Binary(s);
}

void main()
{
	clrscr();
	Decimal d1(100), d2;
	Binary b1, b2(1100100);

	b1=d1;
	d1.out();
	b1.out();

	cout<<"\n\n\n";

	d2=b2;
	b2.out();
	b2.out();
	getch();
}






