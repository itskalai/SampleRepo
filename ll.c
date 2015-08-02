#include<stdio.h>
#include<stdlib.h>

struct elem
{
	int val;
	struct elem *link;
	
}*start=NULL;

typedef struct elem node;

void main()
{
	int loop=1;
	void insert();
	void display();
	void delete();
	while(loop){
 		int choice;
		printf("What operation do you what to perform? 1. Insert 2. Delete 3. print  4. exit \n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			insert();
			break;
		case 2:
			delete();
			break;
		case 3:
			display();
			break;	
		case 4:
			loop=0;
			break;
		default:
			loop=0;
			printf("invalid choice");
		}
	}

}

void insert ()
{
	node * new_node, *cur;
 	int i;
	do
	{

	new_node = (node *) malloc (sizeof(node));
	int data;
	printf("Enter the value to add to list:");
	scanf("%d",&data);
	new_node->val = data;
	new_node->link = NULL;
	if(!start)
	{
		start = new_node;
		cur = new_node;
	}
	else
	{
		cur->link = new_node;
		cur = new_node;
	}

	printf("do you want to add more elements?");
	scanf("%d",&i);
	}while(i!= 0);

}

void display()
{
	node *temp;
	temp=start;
	while(temp)
	{
		printf("%d -->",temp->val);
		temp=temp->link;
	}
	printf("NULL \n");
}

void delete()
{
	node *nav, *temp;
	int rem;
	nav=start;
	printf("Enter the value to be deleted:");
	scanf("%d",&rem);
	
	while(nav)
	{
		if(nav->val == rem)
		{
			printf("Deleting %d \n",nav->val);
			temp->link=nav->link;
			temp=nav;
			display();
			return;
			
		}
		else
		{
			temp=nav;
			nav=nav->link;
		}
	}
}
