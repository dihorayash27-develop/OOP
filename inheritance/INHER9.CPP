#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
class employee
{
	protected:float emp_no,basic;
		  char name[10];
	public:employee();
		void put_emp();
		~employee()
		{
			cout<<"employee destructor called.."<<endl;
		}
};
void employee::employee()
{
	cout<<"employee constructor called.."<<endl;
	cout<<"enter the emp_no & emp_name:";
	cin>>emp_no>>name;
	cout<<"enter the basic salary:";
	cin>>basic;
}
void employee::put_emp()
{
	cout<<setw(5)<<emp_no<<setw(5)<<name<<setw(5)<<basic;
}
class da_hra:virtual public employee
{
	protected:float da_amt,hra_amt;
	public:da_hra(float d,float h)
	{
		cout<<"DA_HRA construcor called.."<<endl;
		da_amt=(basic*d);
		hra_amt=(basic*h);
	}
	~da_hra()
	{
		cout<<"da_hra destructor call.."<<endl;
	}
};
class allowance:public virtual employee
{
	protected:float tran_allow,exam_allow;
	public:allowance(float t,float e)
	{
		cout<<"allowance constructor called.."<<endl;
		tran_allow=t;
		exam_allow=e;
	}
	~allowance()
	{
		cout<<"allowance destructor";
	}
};
class salary:public da_hra,public allowance
{
	private:float total;
	public:salary(float d,float h,float t,float e):

		employee() ,da_hra(d,h),allowance(t,e)
		{
			cout<<"salary constructor called.."<<endl;
		}
		void display();
		~salary()
		{
			cout<<"salary destructor called here..."<<endl;
		}

};
void salary::display()
{
	total=basic+da_amt+hra_amt+tran_allow+exam_allow;
	put_emp();
	cout<<setw(5)<<da_amt<<setw(5)<<hra_amt;
	cout<<setw(5)<<tran_allow<<setw(5)<<exam_allow<<endl;
	cout<<"total salary:"<<total<<endl;
}
void main()
{
	clrscr();
	salary s1(0.50,0.15,400,200);
	s1.display();
	getch();
}