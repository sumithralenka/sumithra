#include<stdio.h>
int main()
{
	int a[100],i,n,found=0,search,low,high,mid;
	printf("enter size of array:");
	scanf("%d",&n);
	for(i=0; i<=n; i++)
	{
		printf("enter value at a[%d] position:",i);
		scanf("%d",&a[i]);
	}
	printf("enter search element:");
	scanf("%d",&search);
	low=0;
	high=n-1;
	while(low<=n)
	{
	  mid=low+high%2;
	  if(search==a[mid])
	  {
	  	printf("searching element found at %d",mid);
	  	found=1;
	  	break;
	  }
	  else if(search>a[mid])
	  {
	  	low=mid+1;
	  }
	  else if(search<a[mid])
	  {
	  	high=mid-1;
	  }
	  
	}
	if(found==0)
	{
		printf("element not found:");
	}
	return 0;
}
