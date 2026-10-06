#include<iostream.h>
#include<conio.h>
class index;
class human
{
	private:
		double wkg,hinch;
	public:
		human()
		{
			cout<<"Human Constructor is Called."<<endl;
			wkg=0;
			hinch=0;
		}
		human(double w,double h)
		{
			cout<<"Human Parameterised Constructor is Called."<<endl;
			wkg=w;
			hinch=h;
		}
		operator index();
		void display()
		{
			cout<<"weight in Kg is:"<<wkg<<endl;
			cout<<"hight in inch is:"<<hinch<<endl;
		}
		~human()
		{
			cout<<"Human Destructor is Called."<<endl;
		}
};
class index
{
	private:
		double bmi;
	public:
		index()
		{
			cout<<"index Constructor is Called."<<endl;
			bmi=0;
		}
		index(double b)
		{
			cout<<"Index Parameterised Constructor is Called."<<endl;
			bmi=b;
		}
		void display()
		{
			cout<<"bmi is:"<<bmi<<endl;
		}
		~index()
		{
			cout<<"Index Destructor is Called."<<endl;
		}
};
human::operator index()
{
	cout<<"Operator overloading and Cast Convertion:"<<endl;
	double m,bmi,i;
	m=hinch*0.0254;
	i=m*m;
	bmi=wkg/i;
	return index(bmi);
}
void main()
{
	clrscr();
	human h1(80,69);
	index i1;

	i1=h1;
	i1.display();
	h1.display();

	getch();
}