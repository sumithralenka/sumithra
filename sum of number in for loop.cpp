#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter any numer");
	scanf("%d",&n);
	for(i=0; i<50; i++)
	{
		sum=sum+i;
	}
	printf("sum=%d",sum);
	return 0;
}
