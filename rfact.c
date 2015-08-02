#include<stdio.h>
void main()
{
	int n,f;
	printf("Find the factorial of:");
	scanf("%d",&n);
	f=fact(n);
	printf("%d! =  %d",n,f);

}

int fact(int n)
{

	if(n==0)
		return 1;
	else 
		return(n*fact(n-1));
		
}
