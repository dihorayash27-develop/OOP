#include<iostream.h>
#include<conio.h>
#define SIZE 10
class array
{
	int a[SIZE];
	public:
		array();
		int operator[](int index);
		int operator()(int index);
		~array()
		{
			cout<<"destructor called here.."<<endl;
		}
};
void array::array()
{
	cout<<"constructor called here.."<<endl;
	for(int i=0;i<SIZE;i++)
	{
		cout<<"enter["<<i<<"]element:";
		cin>>a[i];
	}
}
int array::operator[](int index)
{
	if(index>=SIZE || index<0)
		return 9999;
	return a[index];
}
int array::operator()(int index)
{
	if(index>=SIZE || index<0)
		return 9999;
	return a[index];
}
void main()
{
	clrscr();
	array v;
	int location,temp;
	cout<<"\n enter the location to search the value:";
	cin>>location;
	temp=v[location];
	if(temp==9999)
		cout<<"\n index value is out of range.[from subscript operator]";
	else
		cout<<"\n searched value from subscript operator is:"<<temp;

	temp=v(location);
	if(temp==9999)
		cout<<"\n index value is out of range.(from function operator)";
	else
		cout<<"\n searched value from function operator is:"<<temp;
	getch();
}