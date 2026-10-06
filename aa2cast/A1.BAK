#include<iostream.h>
#include<conio.h>

class Weight
{
	private:

		long int kg, gram;
	public:

		Weight()
		{
			cout<<"Default Constructor is called to Get Value..."<<endl;
		       /*	kg=0;
			gram=0;*/
			cout<<"Enter Value of Kg : ";
			cin>>kg;
			cout<<"Enter Value of Gram : ";
			cin>>gram;
		}
		/*Weight(long int a, long int b)
		{
			cout<<"Weigth Class Constructor is Called to Assign Values ... \n\n"<<endl;
			kg=a;
			gram=b;
		}*/

		operator int();

		void out()
		{
			cout<<"\n\nValue in Kg : "<<kg<<endl;
			cout<<"Value in Gram : "<<gram<<endl;
		}

		/*~Weight()
		{
			cout<<"Destructor is Called..."<<endl;
		}*/

};

Weight :: operator int()
{
	cout<<"\n\n*****-----Class Weight Type to => Basic Integer Conversion-----*****\n"<<endl;
	long int a = kg*1000 + gram;
	return a;
}

void main()
{
	clrscr();

	long int grm=0;

	Weight W1;
	grm=W1.operator int();
	//grm=W1;
	cout<<"After Total Conversion, Total Gram : "<<grm<<endl;
	W1.out();

	getch();
}