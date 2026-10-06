#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char *ptr,temp;
	int n,i=0;

	printf("Enter The String:");
	gets(ptr);

	printf("The Base Address is %u Store At %u\n",ptr,&ptr);

	while(*(ptr+i)!=NULL)
	{
		printf("Content is %2c Address %u\n",*(ptr+i),(ptr+i));
		i++;
	}

	n=strlen(ptr);
	i=1;

	do{
		temp=*(ptr+n-i);
		*(ptr+n-i)=*(ptr+i-1);
		*(ptr+i-1)=temp;
		i++;
	}while(n/2>=i);
	puts(ptr);

	getch();
}