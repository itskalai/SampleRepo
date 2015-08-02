#include<stdio.h>
#include<string.h>

void main()
{
	char **strArr;
	int len = 3;
	strArr = malloc(sizeof(char*) * len);
	strArr[0]=malloc(sizeof(char));
	strArr[0] = "this is test line 1";
	strArr[1] = "this is test line 2";
	strArr[2] = "this is test line 3";
	//printf("%s \n", strArr[0]);
	printf("%s \n", *strArr);
	
	


}
