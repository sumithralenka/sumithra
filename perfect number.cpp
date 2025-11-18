#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter any number");
	scanf("%d",&n);
	for(i=0; i<10; i++)
	{
		if(i%n==0)
		{
			sum=sum+i;
		}
    }
	if(sum==n)
	printf("perfect number");
	else
	printf("not a perfect number");
	
	return 0;
}
