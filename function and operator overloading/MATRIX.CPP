#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
class matrix
{
	private:
		int a[2][2];
	public:
		void getdata();
		matrix operator +(matrix &);
		void putdata();
};
void matrix::getdata()
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
	}
}
matrix matrix::operator +(matrix &c)
{
	matrix temp;
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			temp.a[i][j]=a[i][j]+c.a[i][j];
		}
	}
	return temp;

}
void matrix::putdata()
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<setw(4)<<a[i][j];
		}
		cout<<endl;
	}
}
void main()
{
	clrscr();
	matrix obj1,obj2,obj3;
	cout<<"matrix A.."<<endl;
	obj1.getdata();
	cout<<"matrix B"<<endl;
	obj2.getdata();
	obj3=obj1+obj2;
	obj3.putdata();
	getch();
}