#include<stdio.h>
#include<stdlib.h>
#define n 5
int stack[n];
int top=-1;
void push()
{
	int x,r;
	printf("\nenter how many elements you want to add upto 5 :");
	scanf("%d",&r);
	for(int i=0;i<r;i++)
	{
	if(top==n-1)
	{
		printf("\nstack ovrflow\n");
		break;
	}
	else
	{
		printf("enter data:");
	scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
}
void pop()
{
	int x;
	if(top==-1)
	{
		printf("\nunderflow");
	}
	else
	{
	
		x=stack[top];
			top--;
			printf("\nremoved element is :%d",x);
	}
}
void display()
{
	int i;
	/*if(top==-1)
	{
		printf("stack is empty");
	}*/
	for(i=top;i>=0;i--)
	{
		printf("%d ",stack[i]);
	}
}
int main()
{
	push();
	pop();
	pop();
	printf("\nelements present in the stack:");
    display();
	return 0;
}
