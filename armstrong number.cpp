#include<stdio.h>
int main()
{
	int sum,num,rem,backup;
	printf("enter any number");
	scanf("%d",&num);
	backup=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	if(backup==sum)
	printf("armstrong number");
	else
	printf("not a armstrong number");
	return 0;
}


