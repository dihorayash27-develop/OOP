#include<stdio.h>
#include<conio.h>
void main()
{


	int a[]={22,33,44,55,66};
	int i;
	int *ptr;
	clrscr();

	ptr=a; //ptr=&a[0]
	printf("Base Address of Array a is %u\n",a);
	printf("Base Address of Array a is %u\n",&a[0]);
	printf("Base Address of pointer ptr %u\n",ptr);

	for(i=0;  i<=4; i++)
	{
		printf("a[%d]=%3d stored %u\t",i,a[i],&a[i]);
		printf("a[%d]=%d stored at %u\n",i,*(ptr+i),ptr+i);
	}
	printf("\n\n");

	for(i=0; i<=4; i++)
	{
		printf("a[%d] = %3d stored at %u\t",i,i[a],&a[i]);
		printf("a[%d]=%d stored at %u\n",i,*(ptr+i),ptr+i);
		ptr++;
	}
	printf("Content of pointer ptr is %u\n",ptr);

	for(i=0; i<=4; i++)
	{
		*(a+i)=a[i]+i[a];//a[i] = a[i] + a[i]
		printf("Value of a[%u] = %5d\n",i+a,*(i+a));
	}
	getch();

}