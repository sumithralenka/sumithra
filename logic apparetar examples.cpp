#include<stdio.h>
int main()
{
	int a=5,b=8,c=10;
	printf("%d\n",(a>b && a>c));
	printf("%d\n",(b>a || b>c));
	printf("%d\n",!(c>a && c>b));
	return 0;
}
