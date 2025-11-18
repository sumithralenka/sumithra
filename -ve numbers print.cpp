#include<stdio.h>
int main()
{
	int i=20;
	printf("enter any number");
	scanf("%d",&i);
	do
	{
		if(i%2==0)
		printf("%d\n",i);
	   i--;
	}while(i>=1);
	return 0;
}
