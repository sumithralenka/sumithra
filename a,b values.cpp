#include<stdio.h>
int main()
{
	int a=10,b=20,tem; 
	printf("before swap:a=%d\t b=%d\t",a,b);
	tem=a;
	a=b;
    b=tem;
	printf("a=%d\t b=%d\t",a,b);
	return 0;
}
