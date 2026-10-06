#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
class student
{
	protected:int roll_no;
			char n[3];
	public:student();
		~student()
		{
			cout<<"\t destructor called.."<<endl;
		}
};
student::student()
{
	cout<<"student class constructor called"<<endl;
	cout<<"enter the value of roll number:";
	cin>>roll_no;
	cin>>n;
}
class internal:virtual public student
{
	protected:int i_sub1,i_sub2;
	public:internal();
		~internal()
		{
			cout<<"internal class desturctor is here:"<<endl;
		}
};
internal::internal()
{
	cout<<"internal class constructor is caled here"<<endl;
	cout<<"enter the value of the internal subject-1:";
	cin>>i_sub1;
	cout<<"enter the value of the internal subject-2:";
	cin>>i_sub2;
}
class external:virtual public student
{
	protected:int e_sub1,e_sub2;
	public:external();
		~external()
		{
			cout<<"\t external destructor call here"<<endl;
		}
};
external::external()
{
	cout<<"enternal constructor call here.."<<endl;
	cout<<"enter the value of the external subject-1:";
	cin>>e_sub1;
	cout<<"enter the value of the external subject-2:";
	cin>>e_sub2;
}
class result:public internal,public external
{
	private:int total,t_sub1,t_sub2;
	public:result():student(),internal(),external()
	{
		cout<<"result class==> constructor called.."<<endl;
	}
	void caldata();
	void display();
	~result()
	{
		cout<<"\t result destructor is called.."<<endl;
	}
};
void result::caldata()
{
	t_sub1=i_sub1+e_sub1;
	t_sub2=i_sub2+e_sub1;
	total=t_sub1+t_sub2;
}
void result::display()
{
	cout<<setw(7)<<roll_no<<setw(8)<<n<<setw(7)<<i_sub1<<setw(7)<<e_sub1<<setw(7)<<t_sub1;
	cout<<setw(8)<<i_sub2<<setw(8)<<e_sub2<<setw(8)<<t_sub2<<setw(8)<<total<<endl;
}
void main()
{
	clrscr();
	result obj[2];

	cout<<"\t\t result is as follows:"<<endl;
	cout<<setw(8)<<"roll_no"<<setw(8)<<"name"<<setw(8)<<"i_sub1"<<setw(8)<<"e_sub1"<<setw(8)<<"t_sub1";
	cout<<setw(8)<<"i_sub2"<<setw(8)<<"e_sub2"<<setw(8)<<"t_sub2"<<setw(8)<<"total"<<endl;
	for(int i=0;i<2;i++)
	{
		obj[i].caldata();
		obj[i].display();
	}
	cout<<"size of student class:"<<sizeof(student)<<endl;
	cout<<"size of internal class:"<<sizeof(internal)<<endl;
	cout<<"size of external class:"<<sizeof(external)<<endl;
	cout<<"size of result class:"<<sizeof(result)<<endl;
	cout<<"size of total class:"<<sizeof(obj)<<endl;
	getch();
}