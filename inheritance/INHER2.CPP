#include<iostream.h>
#include<conio.h>
class B
{
	private:int a;
	public:
		int b;
		B()
		{
			cout<<"base class constructor called.."<<endl;
		}
		void get_ab();
		int get_a();
		void show_a();//both name are same for line the derived class
		void line()
		{
			cout<<"base class line function.."<<endl;
		}
		~B()
		{
			cout<<"base class destructor called here.."<<endl;
		}
};
class D:private B
{
	private:int c;
	public:
		D()
		{
			cout<<"derived class constructor call.."<<endl;
		}
		void mul();
		void display();
		void line()
		{
			cout<<"derived class line function"<<endl;
		}
		~D()
		{
			cout<<"derived class destructor called.."<<endl;
		}
};
void B::get_ab()
{
	cout<<"enter the value of a&b:";
	cin>>a>>b;
}
int B::get_a()
{
	return a;
}
void B::show_a()
{
	cout<<"base class call.."<<endl;
	cout<<"a==>"<<a<<endl;
}
void D::mul()
{
	get_ab();//this->get_ab()
	c=b*get_a();
}
void D::display()
{
	cout<<"derived class call"<<endl;
	show_a();
	cout<<"b==>"<<b<<endl;
	cout<<"c==>"<<c<<endl;
}
void main()
{
	clrscr();
	D d;
	d.mul();
	d.display();
	cout<<endl;
	d.mul();
	d.display();
	d.line();
	getch();
}