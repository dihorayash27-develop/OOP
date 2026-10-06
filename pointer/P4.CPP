#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();

	char *ptr;
	int i;

	printf("the value of ptr is %u and stored at %u\n",ptr,&ptr);

	printf("Enter The String:");
	gets(ptr);

	printf("The String:");
	puts(ptr);

	printf("The Content of the ptr is %c And Address is %u\n",*ptr,ptr);

	for(;*ptr!=NULL;)
	{
		printf("Content is %-2c",*ptr);
		printf("Address %u\n",ptr);
		ptr++;
	}
	getch();
}

