#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int *arr,n;
	cout<<"how many elements are there?";
	cin>>n;
	arr = new int[n];//dynamic allocation of memory

	for(int i=0;i<n;i++)
	{
		cout<<"enter the element of the array:";
		cin>>arr[i];
	}
	cout<<"array elements:";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	delete[] arr;//free entire array
	getch();
}