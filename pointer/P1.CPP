#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();

	int i=10, j=20, k=30;
	char ch1='C', ch2='Z';
	float ans=5.253;

	printf("The Value Of I is %d stored At %u",i,&i);
	printf("\n The Value of J is %d Stored at %u",j,&j);
	printf("\n The Value of k is %d Stored at %u",k,&k);
	printf("\n The Value of Ch1 is %c Stored At %u",ch1,&ch1);
	printf("\n The Value of Ch2 is %c Stored At %u",ch2,&ch2);
	printf("\n The Value of Ans is %f stored At %u",ans,&ans);

	*&i = *&i + 10;
	*&ch1 = *&ch1 + 1;

	printf("\n The Value Of I is %d Stored At %u",*&i,&i);
	printf("\n The Value of Ch1 is %c Stored At %u",*&ch1,&ch1);
	*&ans = 10.235;

	printf("\n The Value Of ans is  %f Stored At %u",*&ans,&ans);
	getch();
}