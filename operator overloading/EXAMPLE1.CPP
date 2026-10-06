#include<iostream.h>
#include<conio.h>
class space
{
	private:
		int x;
		float y;
	public:
		space(int,float);
		void display();
		void operator -();//unary operator overloaded
		~space()
		{
			cout<<"desturctor is called here..."<<endl;
		}
};
space::space(int a,float b)
{
	cout<<"constructor called here.."<<endl;
	x=a;
	y=b;
}
void space::display()
{
	cout<<"the value of x = "<<x<<endl;
	cout<<"the value of y = "<<y<<endl;
}
void space::operator -()
{
	x=-x;
	y=-y;
}
void main()
{
	clrscr();
	space s(10,10.20);
	cout<<"object s.."<<endl;
	s.display();
	-s;//negative value display
	cout<<"object s overloaded by unary operator..."<<endl;
	s.display();
	cout<<"objact s overloaded by unary operator second method.."<<endl;
	s.operator -();
	s.display();
	getch();
}
