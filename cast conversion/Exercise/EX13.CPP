#include<iostream.h>
#include<conio.h>
#include<math.h>
class binary;
class octal
{
	private:
		long int oct;
	public:
		octal()
		{
			cout<<"Octal Constructor is Called."<<endl;
			oct=0;
		}
		octal(long int o)
		{
			cout<<"Ocatal Parameterised Constructor is Called."<<endl;
			oct=o;
		}
		operator binary();
		void display()
		{
			cout<<"Octal is:"<<oct<<endl;
		}
		~octal()
		{
			cout<<"Octal Destructor is Called."<<endl;
		}
};
class binary
{
	private:
		long int bin;
	public:
		binary()
		{
			cout<<"Binary Constructor is Called."<<endl;
			bin=0;
		}
		binary(long int b)
		{
			cout<<"Binart Parameterised Constructor is Called."<<endl;
			bin=b;
		}
		operator octal();
		void display()
		{
			cout<<"Binary is:"<<bin<<endl;
		}
		~binary()
		{
			cout<<"Binary Destructor is Called."<<endl;
		}
};
binary::operator octal()
{
	long int sum=0,dec;
	long int val,i=0;
	long int bin1=bin;
	while(bin1>0)
	{
		val=bin1%10;
		sum=sum+val*pow(2,i);
		i++;
		bin1=bin1/10;
	}
	dec=sum;
	sum=0,i=0;
	while(dec>0)
	{
		val=dec%8;
		sum=sum+val*pow(10,i);
		i++;
		dec=dec/8;
	}
	return octal(sum);
}
octal::operator binary()
{
	long int sum=0,dec;
	long int val,i=0;
	long int oct1=oct;
	while(oct1>0)
	{
		val=oct1%10;
		sum=sum+val*pow(8,i);
		i++;
		oct1=oct1/10;
	}
	dec=sum;
	sum=0,i=0;
	while(dec>0)
	{
		val=dec%2;
		sum=sum+val*pow(10,i);
		i++;
		dec=dec/2;
	}
	return binary(sum);
}
void main()

{
	clrscr();
	octal o1,o2(100);
	binary b1,b2(1000000);


	b1=o2;
	o2.display();
	b1.display();


	o1=b2;
	b2.display();
	o1.display();

	getch();
}