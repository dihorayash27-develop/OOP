#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class shape
{
	protected:int perimeter;
	public:shape()
		{
			cout<<"shape constructer is called here.."<<endl;
		}
		virtual void calculate()
		{
			cout<<"perimeter of your shape:"<<endl;
		}
		virtual void getdata()
		{
			cout<<"\t data enter for your shape:"<<endl;
		}
		virtual void display()
		{
			cout<<"\t display value of your shape:"<<endl;
		}
		virtual ~shape()
		{
			cout<<"\t virtual destructor called.."<<endl;
		}

};
class rectangle:public shape
{
	private:int width,length;
	public:rectangle()
		{
			cout<<"rectangle constructor called here.."<<endl;
		}
		void getdata();
		void calculate();
		void display();
};
void rectangle::getdata()
{
	cout<<"enter width of rectangle shape:";
	cin>>width;
	cout<<"enter length of rectangle shape:";
	cin>>length;
}
void rectangle::calculate()
{
	perimeter=2*(length+width);
}
void rectangle::display()
{
	cout<<"perimeter of rectangle is:"<<perimeter<<endl;
}
class square:public shape
{
	private:int side;
	public:square()
		{
			cout<<"shape constructor called here.."<<endl;
		}
		void getdata();
		void calculate();
		void display();
};
void square::getdata()
{
	cout<<"enter the side of square is:";
	cin>>side;
}
void square::calculate()
{
	perimeter=4*side;
}
void square::display()
{
	cout<<"perimeter of the square is:"<<perimeter<<endl;
}
void main()
{
	clrscr();
	shape *ptr;
	shape obj;
	ptr=&obj;

	ptr->getdata();
	ptr->calculate();
	ptr->display();

	rectangle r;
	ptr=&r;

	ptr->getdata();
	ptr->calculate();
	ptr->display();

	square s;
	ptr=&s;

	ptr->getdata();
	ptr->calculate();
	ptr->display();

	cout<<"size of shape object is:"<<sizeof(shape)<<endl;
	cout<<"size of rectangle object is:"<<sizeof(r)<<endl;
	cout<<"size of square object is:"<<sizeof(s)<<endl;
	getch();
}
