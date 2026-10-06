#include<iostream.h>
#include<conio.h>
class worker
{
	private:
		int age;
		char name[10];
	public:void get();
		void show();
};
void worker::get()
{
	cout<<"you name please:";
	cin>>name;
	cout<<"your age please:";
	cin>>age;
}
void worker::show()
{
	cout<<"My name is:"<<name<<"\nand My age is:"<<age<<endl;
}
class manager:public worker
{
	private:int now;
	public:void get();
		void show();
};
void manager::get()
{
	worker::get();//calling of
       //cout<<"name is:"<<name<<endl;//not work because private
	cout<<"number of workers under you:";
	cin>>now;
}
void manager::show()
{
	worker::show();//calling of base class o/pfn.
	cout<<"in No.of workerr under me are:"<<now<<endl;
}
void main()
{
	clrscr();
	worker w1;
	w1.get();
	w1.show();

	manager m1;
	m1.get();
	m1.show();
	getch();
}