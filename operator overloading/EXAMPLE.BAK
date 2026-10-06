#include<iostream.h>
#include<conio.h>
class matrix
{
	private:
		int a[2][2];
	public:
		matrix();
		int operator ==(matrix);
		matrix(const matrix &);
		~matrix()
		{
			cout<<"\t destructor called.."<<endl;
		}
};
void matrix::matrix()
{
	int i,j;
	cout<<"constructor called without parameters..."<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"enter["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}

	}
}
matrix::matrix(const matrix &m)
{
	int i,j;
	cout<<"copy constructor call..."<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{

			this->a[i][j]=m.a[i][j];
		}

	}
}
int matri::operator ==(matrix m)
{
	int i,j,flag=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		       if(a[i][j]=m.a[i][j])
		       {
				flag=1;
		       }
		       else
		       {
				flag=0;
				break;
		       }
		}
	}
	if(flag==1)
		return(1);
	else
		return(0);

}
void main()
{
	clrscr();

}