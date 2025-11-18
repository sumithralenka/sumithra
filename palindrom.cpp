#include<stdio.h>
int main()
{
	int num,sum,rem,backup;
	printf("enter any number");
	scanf("%d",&num);
	backup=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	if(backup==sum)
	printf("palindrom number");
	else
	printf("not a palindrom number");
	return 0;
}
