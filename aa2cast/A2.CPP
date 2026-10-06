#include<iostream.h>
#include<conio.h>

class Weight
{
	private:

		long int kg, gram, tg;

	public:

		Weight()
		{
			cout<<"Default Constructor is Called..."<<endl;
		}
		Weight(long int a)
		{
			tg=a;
		}
		~Weight()
		{
			cout<<"Destructor is Called..."<<endl;
		}

		void operator =(int tg)
		{
		     cout<<"\n\n*****-----Basic Type Long Integer to => Weight Class Type-----*****\n\n"<<endl;
		     kg= tg / 1000;
		     gram = tg % 1000;
		}

		void display()
		{
			cout<<"Weight in Kg : "<<kg<<endl;
			cout<<"Weight in Gram : "<<gram<<endl;
		}
};

void main()
{
	clrscr();

	long int tgrm;
	cout<<"Enter Total Weight in Gram : ";
	cin>>tgrm;

	Weight W1;

	W1=tgrm;
	W1.display();

	//W1.operator(tgrm); //***Second Method
	//W1.display();

	getch();
}

