#include<stdio.h>
int main()
{
   int a[10],key,i,n,flag=0;
   printf("enter the size of an array:");
   scanf("%d",&n);
   printf("enter the array elements\n");
   for(i=0;i<n;i++){
   
   scanf("%d",&a[i]);
    }
    printf("enter the key");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
    	if(a[i]==key)
    	{
    		flag=1;
    		break;
    		
		}
	}
	if (flag==1){
		printf("element is found");
		
	}
	else
	{
		printf("element is not found");
		
	}
	return 0;
}
