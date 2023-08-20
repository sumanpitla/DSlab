
//postfix expression 6523+8*+3+**/
//evaluation of postfix
#include<stdio.h>
#include<math.h>
int stack[100];
int top=-1;
//writting here all function difinations
void sum()
{
	int op1,op2,res;
	op1=stack[top];
	top--;
	op2=stack[top];
	top--;
	res=op1+op2;
	top++;
	stack[top]=res;
}
void dif()
{
	int op1,op2,res;
	op1=stack[top];
	top--;
	op2=stack[top];
	top--;
	res=op1-op2;
	top++;
	stack[top]=res;
}
void multi()
{
	int op1,op2,res;
	op1=stack[top];
	top--;
	op2=stack[top];
	top--;
	res=op1*op2;
	top++;
	stack[top]=res;
}
void div()
{
	int op1,op2,res;
	op1=stack[top];
	top--;
	op2=stack[top];
	top--;
	res=op1/op2;
	top++;
	stack[top]=res;
}
void rem()
{
	int op1,op2,res;
	op1=stack[top];
	top--;
	op2=stack[top];
	top--;
	res=op1%op2;
	top++;
	stack[top]=res;
}
void power()
{
	int op1,op2,res;
	op1=stack[top];
	top--;
	op2=stack[top];
	top--;
	res=pow(op2,op1);
	top++;
	stack[top]=res;
}
int main()
{
	char st[30],i;
	printf("eneter the expression:");
	scanf("%[^\n]s",st);
	for (i=0;st[i]!='\0';i++)
	{
	  	//if(st[i]!=' ')
		//{
			switch(st[i])
			{
				case'+':
					sum();
					break;
				case'-':
					dif();
					break;
				case'*':
					multi();
					break;	
				case'/':
					div();
					break;
				case'%':
					rem();
					break;	
				case'^':
					power();
					break;
				default:
					top++;
					stack[top]=st[i]-48;
					//ascii values of numbers start from 48 ,it means 0 ascii value is 48
					/*now in the stack 2 is supposed to stored in the stack as it's ascii 50
					so substract the ascii value of zero from the current ascii number
					0=48(ascci num)
					2=50(ascii num)
					50-48=2
					similarly for 3 ,51-48=3 on so on....*/					
			}
		//}
	}
	printf("\nresult of postfix expression:%d",stack[top]);
	return 0;
	
}
