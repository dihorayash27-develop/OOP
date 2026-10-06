#include<iostream.h>
#include<conio.h>

class H_M_S;

class Mili_Second
{
	private:

		long int mili_s;

	public:

		Mili_Second()
		{
			cout<<"Default Constructor is Called..."<<endl;
		}

		Mili_Second(long int m)
		{
			cout<<"Mili_Second Constructor is Called to Assign Value..."<<endl;
			mili_s=m;
		}

		~Mili_Second()
		{
			cout<<"Destructoe is Called..."<<endl;
		}

		void out()
		{
			cout<<"\n\nTotal Mili Seconds : "<<mili_s;
		}
};

class H_M_S
{
	private:

		long int hrs, mins, second;

	public:

		H_M_S()
		{
			cout<<"Default Constructor is Called to Get Value..."<<endl;
			cout<<"Enter Value for Hours : ";
			cin>>hrs;
			cout<<"Enter Value for Minutes : ";
			cin>>mins;
			cout<<"Enter Value for Seconds : ";
			cin>>second;
		}

		~H_M_S()
		{
			cout<<"H_M_S Destructor is Called..."<<endl;
		}

		operator Mili_Second()
		{
			cout<<"\n\n*****-----H_M_S Class Type to ==> Mili_Second Class Type-----*****\n\n"<<endl;
			long int milis;
			milis=(hrs * 3600000) + (mins * 60000) + (second * 1000);
			return Mili_Second(milis);
		}

		void out()
		{
			cout<<"\n\nValue of Hours : "<<hrs<<endl;
			cout<<"Value of Minutes : "<<mins<<endl;
			cout<<"Value of Seconds : "<<second<<endl;
		}
};

void main()
{
	clrscr();

	Mili_Second M1;
	H_M_S H1;

	M1=H1;
	H1.out();
	M1.out();
	getch();
}