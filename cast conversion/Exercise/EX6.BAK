#include<iostream.h>
#include<conio.h>
class money
{
	private:
		int rupees,paisa;
	public:
		void display(); //Simple Member Function
		void operator =(int);

};
void money::operator =(int m)
{
	cout<<"Operator Overloaded And Cast Conversion"<<endl;
	rupees=m/100;
	paisa=m%100;
}
void money::display()
{
	cout<<"Rupees is:"<<rupees<<endl;
	cout<<"Paisa is:"<<paisa<<endl;
}
void main()
{
	clrscr();
	money m1;
	int total;

	cout<<"Enter the Toal Paisa:";
	cin>>total;

	cout<<"Object M1  Overload Eqal To Operator..."<<endl;
	m1=total;
	m1.display();
	getch();

}
