
#include<stdio.h>
void main()
{
	int num,*ptr;
	int arr[10],*arp;
	int i;
	num = 50;
	ptr=&num;
	arr[5]=(1,2,3,4,5);
	*arp=arr;
	printf("%d,%d\n",*ptr,ptr);
	printf("%d,%d",num,&num);
	for(i=0;i<5;i++)
	{
		printf("%d \n",arr[i]);
		//printf("%d \n",arp[i];
	}
}
