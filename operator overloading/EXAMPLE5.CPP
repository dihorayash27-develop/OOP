#include<iostream.h>
#include<conio.h>
class X
{
	int a;
	public:
		X(int i)
		{
			cout<<"constructor with parameter..";
			a=i;
		}
		X()
		{
			cout<<"construcotr called.."<<endl;
		}
		X(const X&);
		X operator++();
		X operator++(int);
		void display();
		~X()
		{
			cout<<"\t destructor called..:"<<endl;
		}
};
X::X(const X&x)
{
	cout<<"\t\t copy constructor called.."<<endl;
	this->a=x.a;
}
X X::operator++()
{
	cout<<"prefix increment operator called.."<<endl;
	X temp;
	temp.a=++a;
	return(temp);
}
X X::operator++(int)
{
	cout<<"postfix increment operator called.."<<endl;
	X temp;
	temp.a=a++;
	return(temp);
}
void X::display()
{
	cout<<"the value of a:"<<a<<endl;
}
void main()
{
	clrscr();
	X o1(10),o2(10),o3;

	cout<<"content of o1&o2 with out overloading is.."<<endl;
	o1.display();
	o2.display();

	cout<<"\n content os o3 with overloading is.."<<endl;
	o3=++o1;
	o3.display();
	o1.display();

	cout<<"\n content of o3 with overloading is.."<<endl;
	o3=o2++;
	o3.display();
	o2.display();
	getch();
}