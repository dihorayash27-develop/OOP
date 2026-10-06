#include<iostream.h>
#include<conio.h>
class money
{
	private:
		int rupees,paisa;
	public:
		money(int r,int p)
		{
			rupees=r;
			paisa=p;
		}
		operator int(); //Class To Basic
		~money()//Destructor
		{
			cout<<"Destructor is  Called."<<endl;
		}

};
money::operator int() //Return Type is Not There Even Void
{
	cout<<"Class Type To Basic Type"<<endl;
	return(rupees*100+paisa);
}
void main()
{
	clrscr();
	int p,r,total;

	cout<<"Enter The Rupees:";
	cin>>r;

	cout<<"Enter The Paisa:";
	cin>>p;

	money m1(r,p);
	cout<<"Object M1 Overload Assignment Operator Second Method..."<<endl;
	total=m1;
	cout<<"Total Money is:"<<total<<endl;
	getch();
}
