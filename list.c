#include<stdio.h>
#include<stdlib.h>
struct list
{
	int val;
	struct list *nxt;
};

typedef struct list node;

void main()
{

	node *cur, *head;
	int i;

	head = NULL;

	for (i=1; i <=10; i++)
	{
		cur = (node *)malloc(sizeof(node));
		cur->val = i;
		cur->nxt = head;
		head=cur;
	}
	
	cur=head;
	
	while(cur)
	{
		printf("%d \n", cur->val);
		cur = cur->nxt;
	}
	
	
}
