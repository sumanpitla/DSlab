#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],i,j,n,m,temp;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		m=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[m]){
				m=j;
			}
		}
		temp=a[i];
		a[i]=a[m];
		a[m]=temp;
}
printf("elements after sorting are\n");
for(i=0;i<n;i++){
	printf(" %d",a[i]);
}
return 0;
}

