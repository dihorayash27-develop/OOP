#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<string.h>
class  Value
{
	private:
		int i;
		char name[20];
	public:
		Value();
		Value(Value &z);
		Value(int k,char str[]);
		~Value();
};
Value::Value(int k,char str[])
{
	cout<<"Constructor With Two Parameters"<<endl;
	i=k;
	strcpy(name,str);
}
Value::Value(Value &z)
{
	cout<<"Copy Constructor Called"<<endl;
	i=z.i;
	strcpy(name,z.name);
}
Value::Value()
{
	cout<<"Constructor Without Paramter"<<endl;
	i=100;
	strcpy(name,"Bhavnagar");
}
Value::~Value()
{
	cout<<"\tDestructor is Call"<<endl;
	cout<<"\tThe Value of i:"<<i<<endl;
	cout<<"\tThe Value of name:"<<name<<endl;
	cout<<"\tRelease the memory of Objct"<<endl;
	cout<<endl;
}
void main()
{
	clrscr();
	Value v1; //Constructor
	Value v2(v1); //Copy Constructor
	Value v3(200,"MCA BCA"); //Call by Value
	cout<<"Destructor Call Start in Reverse Order..."<<endl;
	getch();
}

