#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char  *ptr,temp;
	int n,i=0,flag=0;

	printf("Enter The String:");
	gets(ptr);

	while(*(ptr+i)!=NULL)
	{
		printf("Content is %2c Address %u\n",*(ptr+i),(ptr+i));
		i++;
	}
	n = strlen(ptr);
	i=1;

	while(n/2>=i){
		//temp=*(ptr+n-i);
		//*(ptr+n-i)=*(ptr+i-1);
		//*(ptr+i-1)=temp;


		if(*(ptr+n-i)==*(ptr+i-1))
		{
			flag=1;
		}
		else
		{
			flag=0;
		}
		i++;
	}
	if(flag==1)
	{

		printf("String is Palindrome");
	}
	else
	{
		printf("String is Not Palindrome ");
	}
	getch();
}