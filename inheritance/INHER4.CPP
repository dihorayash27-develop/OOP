#include<iomanip.h>
#include<conio.h>
class student
{
	protected:int roll_no;
	public:void getdata();
};
void student::getdata()
{
	cout<<"enter the roll no:";
	cin>>roll_no;
}
class subject
{
	protected:int sub1,sub2,total;
		  float per;
	public:
		void getdata();

};
void subject::getdata()
{
	cout<<"enter the subject_1 mark:";
	cin>>sub1;
	cout<<"enter the subject_2 mark:";
	cin>>sub2;
}
class result:public student,public subject
{
	//one can be private and one can be public
	public:
		void caldata();
		void display();
};
void result::caldata()
{
	total=sub1+sub2;
	per=total/2.0;
}
void result::display()
{
	cout<<"the resulat is as follows:"<<endl;
	cout.width(5);
	cout<<roll_no<<setw(5);
	cout<<sub1<<setw(5)<<sub2<<setw(5);
	cout<<setw(5)<<total<<setw(8)<<setprecision(2)<<per<<endl;
}
void main()
{
	clrscr();
	result r;
	r.student::getdata();
	r.subject::getdata();
	r.caldata();
	r.display();
	getch();
}