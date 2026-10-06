#include<iostream.h>
#include<conio.h>
class space
{
	private:
		int x;int y;
	public:
		space();
		space(int,int);
		space(space &);
		void display();
		space operator --();//unary operator overloaded
			~space()
		{
			cout<<"destructor called..."<<endl;
		}
};
space::space()
{
	cout<<"\nconstructor called..."<<endl;
	x=0;
	y=0;
}
space::space(int a,int b)
{
	cout<<"\nconstructor called..."<<endl;
	x=a;
	y=b;
}
space::space(space &ref)
{
	cout<<"\tcopy constructor called.."<<endl;
	x=ref.x;
	y=ref.y;
}
void space::display()
{
	cout<<"the value of x ="<<x;
	cout<<"\t\tthe value of y ="<<y<<endl;
}
space space::operator --()
{
	space temp;
	temp.x=x--;//temp.x=2*x;
	temp.y=y--;
	return (temp);
}
void main()
{
	clrscr();
	space s(10,100),s1;
	cout<<"object s..."<<endl;
	s.display();
	s1=--s;//s1=s--;
	cout<<"object S display original value but y content is modified.."<<endl;
	s.display();
	cout<<"object s1 overloaded by unary operator.."<<endl;
	s1.display();
	cout<<"object s1 overloaded by unary operator by second method.."<<endl;
	s1=s.operator --();
	s1.display();
	getch();
}