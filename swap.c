#include<stdio.h>
void main()
{
	void swap(int,int);
	void swapit(int * ,int *);
	int i1 = 10, i2 = 20;
	swap(i1,i2);
	printf("i1 = %d ,i2 = %d \n",i1,i2);
	swapit(&i1,&i2);
	printf("i1 = %d ,i2 = %d \n",i1,i2);
}

void swap(int a, int b)
{
	int c;
	c=b;
	b=a;
	a=c;
	printf(" In the function : \ni1 = %d ,i2 = %d \n",a,b);
}
void swapit(int *a, int *b)
{
	int c;
	c=*b;
	*b=*a;
	*a=c;
	printf(" In the function : \ni1 = %d ,i2 = %d \n",*a,*b);
}
