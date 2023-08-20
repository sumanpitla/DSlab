#include<stdio.h>
int sort(int *a,int low,int high)
{
	int pivot,i,j,temp;
	if(low<high)
	{
		pivot=low;
		i=low;
		j=high;
		while(i<j)
		{
			while(a[i]<=a[pivot])
			{
				i++;
			}
			while(a[j]>a[pivot])
			{
				j--;
			}
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[j];
		a[j]=a[pivot];
		a[pivot]=temp;
		sort(a,low,j-1);
		sort(a,j+1,high);
	}
	return *a;
}
int main()
{
	int a[]={4,3,2,1,5,7,6};
	int n,i,j,t;
	n=sizeof(a)/sizeof(a[0]);
	sort(a,0,n-1);
	printf("\nafter sorting the elements:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
	
