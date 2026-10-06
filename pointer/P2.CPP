#include<stdio.h>
#include<conio.h>
void main()
{

	int i;
	int *intpt;
	i=10;

	clrscr();
	intpt=&i; //intpt=i Cannot Convert int to int* Error Display

	printf("\n The Content of I is %5d And Store At %5u",i,&i);
	printf("\n The Value of intpt id %5u And Store At %5u",intpt,&intpt);
	printf("\n The Content Of intpt id %5d And Stored At %5u",*intpt,intpt);

	i=20;
	printf("\n The Content of intpt %5d And Store At %5u",*intpt,intpt);
	*intpt=*intpt+10; //Change i Value Indirectly
	printf("\n The Content of Input is %5d and Store at %5u",*intpt,intpt);

	getch();


}