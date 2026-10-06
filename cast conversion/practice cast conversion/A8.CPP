#include<iostream.h>
#include<conio.h>
class Mili_Second;
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

		long int gethrs()
		{
			return hrs;
		}

		long int getmins()
		{
			return mins;
		}

		long int getsecond()
		{
			return second;
		}

};

class Mili_Second
{
	private:

		long int mili_s;

	public:

		Mili_Second()
		{
			cout<<"Default Constructor is Called..."<<endl;
		}

		~Mili_Second()
		{
			cout<<"Destructoe is Called..."<<endl;
		}

		void cal()
		{
			H_M_S H1;

			mili_s=(H1.gethrs() * 3600000) + (H1.getmins() * 60000) + (H1.getsecond() * 1000);

		}

		void display()
		{
			cout<<"Total Mili Seconds : "<<mili_s;
		}
};

void main()
{
	clrscr();

       //	H_M_S H1;

	Mili_Second M1;

	M1.cal();
	M1.display();

	getch();
}