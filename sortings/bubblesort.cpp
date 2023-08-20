#include<stdio.h>
int main()
{ 


	int a[]={1,4,2,6,8,3},i,j;
	int n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j+1]<a[j])
		
		{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nafter sorting the elements in the array:\n");
		for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
		
	
}
