#include<stdio.h>
void sort(int a[],int l,int m,int h);
void mergesort(int a[],int l,int h)
{
	if(l<h)
	{
		int m=(l+h)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,h);
		sort(a,l,m,h);
		
	}
}
void sort(int a[],int l,int m,int h)

{
	int i=l,j=m+1,k=l;
	int b[100];
	while(i<=m && j<=h)
	{
		if(a[i]<=a[j])
		{
		b[k]=a[i];
		i++;
			
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>m)
	{
		while(j<=h)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=m)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	for(k=l;k<=h;k++)
	{  
		a[k]=b[k];
	}
}

int main()
{
	int a[]={5,2,3,4,1,7,6};
	int n,i,j,t;
	n=sizeof(a)/sizeof(a[0]);
	mergesort( a,0,n-1);
	printf("\nafter sorting the elements:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

