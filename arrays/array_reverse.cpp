#include<stdio.h>	
int main()
{
	int a[6]={7,5,3,2,4,6};
	int i,n;
	n=6;
//assign adress to pointer
printf("reverse of an array:");
	for(i=5;i>=0;i--)
	{
		printf("%d ",a[i]);
		
	}
	return 0;
}

