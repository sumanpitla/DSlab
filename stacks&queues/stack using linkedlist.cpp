#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*top=NULL;
void push(int x)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=top;
	top=newnode;
	
}
void pop()
{
	if(top==NULL)
	{
		printf("\nlist is empty");
		
	}
	else{
		printf("\nremoved element is:%d\n",top->data);
		struct node*temp=top;
		top=top->next;
		free(temp);
	}
}
void display()
{
	if(top==NULL)
	{				
			printf("\nlist is empty\n");		
	}
	else
	{
		struct node*temp=top;
		while(temp!=0)
		{
			printf("%d",temp->data);
			temp=temp->next;
			printf("->");
		}
		printf("NULL");
	}
}
int main()
{
	push(10);
	push(20);
	push(30);
	printf("elements present in the stack:\n");
	display();
	pop();
	printf("after remove element from the stack:\n");
	display();
	return 0;
	
}
