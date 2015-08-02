#include<stdio.h>
int main()
{
	int n;
	int i,a,b,c;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	a=1;b=1;
	printf("%d  %d ",a,b);
	for(i=1;i< (n-1);i++)
	{
	c=a+b;
	a=b;b=c;
	printf(" %d ",b);
	}
}
