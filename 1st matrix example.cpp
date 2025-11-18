#include<stdio.h>
int main()
{
	int a[100][100],r,c,j,i;
	printf("enter size of rows and coloums:");
	scanf("%d %d",&r,&c);
	for(i=0; i<=r; i++)
	{
		for(j=0; j<=c; j++)
		{
			printf("enter value at a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<=r; i++)
	{
		for(j=0; j<=c; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

