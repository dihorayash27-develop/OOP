#include<stdio.h>
#include<conio.h>
#include<iostream.h>
//funcation for call by value
void callbyvalue(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
	cout<<"\ninside callbyvalue function:";
	cout<<"\nA="<<a<<"b="<<b;

}
//function for callbyaddress(reference)
void callbyaddress(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
	cout<<"\ninside the callbyaddress function:";
	cout<<"\nA="<<*a<<"b="<<*b;
}
int main()
{
	clrscr();
	int x=5,y=10;
	cout<<"initial values:\nx="<<x<<"y="<<y;
	//call by value example
	cout<<"\n----call by value----";
	callbyvalue(x,y);
	cout<<"\nafter call by value (in main);";
	cout<<"\nx="<<x<<"y="<<y;
	//call by address example
	cout<<"\n----call by address----";
	callbyaddress(&x,&y);
	cout<<"\nafter callbyaddress (in main);";
	cout<<"\nx="<<x<<"y="<<y;

	getch();
}