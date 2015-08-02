#include<stdio.h>
#include<string.h>

void main()
{
	int cmpstr(char*,char*);
	int result = 0;
	char* str1 = "a";
	char* str2 = "A";
	printf("\n before call");
	result=cmpstr(str1,str2);
	printf("\n after call %d", result);
	if(result == 0)
		printf("\n str1 and str2 are the same");
	else if(result > 0)
		printf("\n str1 > str2");
	else
		printf("\n str1 < str2");

}

int cmpstr(char* s,char* t)
{
	printf("\n in the function");
	for(;*s == *t;s++,t++)
		if(*s == '\0')
			return 0;
	return *s - *t;
} 
