#include<stdio.h>
int main()
{
	int num,rem,sum;
	printf("enter any number");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	printf("reverse number");
	return 0;
}
