#include<stdio.h>
int main()
{
	int a[100],n,found=0,search,i;
	printf("enter size of array:");
	scanf("%d",&n);
	for(i=0; i<=n; i++)
	{
		printf("enter value at a[%d] position",i);
		scanf("%d",&a[i]);
	}
	printf("enter search element:");
	scanf("%d",&search);
	for(i=0; i<=n; i++)
	{
		if(search==a[i])
		{
			printf("searching element is found at %d",i);
			found=1;
			break;
		}
	}
	if(found==0)
	{
		printf("searching is not found:");
	}
	return 0;
}
