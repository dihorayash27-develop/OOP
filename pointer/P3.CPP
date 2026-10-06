#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();

	int *ptr;
	printf("The Value Of ptr %u stored at %u\n",ptr,&ptr);
	ptr=NULL; //Remove Null Value And What Happend Check

	printf("The Value Of %u Stored At %u\n",ptr,&ptr);
	int i,n;
	printf("How Many Values Are There?\n");
	scanf("%d",&n);

	printf("Initial Value Of Ptr is:%u And Address is %u \n",ptr,&ptr);
	for(i=0; i<n; i++)
	{
		printf("Enter ptr[%d] And Address is %u:",i,(ptr+i));
		scanf("%d",(ptr+i));//Do Not write & Sign
	}

	for(i=0; i<n; i++)
	{
		printf("Enter Ptr Value[%d] And Address is %u \n",*(ptr+i),(ptr+i));
	}
	getch();
}

