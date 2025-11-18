#include<stdio.h>
int main()
{
	int a[100][100],transpose[100][100],i,j,r,c;
	printf("enter size of rows and coloums:");
	scanf("%d %d",&r,&c);
	for(i=0; i<=r; i++)
	{
		for(j=0; j<=c; j++)
		{
			printf("enter value at a[%d][%d] position",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<=r; i++)
	{
		for(j=0; j<=c; j++)
		{
			transpose[j][i]=a[i][j];
		}
	}
	printf("transpose of matrix\n");
	for(i=0; i<=r; i++)
	{
		for(j=0; j<=c; j++)
		{
			printf("%d",transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}
