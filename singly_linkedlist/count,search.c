#include<stdio.h>
#include<stdlib.h>
//created singly linked list in c
struct node
{
	int data;
	struct node*next;
}*head,*temp;
 void create()
{
	int choice,i=0;
	struct node*newnode;
	head=0;
	printf("\nenter how many nodes you want to create:");
	scanf("%d",&choice);
	while(i<choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data:");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{

			head=newnode;
		}
		else
		{
			temp=head;
			while(temp->next!=0)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		
		}
		/*printf("\ncontinue press 1 or else 0:");
		scanf("%d",&choice);*/
		i++;
		
	}
}
void count()
{
	temp=head;
	int count=0;
	while(temp!=0)
	{
		count=count+1;
		temp=temp->next;
	}
	printf("\nnumber of nodes in a created linked list:%d",count);
}
void search()
{
	int x;
	printf("\nenter the value to search:");
	scanf("%d",&x);
	temp=head;
	int i=0,flag=0;
	while(temp!=0)
	{
		
		if(temp->data==x){
			flag=1;
			printf("\nelement found at the position:%d",i);
			break;
		}
		i=i+1;
		temp=temp->next;
	}
	if (flag!=1)
	{
		printf("\nelement not found in the created linked list");
	}
}
void display()
{
	temp=head;
	if(temp==0)
	{
		printf("\nlist is empty:");
	}
	else
	{
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
	create();
	printf("created linked list is:\n");
	display();
	count();
	search();
	return 0;
}
