#include<stdio.h>
#include<string.h>
void main()
{
	char ch;
	int nc = 0, nl = 0, nw = 0;
	while((ch = getchar()) != EOF)
	{
		putchar(ch);
		nc++;
		if(ch == ' ')
			nw++;
		if(ch == '\n')
			nl++;
	}
	printf("%d, %d, %d",nc,nw,nl);

}
