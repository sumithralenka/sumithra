#include<stdio.h>
int main()
{
	int a[100],i,j,n,found=0;
	printf("enter size of array:");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("enter value at a[%d] position",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				printf("duplicate value at %d");
				found=1;
			}
		}
	}
	if(found=0)
	printf("no duplicate value");
	return 0;
}
