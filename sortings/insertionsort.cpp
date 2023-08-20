#include<stdio.h>
int main()
{
	int a[]={4,3,8,3,7,0,8,34};
	int n,i,j,t;
	n=sizeof(a)/sizeof(a[0]);
	for(i=1;i<=n-1;i++)
	{  t=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>t)
			{
				a[j+1]=a[j];
				a[j]=t;
			}
			else
			{
				break;
			}
	}
	}
	printf("after sorting the array:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
