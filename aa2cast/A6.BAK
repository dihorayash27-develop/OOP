#include<iostream.h>
#include<conio.h>

class Money
{
	private:

		long int rupees, paisa, p;

	public:

		Money(long int a)
		{
			p=a;
			cout<<" -----------Basic Type Integer To Class Money Type----------"<<endl;
		}

		~Money()
		{
			cout<<"Money Destructor is Called...."<<endl;
		}

		void cal()
		{
			rupees=p/100;
			paisa=p%100;
		}

		void display()
		{
			cout<<"Money in Rupees : "<<rupees<<endl;
			cout<<"Money in Paisa : "<<paisa<<endl;
		}

};

void main()
{
	clrscr();
	long int p;
	cout<<"Enter Total Values in Paisa : ";
	cin>>p;

	Money M1(p);
	M1.cal();
	M1.display();

	getch();
}