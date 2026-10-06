#include<iostream.h>
#include<conio.h>
class reverse
{
	private:
		int no,sum,rem;
	public:
		void getdata();
		void calculation();

};
void reverse::getdata()
{
	cout<<"Enter The No:";
	cin>>no;

}
void reverse::calculation()
{

	while(no>0)
	{
		rem=no%10;
		sum=(sum*10)+rem;
		no=no/10;

	}

	cout<<sum<<"is Reverse Number.";
}
void main()
{
	clrscr();
	reverse r;
	r.getdata();
	r.calculation();
	getch();
}