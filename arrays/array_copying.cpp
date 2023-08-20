#include<stdio.h>	
int main()
{
	int a[6]={7,5,3,2,4,6};
	int i,n;
	n=sizeof(a)/sizeof(a[0]);
	int b[n];
printf("before array copying:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		
	}
	printf("\nafter array copying:");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
		
	}
	return 0;
}

