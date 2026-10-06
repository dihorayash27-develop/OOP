#include<iostream.h>
#include<conio.h>
class Shape{
	protected:
		double perimeter;
	public:
		Shape(){
			cout<<"Base class Called:"<<endl;
		}
		virtual void getdata() = 0;
		virtual void calculate() = 0;
		virtual void display() = 0;
		virtual ~Shape(){
			cout<<"Shape distrucot called:"<<endl;
		}
};
class Rectangle:public Shape{
	private:
		double width,length;
	public:
		Rectangle(){
			width = 0;
			length = 0;
		}
		void getdata();
		void calculate();
		void display();
};
void Rectangle::getdata(){
	cout<<endl;
	cout<<"Enter Width:";
	cin>>width;

	cout<<"Enter Length:";
	cin>>length;
}
void Rectangle::calculate()
{
	perimeter = 2*(width*length);
}
void Rectangle::display()
{
	cout<<endl<<"**************Rectangle Information*************"<<endl;
	cout<<"Width is:"<<width<<endl;
	cout<<"Length is:"<<length<<endl;
	cout<<"Perimeter of Rectangle is:"<<perimeter;
	cout<<endl<<"***********************************************"<<endl;
}
class Square:public Shape{
	private:
		double side;
	public:
		Square(){
			side = 0;
		}
		void getdata();
		void calculate();
		void display();
};
void Square::getdata(){
	cout<<endl;
	cout<<"Enter Side:";
	cin>>side;
}
void Square::calculate(){
	perimeter  = 4*side;
}
void Square::display(){
	cout<<endl<<"*****************Square Informaton*************"<<endl;
	cout<<"Side is:"<<side<<endl;
	cout<<"Perimeter ofSquare  is:"<<perimeter<<endl;
	cout<<endl<<"***********************************************"<<endl;
}
class Circle:public Shape{
	private:
		double radius;
	public:
		Circle(){
			radius = 0;
		}
		void getdata();
		void calculate();
		void display();
};
void Circle::getdata(){
	cout<<endl;
	cout<<"Enter Radius:";
	cin>>radius;
}
void Circle::calculate(){
	perimeter  = 2*3.14*radius;
}
void Circle::display(){
	cout<<endl<<"*************************Circle information*******************"<<endl;
	cout<<"Radius is:"<<radius<<endl;
	cout<<"Perimeter of Circle  is:"<<perimeter<<endl;
	cout<<endl<<"***********************************************"<<endl;
}
void main(){
	clrscr();

	Shape *ptr;
	Rectangle r;
	Square s;
	Circle c;

	ptr = &r;
	ptr->getdata();
	ptr->calculate();
	ptr->display();

	ptr = &s;
	ptr->getdata();
	ptr->calculate();
	ptr->display();

	ptr = &c;
	ptr->getdata();
	ptr->calculate();
	ptr->display();

	getch();
}