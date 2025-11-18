#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter any number");
	scanf("%d",&n);
	while(i<=10)
	{
	printf("%d*%d=%d",n,i,n*i);
	i++;
	}
	return 0;
}
