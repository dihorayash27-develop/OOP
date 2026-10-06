#include<iostream.h>
#include<conio.h>
class space
{
	private:
		int x;
		float y;
	public:
		space()
		{
			cout<<"constructor is call..."<<endl;
			x=0;
			y=0;
		}
		space(int,float);
		space(space &);
		void display();
		space operator * (space);//binary operator
		~space()
		{
			cout<<"distructor is call..."<<endl;
		}
};
space::space(int a,float b)
{
	cout<<"constructor is call..."<<endl;
	x=a;
	y=b;
}
space::space(space &ref)
{
	cout<<"\t\tcopy constructor..."<<endl;
	x=ref.x;
	y=ref.y;
}
space space::operator *(space c)
{
	space temp;
	temp.x = x * c.x;
	temp.y = y * c.y;
	return(temp);
}
void space::display()
{
	cout<< "the value of x ="<<x<<endl;
	cout<< "\t\tthe value of y ="<<y<<endl;
}
void main()
{
	clrscr();
	space s1(20,20.40),s2(30,30.50),s3;
	cout<<endl<<"object s1 original value..."<<endl;
	s1.display();
	cout<<"object s2 original value..."<<endl;
	s2.display();
	cout<<"object s3 overloaded by binary operator.."<<endl;
	s3=s1*s2;
	s3.display();
	cout<<"object s3 overloaded by binary operator second method..."<<endl;
	s3=s1.operator*(s2);
	s3.display();
	getch();

}