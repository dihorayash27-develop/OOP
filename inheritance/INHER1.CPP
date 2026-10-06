#include<iostream.h>
#include<conio.h>
class B
{
	protected:
		int a;
	public:
		int b;
		B()
		{
			cout<<"base class constructor called..."<<endl;
		}
		void get_ab();//both are same derived call..
		void line()
		{
			cout<<"base class line function"<<endl;
		}
		~B()
		{
			cout<<"base class destrucotr called.."<<endl;
		}
};
class D:public B
{
	private:int c;
	public:
		D()
		{
			cout<<"derived class constructor called here.."<<endl;
		}
		void mul();
		void display();
		void line()
		{
			cout<<"derived class line function"<<endl;
		}
		~D()
		{
			cout<<"derived class destructor called here.."<<endl;
		}
};
void B::get_ab()
{
	cout<<"enter the value of a & b:";
	cin>>a>>b;
}
void D::mul()
{
	c=b*a;
}
void D::display()
{
	cout<<"sub class call.."<<endl;
	cout<<"a==>"<<a<<endl;
	cout<<"b==>"<<b<<endl;
	cout<<"c==>"<<c<<endl;
}
void main()
{
	clrscr();
	D d;
	d.get_ab();
	d.mul();
	d.display();
	cout<<endl;
	d.b=20;//public member can be initialized outside
	d.mul();
	d.display();
	d.line();
	getch();
}
