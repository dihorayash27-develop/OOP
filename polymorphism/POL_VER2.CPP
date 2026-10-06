#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
class media
{
	protected:char title[20];
		float price;
	public:
		media(char *ptr,float p)
		{
			strcpy(title,ptr);
			price=p;
		}
		virtual ~media()
		{
			cout<<"\nmedia base class virtual destructor call.."<<endl;
		}
		virtual void display()=0;
};
class cd:public media
{
	private:char c_type[15];
		int qty;
	public:
		cd(char *ptr,float p,char *c,int q):media(ptr,p)
		{
			strcpy(c_type,c);
			qty=q;
		}
		void display();
};
void cd::display()
{
	cout<<"\ntitle: "<<title;
	cout<<"\ncd type: "<<c_type;
	cout<<"\nprice: "<<price;
	cout<<"\nQuantity: "<<qty;
}
class Flopy:public media
{
	private:char f_type[15];
		int qty;
	public:
		Flopy(char *ptr,float p,char *c,int q):media(ptr,p)
		{
			strcpy(f_type,c);
			qty=q;
		}
		void display();
};
void Flopy::display()
{
	 cout<<"\ntitle : "<<title;
	 cout<<"\nflopy type : "<<f_type;
	 cout<<"\nprice : "<<price;
	 cout<<"\nquantity : "<<qty;
	 cout<<"\namount :rs. "<<qty*price;
}
void main()
{
	clrscr();//media m; point 4
	cd cd1("samsung",10.00,"700mb/80 min",5);
	Flopy fl1("sony",12.00,"1.44mb",5);
	media *list[2];
	list[0]=&cd1;
	list[1]=&fl1;
	cout<<"\t\t\t\t...media detail..."<<endl;
	cout<<"...cd detail...."<<endl;
	list[0]->display();
	cout<<"\n...flopy detail..."<<endl;
	list[1]->display();
	getch();
}