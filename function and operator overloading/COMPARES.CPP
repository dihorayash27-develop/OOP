#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class pro1
{
	private:
		char str[50];
		static int ans;
	public:
		pro1();
		void operator -(pro1);
		static void display();
		~pro1()
		{
			cout<<"destructor is called"<<endl;
		}
};
int pro1::ans=0;
pro1::pro1()
{
	cout<<"constructor called"<<endl;
	cout<<"enter your string:";
	gets(str);
}
void pro1::operator -(pro1 c)
{
	int i;
	i=0;
	while(str[i]!=NULL || c.str[i]!=NULL)
	{
		if(str[i]==c.str[i])
		{
			i++;
		}
		else if(str[i]<c.str[i])
		{
			ans=1;
			return;
		}
		else if(str[i]>c.str[i])
		{
			ans=2;
			return;
		}
	}
}
void main()
{
	clrscr();
	pro1 obj1,obj2;
	obj1-obj2;
	pro1::display();
	getch();
}
void pro1::display()
{
	if(ans==1)
	{
		cout<<"obj2 is greater than obj1:"<<endl;
	}
	else if(ans==2)
	{
		cout<<"obj1 is grater than obj2:"<<endl;
	}
	else
	{
		cout<<"obj1 and obj2 is equal:"<<endl;
	}
}