#include<stdio.h>
main()
{
	int n,fi,i;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fi=fib(i);
		printf("%d \n",fi);
	}
}
int fib(int n)
{
	int f;
	if(n >= 3)
		f=(fib(n-1)+fib(n-2));
	else 
		return 1;

}
