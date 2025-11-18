#include<stdio.h>
int main()
{
	int a[10][10],n,j,i,trace=0;
	printf("enter sqare matrix:");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("enter value at a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		trace=trace+a[i][i];
	}
	printf("%d",trace);
	return 0;
}
