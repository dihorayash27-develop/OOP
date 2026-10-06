#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();

	int *ptr;
	int i;

	printf("Initial Value of ptr is:%u store at %u\n",ptr,&ptr);

	for(i=0; i<6; i++)
	{
		printf("Enter The Value at %u:",ptr);
		scanf("%d",ptr); //Equal scanf("%d",&*ptr);
		ptr++;
	}

	for(i=0; i<5; i++)
	{
		ptr--;
		printf("\nthe Value is:%d and the Address %u",*ptr,ptr);
	}
	getch();
}