#include<stdio.h>
main()
{
	int n , i, fac = 1;
	printf("Factorial of: ");	
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		fac = fac * i;	
	}
	printf("%d! = %d",n,fac);
}
