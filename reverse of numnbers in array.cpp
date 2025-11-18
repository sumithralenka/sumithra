#include<stdio.h>
int main()
{
	int n,i;
	printf("enter size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d integers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("reverse of the given array is\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
