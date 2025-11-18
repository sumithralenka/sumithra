#include<stdio.h>
int main()
{
	int year;
	printf("enter any number");
	scanf("%d",&year);
	if(year%4==0)
	printf("leap year");
	else
	printf("non leap year");
	return 0;
}
