#include<iostream.h>
#include<conio.h>
class Length{
	private:
		int m,c,mili;
	public:
		Length(){
			cout<<"Constructor called:"<<endl;
		}
		void getdata();
		void display();
		operator int();
		~Length(){
			cout<<"Destructor called:"<<endl;
		}
};
void Length::getdata(){
	cout<<"Enter Meter:";
	cin>>m;

	cout<<"Enter Centimeter:";
	cin>>c;

	cout<<"Enter Milimeter:";
	cin>>mili;
}
void Length::display(){
	cout<<"Meter is:"<<m<<endl;
	cout<<"Centimeter is:"<<c<<endl;
	cout<<"Milimeter is:"<<mili<<endl;
}
Length::operator int(){

	return(m*1000+c*10+mili);

}
void main(){
	clrscr();
	int tot;

	Length l1;
	l1.getdata();
	l1.display();
	tot = l1;
	cout<<"Total Milimeter value is:"<<tot<<endl;
	getch();
}