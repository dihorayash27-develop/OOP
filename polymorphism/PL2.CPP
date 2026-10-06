#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
class media
{
	protected:char title[20];
		  float price;
	public:media(char *ptr,float p)
	{
		strcpy(title,ptr);
		price=p;
	}
	virtual ~media()
	{
		cout<<"virtual destructor is called.."<<endl;
	}
	virtual void display()=0;
};
class cd:public media
{
	private:char c_type[20];
		float qty;
	public:
		cd(char *ptr,float p,char *ctype,float q):media(ptr,p)
		{
			strcpy(c_type,ctype);
			qty=q;
		}
		void display();
};
void cd::display()
{
	cout<<"\ntitle:"<<title;
	cout<<"\nprice:"<<price;
	cout<<"\nc_type:"<<c_type;
	cout<<"\nqty:"<<qty;
	cout<<"\namount:"<<price*qty;
}
class flopy:public media
{
	private:char f_type[20];
		float qty;
	public:
		flopy(char *ptr,float p,char *ftype,float q):media(ptr,p)
		{
			strcpy(f_type,ftype);
			qty=q;
		}
		void display();
};
void flopy::display()
{
	cout<<"\ntitle:"<<title;
	cout<<"\nprice:"<<price;
	cout<<"\nf_type:"<<f_type;
	cout<<"\nqty:"<<qty;
	cout<<"\namount:"<<price*qty;
}
class pendrive:public media
{
	private:char p_type[20];
		float qty;
	public:
		pendrive(char *ptr,float p,char *ptype,float q):media(ptr,p)
		{
			strcpy(p_type,ptype);
			qty=q;
		}
		void display();
};
void pendrive::display()
{
	cout<<"\ntitle:"<<title;
	cout<<"\nprice:"<<price;
	cout<<"\np_type:"<<p_type;
	cout<<"\nqty:"<<qty;
	cout<<"\namount:"<<price*qty;
}
void main()
{
	clrscr();
	cd cd1("sam",10.00,"700mb/80min",5);
	flopy f1("sony",12.00,"1.44mb",5);
	pendrive p1("hp",500.00,"16tb",5);
	media *list[3];
	list[0]=&cd1;
	list[1]=&f1;
	list[2]=&p1;
	list[0]->display();
	list[1]->display();
	list[2]->display();
	getch();
}